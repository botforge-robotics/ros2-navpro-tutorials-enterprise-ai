#!/usr/bin/env python3
"""
NavPro Learning Hub - Level 2: Day 1
Student Hands-on Task: Build the NavPro Enterprise REST & WebSocket Gateway

=============================================================================
TASK DESCRIPTION:
=============================================================================
Your objective is to complete the production FastAPI + ROS 2 bridge gateway.

Endpoints to implement:
1. `GET /api/v1/system/health`:
   - Returns robot ID, online status, ROS 2 executor state, and battery.
2. `POST /api/v1/navigation/goal`:
   - Accepts JSON payload: `{"x": float, "y": float, "yaw": float}`
   - Validates coordinates: x must be between [-50.0, 50.0], y between [-50.0, 50.0].
   - If invalid, raises HTTPException(400, "Coordinates out of bounds").
   - Dispatches the goal to the ROS 2 Navigator bridge and returns HTTP 202 Accepted.
3. `POST /api/v1/emergency_stop`:
   - Publishes zero velocity on `/cmd_vel` immediately.
   - Sets emergency state = True and returns `{"status": "ESTOP_ENGAGED"}`.
4. WebSocket `/ws/live_telemetry`:
   - Accepts connection and broadcasts live robot state dictionary every 100ms.

Follow the TODOs below to complete the implementation.
"""

import asyncio
import threading
import time
from typing import Dict, Any, List
import uvicorn
from fastapi import FastAPI, WebSocket, WebSocketDisconnect, HTTPException
from pydantic import BaseModel, Field

import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry


# ---------------------------------------------------------------------------
# Data Models
# ---------------------------------------------------------------------------

class NavGoalPayload(BaseModel):
    x: float = Field(..., description="Target X in meters")
    y: float = Field(..., description="Target Y in meters")
    yaw: float = Field(0.0, description="Target yaw orientation in radians")


class HealthStatusResponse(BaseModel):
    robot_id: str
    is_online: bool
    battery_level: float
    current_pose: Dict[str, float]
    estop_active: bool


# ---------------------------------------------------------------------------
# Background ROS 2 Worker Node
# ---------------------------------------------------------------------------

class GatewayRosNode(Node):

    def __init__(self):
        super().__init__('gateway_ros_node')
        self.lock = threading.Lock()

        self.current_x = 0.0
        self.current_y = 0.0
        self.battery_pct = 95.0
        self.estop_active = False

        self.cmd_vel_pub = self.create_publisher(Twist, '/cmd_vel', 10)
        self.odom_sub = self.create_subscription(Odometry, '/odom', self._on_odom, 10)

    def _on_odom(self, msg: Odometry):
        with self.lock:
            self.current_x = round(msg.pose.pose.position.x, 3)
            self.current_y = round(msg.pose.pose.position.y, 3)

    def trigger_estop(self):
        """Immediately halts robot motors and engages estop latch."""
        with self.lock:
            self.estop_active = True
        self.cmd_vel_pub.publish(Twist())

    def clear_estop(self):
        with self.lock:
            self.estop_active = False

    def send_nav_goal(self, x: float, y: float, yaw: float):
        """Simulates dispatching navigation goal to Nav2."""
        self.get_logger().info(f"Dispatched Nav2 Goal: x={x}, y={y}, yaw={yaw}")


# ---------------------------------------------------------------------------
# FastAPI Gateway Application
# ---------------------------------------------------------------------------

app = FastAPI(title="NavPro Gateway Task", version="1.0.0")
ros_node: GatewayRosNode = None
connected_websockets: List[WebSocket] = []


@app.on_event("startup")
async def on_startup():
    global ros_node
    if not rclpy.ok():
        rclpy.init()
    ros_node = GatewayRosNode()

    def spin():
        executor = MultiThreadedExecutor()
        executor.add_node(ros_node)
        executor.spin()

    threading.Thread(target=spin, daemon=True).start()
    asyncio.create_task(telemetry_streamer())


async def telemetry_streamer():
    """Streams data at 10Hz to connected clients."""
    while True:
        await asyncio.sleep(0.1)
        if not connected_websockets or not ros_node:
            continue
        # -------------------------------------------------------------------
        # TODO 4: Broadcast telemetry snapshot to all connected_websockets
        # Construct a dictionary containing 'x', 'y', 'battery', 'estop'
        # Send using ws.send_json(data), catch exceptions and clean up disconnected clients.
        # -------------------------------------------------------------------
        # TODO: FILL IN CODE HERE
        pass


@app.get("/api/v1/system/health", response_model=HealthStatusResponse)
def get_system_health():
    """
    TODO 1: Return the HealthStatusResponse object populated from ros_node:
    - robot_id: "navpro-mini"
    - is_online: True
    - battery_level: ros_node.battery_pct
    - current_pose: {"x": ros_node.current_x, "y": ros_node.current_y}
    - estop_active: ros_node.estop_active
    """
    if not ros_node:
        raise HTTPException(status_code=503, detail="ROS 2 node not initialized")

    # TODO: FILL IN CODE HERE
    return HealthStatusResponse(
        robot_id="navpro-mini",
        is_online=True,
        battery_level=95.0,
        current_pose={"x": 0.0, "y": 0.0},
        estop_active=False
    )


@app.post("/api/v1/navigation/goal", status_code=202)
def dispatch_navigation_goal(payload: NavGoalPayload):
    """
    TODO 2: Validate coordinates:
    - If payload.x < -50.0 or payload.x > 50.0 or payload.y < -50.0 or payload.y > 50.0:
      raise HTTPException(status_code=400, detail="Target coordinates out of allowed facility bounds")
    - If ros_node.estop_active is True:
      raise HTTPException(status_code=409, detail="Cannot navigate: Emergency Stop is active")
    - Call ros_node.send_nav_goal(payload.x, payload.y, payload.yaw)
    - Return {"status": "ACCEPTED", "target": payload.dict()}
    """
    if not ros_node:
        raise HTTPException(status_code=503, detail="ROS 2 node not initialized")

    # TODO: FILL IN CODE HERE
    return {"status": "ACCEPTED", "target": payload.dict()}


@app.post("/api/v1/emergency_stop")
def trigger_emergency_stop():
    """
    TODO 3: Call ros_node.trigger_estop() and return {"status": "ESTOP_ENGAGED"}
    """
    if not ros_node:
        raise HTTPException(status_code=503, detail="ROS 2 node not ready")

    # TODO: FILL IN CODE HERE
    return {"status": "ESTOP_ENGAGED"}


@app.websocket("/ws/live_telemetry")
async def websocket_telemetry_feed(websocket: WebSocket):
    await websocket.accept()
    connected_websockets.append(websocket)
    try:
        while True:
            await websocket.receive_text()
    except WebSocketDisconnect:
        if websocket in connected_websockets:
            connected_websockets.remove(websocket)


if __name__ == '__main__':
    uvicorn.run(app, host="0.0.0.0", port=8000)
