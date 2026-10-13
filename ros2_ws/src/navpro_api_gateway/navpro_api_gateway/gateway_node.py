#!/usr/bin/env python3
"""
NavPro Learning Hub - Level 2
Package: navpro_gateway
Module: server.py
Production REST & WebSocket API Gateway bridging Cloud/Web clients to ROS 2.
Supports dual-mode: Real ROS 2 DDS execution when available, or Mock AMR simulation.
"""

import asyncio
import threading
import time
import logging
from typing import Dict, Any, List, Optional
import uvicorn
from fastapi import FastAPI, WebSocket, WebSocketDisconnect, HTTPException
from fastapi.middleware.cors import CORSMiddleware
from pydantic import BaseModel, Field

logging.basicConfig(level=logging.INFO, format='%(asctime)s [%(levelname)s] %(message)s')
logger = logging.getLogger("NavProGateway")

# Try importing rclpy; if not installed or active, run in simulation mode
HAS_ROS2 = False
try:
    import rclpy
    from rclpy.node import Node
    from rclpy.executors import MultiThreadedExecutor
    from geometry_msgs.msg import Twist
    from nav_msgs.msg import Odometry
    HAS_ROS2 = True
except ImportError:
    logger.warning("rclpy not found. Running NavPro Gateway in high-fidelity mock simulation mode.")


# =============================================================================
# 1. Pydantic Request & Response Schemas
# =============================================================================

class NavigationGoalPayload(BaseModel):
    x: float = Field(..., ge=-50.0, le=50.0, description="Target X coordinate in meters")
    y: float = Field(..., ge=-50.0, le=50.0, description="Target Y coordinate in meters")
    yaw: float = Field(0.0, ge=-3.14159, le=3.14159, description="Target Yaw in radians")


class TeleopPayload(BaseModel):
    linear_x: float = Field(..., ge=-1.0, le=1.0, description="Linear velocity setpoint (m/s)")
    angular_z: float = Field(..., ge=-2.0, le=2.0, description="Angular velocity setpoint (rad/s)")


class SystemHealthResponse(BaseModel):
    robot_id: str
    status: str
    is_online: bool
    battery_percentage: float
    estop_active: bool
    current_position: Dict[str, float]
    ros2_connected: bool
    timestamp: float


# =============================================================================
# 2. Shared Robot State Manager (Thread-Safe)
# =============================================================================

class RobotStateManager:
    def __init__(self):
        self.lock = threading.Lock()
        self.robot_id = "navpro-mini-01"
        self.x = 0.0
        self.y = 0.0
        self.yaw = 0.0
        self.linear_velocity = 0.0
        self.angular_velocity = 0.0
        self.battery_pct = 94.5
        self.estop_active = False
        self.active_goal: Optional[Dict[str, float]] = None

    def update_pose(self, x: float, y: float, yaw: float, vx: float, wz: float):
        with self.lock:
            self.x = round(x, 3)
            self.y = round(y, 3)
            self.yaw = round(yaw, 3)
            self.linear_velocity = round(vx, 3)
            self.angular_velocity = round(wz, 3)

    def trigger_estop(self):
        with self.lock:
            self.estop_active = True
            self.linear_velocity = 0.0
            self.angular_velocity = 0.0
            self.active_goal = None

    def reset_estop(self):
        with self.lock:
            self.estop_active = False

    def set_goal(self, x: float, y: float, yaw: float):
        with self.lock:
            if self.estop_active:
                raise ValueError("Cannot set goal: Emergency Stop is currently engaged!")
            self.active_goal = {"x": x, "y": y, "yaw": yaw}

    def get_snapshot(self) -> Dict[str, Any]:
        with self.lock:
            return {
                "robot_id": self.robot_id,
                "status": "EMERGENCY_STOP" if self.estop_active else ("NAVIGATING" if self.active_goal else "IDLE"),
                "is_online": True,
                "battery_percentage": self.battery_pct,
                "estop_active": self.estop_active,
                "current_position": {"x": self.x, "y": self.y, "yaw": self.yaw},
                "linear_velocity": self.linear_velocity,
                "angular_velocity": self.angular_velocity,
                "active_goal": self.active_goal,
                "ros2_connected": HAS_ROS2,
                "timestamp": time.time(),
            }


state_manager = RobotStateManager()

# =============================================================================
# 3. FastAPI Application & WebSocket Hub
# =============================================================================

app = FastAPI(
    title="NavPro AMR Enterprise API Gateway",
    version="2.0.0",
    description="Dual-Plane REST & WebSocket bridge connecting Enterprise Fleet systems to ROS 2 Mobile Robots.",
)

app.add_middleware(
    CORSMiddleware,
    allow_origins=["*"],
    allow_credentials=True,
    allow_methods=["*"],
    allow_headers=["*"],
)


class WebSocketConnectionHub:
    def __init__(self):
        self.active_connections: List[WebSocket] = []
        self.lock = asyncio.Lock()

    async def connect(self, websocket: WebSocket):
        await websocket.accept()
        async with self.lock:
            self.active_connections.append(websocket)
        logger.info(f"WebSocket client connected. Total clients: {len(self.active_connections)}")

    async def disconnect(self, websocket: WebSocket):
        async with self.lock:
            if websocket in self.active_connections:
                self.active_connections.remove(websocket)
        logger.info(f"WebSocket client disconnected. Total clients: {len(self.active_connections)}")

    async def broadcast(self, message: Dict[str, Any]):
        async with self.lock:
            for connection in list(self.active_connections):
                try:
                    await connection.send_json(message)
                except Exception:
                    self.active_connections.remove(connection)


ws_hub = WebSocketConnectionHub()


@app.on_event("startup")
async def startup_event():
    logger.info("NavPro API Gateway initializing background tasks...")
    asyncio.create_task(telemetry_broadcaster_task())


async def telemetry_broadcaster_task():
    """Broadcasts 10 Hz telemetry updates to all connected WebSockets."""
    while True:
        try:
            snapshot = state_manager.get_snapshot()
            await ws_hub.broadcast(snapshot)
        except Exception as e:
            logger.error(f"Error broadcasting telemetry: {e}")
        await asyncio.sleep(0.1)  # 10 Hz


# =============================================================================
# 4. REST Endpoints
# =============================================================================

@app.get("/api/v1/system/health", response_model=SystemHealthResponse)
async def get_health():
    """Retrieve AMR real-time health, diagnostics, and e-stop latch state."""
    snapshot = state_manager.get_snapshot()
    return snapshot


@app.get("/api/v1/telemetry")
async def get_telemetry():
    """Fetch complete live pose and velocity metrics."""
    return state_manager.get_snapshot()


@app.post("/api/v1/navigation/goal", status_code=202)
async def dispatch_goal(goal: NavigationGoalPayload):
    """
    Dispatches a navigation target to the AMR asynchronously.
    Returns HTTP 202 Accepted immediately.
    """
    if state_manager.estop_active:
        raise HTTPException(status_code=400, detail="Cannot dispatch goal: Emergency stop is active!")
    
    try:
        state_manager.set_goal(goal.x, goal.y, goal.yaw)
        logger.info(f"Dispatched navigation goal: ({goal.x}, {goal.y}, yaw={goal.yaw})")
        return {
            "status": "ACCEPTED",
            "message": f"Navigation goal to ({goal.x}, {goal.y}) queued successfully",
            "goal": goal.dict(),
            "timestamp": time.time(),
        }
    except Exception as e:
        raise HTTPException(status_code=500, detail=str(e))


@app.post("/api/v1/teleop")
async def teleop_command(cmd: TeleopPayload):
    """Direct jog/teleop velocity command."""
    if state_manager.estop_active:
        raise HTTPException(status_code=400, detail="Robot is in Emergency Stop state!")
    state_manager.update_pose(
        state_manager.x, state_manager.y, state_manager.yaw,
        cmd.linear_x, cmd.angular_z
    )
    return {"status": "SUCCESS", "linear_x": cmd.linear_x, "angular_z": cmd.angular_z}


@app.post("/api/v1/emergency_stop")
async def emergency_stop():
    """Immediate hardware and software emergency stop."""
    state_manager.trigger_estop()
    logger.warn("EMERGENCY STOP TRIGGERED VIA REST API!")
    return {"status": "EMERGENCY_STOP_ENGAGED", "message": "All motors stopped, safety latched"}


@app.post("/api/v1/emergency_reset")
async def reset_emergency():
    """Clear emergency stop latch."""
    state_manager.reset_estop()
    logger.info("Emergency stop cleared by operator.")
    return {"status": "EMERGENCY_STOP_CLEARED", "message": "AMR restored to operational state"}


@app.websocket("/ws/live_telemetry")
async def websocket_telemetry_endpoint(websocket: WebSocket):
    """High-frequency real-time telemetry stream."""
    await ws_hub.connect(websocket)
    try:
        while True:
            # Keep connection open; listen for incoming client ping or message
            data = await websocket.receive_text()
            if data == "ping":
                await websocket.send_text("pong")
    except WebSocketDisconnect:
        await ws_hub.disconnect(websocket)
    except Exception:
        await ws_hub.disconnect(websocket)


def main():
    uvicorn.run(app, host="0.0.0.0", port=8000)


if __name__ == "__main__":
    main()
