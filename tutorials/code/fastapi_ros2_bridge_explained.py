#!/usr/bin/env python3
"""
NavPro Learning Hub - Level 2: Day 1
Topic: Enterprise Dual-Plane Architecture (FastAPI REST Gateway + Async ROS 2 Execution)

EXPLANATION MODULE:
Commercial robotics platforms cannot expose raw DDS sockets to web browsers or mobile apps.
Instead, we design a High-Performance Bridge Layer:
1. ROS 2 Real-Time Control Plane: runs in a dedicated background worker thread with MultiThreadedExecutor.
2. Web / Cloud Application Plane: FastAPI ASGI web server serving REST APIs and WebSockets.
3. Thread-Safe State Sharing: Atomic caches, thread locks, and non-blocking queues.
4. Non-Blocking Navigation Dispatch: Initiates Nav2 goals asynchronously and returns HTTP 202 Accepted.
"""

import asyncio
import threading
import time
from typing import Dict, Any, List
import uvicorn
from fastapi import FastAPI, WebSocket, WebSocketDisconnect, HTTPException
from fastapi.middleware.cors import CORSMiddleware
from pydantic import BaseModel, Field

import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from geometry_msgs.msg import Twist, PoseWithCovarianceStamped
from nav_msgs.msg import Odometry
from std_msgs.msg import Float32


# =============================================================================
# 1. Pydantic Request / Response Data Models
# =============================================================================

class TelemetryResponse(BaseModel):
    robot_id: str = "navpro-mini-01"
    battery_percentage: float = Field(..., ge=0.0, le=100.0)
    position: Dict[str, float]
    linear_velocity: float
    angular_velocity: float
    is_charging: bool = False
    timestamp: float


class NavigationRequest(BaseModel):
    x: float = Field(..., description="Target X coordinate in meters")
    y: float = Field(..., description="Target Y coordinate in meters")
    yaw: float = Field(0.0, description="Target orientation yaw angle in radians")


class TeleopRequest(BaseModel):
    linear_x: float = Field(..., ge=-1.0, le=1.0)
    angular_z: float = Field(..., ge=-2.0, le=2.0)


# =============================================================================
# 2. Asynchronous ROS 2 Bridge Node
# =============================================================================

class NavProRosBridge(Node):
    """
    Subscribes to internal ROS 2 robot telemetry topics and updates
    a thread-safe state cache for the FastAPI web server.
    """

    def __init__(self):
        super().__init__('navpro_ros_bridge')
        self.lock = threading.Lock()

        # Shared State Cache
        self.state: Dict[str, Any] = {
            'battery': 98.5,
            'x': 0.0,
            'y': 0.0,
            'theta': 0.0,
            'linear_vel': 0.0,
            'angular_vel': 0.0,
            'is_charging': False,
            'last_update': time.time()
        }

        # Publishers
        self.cmd_vel_pub = self.create_publisher(Twist, '/cmd_vel', 10)

        # Subscribers
        self.odom_sub = self.create_subscription(
            Odometry,
            '/odom',
            self._on_odom,
            10
        )
        self.battery_sub = self.create_subscription(
            Float32,
            '/robot/battery_level',
            self._on_battery,
            10
        )

        self.get_logger().info('NavPro ROS Bridge initialized.')

    def _on_odom(self, msg: Odometry):
        with self.lock:
            self.state['x'] = round(msg.pose.pose.position.x, 3)
            self.state['y'] = round(msg.pose.pose.position.y, 3)
            self.state['linear_vel'] = round(msg.twist.twist.linear.x, 3)
            self.state['angular_vel'] = round(msg.twist.twist.angular.z, 3)
            self.state['last_update'] = time.time()

    def _on_battery(self, msg: Float32):
        with self.lock:
            self.state['battery'] = round(msg.data, 1)

    def publish_teleop(self, linear: float, angular: float):
        msg = Twist()
        msg.linear.x = float(linear)
        msg.angular.z = float(angular)
        self.cmd_vel_pub.publish(msg)

    def get_telemetry_snapshot(self) -> Dict[str, Any]:
        with self.lock:
            return dict(self.state)


# =============================================================================
# 3. FastAPI Web Gateway & WebSocket Broadcaster
# =============================================================================

app = FastAPI(
    title="NavPro Mini Enterprise Robotics Gateway",
    version="2.0.0",
    description="Production REST & WebSocket interface for NavPro AMR fleet."
)

app.add_middleware(
    CORSMiddleware,
    allow_origins=["*"],
    allow_credentials=True,
    allow_methods=["*"],
    allow_headers=["*"],
)

# Global ROS bridge instance
ros_bridge: NavProRosBridge = None
active_ws_clients: List[WebSocket] = []


@app.on_event("startup")
async def startup_event():
    global ros_bridge
    # Initialize ROS 2 context if not already done
    if not rclpy.ok():
        rclpy.init()

    ros_bridge = NavProRosBridge()

    # Launch ROS 2 executor spinning in a dedicated background daemon thread
    def spin_ros():
        executor = MultiThreadedExecutor()
        executor.add_node(ros_bridge)
        executor.spin()

    threading.Thread(target=spin_ros, daemon=True).start()

    # Start background task for WebSocket broadcasting at 10Hz
    asyncio.create_task(websocket_telemetry_broadcaster())


async def websocket_telemetry_broadcaster():
    """Streams live telemetry at 10Hz to all connected frontends."""
    while True:
        await asyncio.sleep(0.1)  # 10 Hz
        if not active_ws_clients or not ros_bridge:
            continue

        data = ros_bridge.get_telemetry_snapshot()
        disconnected = []
        for ws in active_ws_clients:
            try:
                await ws.send_json(data)
            except Exception:
                disconnected.append(ws)

        for ws in disconnected:
            if ws in active_ws_clients:
                active_ws_clients.remove(ws)


@app.get("/api/v1/telemetry", response_model=TelemetryResponse)
def get_telemetry():
    """Returns the latest cached robot pose, velocity, and battery."""
    if not ros_bridge:
        raise HTTPException(status_code=503, detail="ROS 2 Bridge is starting")

    snapshot = ros_bridge.get_telemetry_snapshot()
    return TelemetryResponse(
        battery_percentage=snapshot['battery'],
        position={'x': snapshot['x'], 'y': snapshot['y'], 'theta': snapshot['theta']},
        linear_velocity=snapshot['linear_vel'],
        angular_velocity=snapshot['angular_vel'],
        is_charging=snapshot['is_charging'],
        timestamp=snapshot['last_update']
    )


@app.post("/api/v1/teleop")
def execute_teleop(cmd: TeleopRequest):
    """Direct motor drive endpoint from virtual joysticks or UI sliders."""
    if not ros_bridge:
        raise HTTPException(status_code=503, detail="ROS 2 Bridge not ready")

    ros_bridge.publish_teleop(cmd.linear_x, cmd.angular_z)
    return {"status": "ok", "linear": cmd.linear_x, "angular": cmd.angular_z}


@app.websocket("/ws/telemetry")
async def websocket_endpoint(websocket: WebSocket):
    """Real-time 10Hz telemetry feed connection."""
    await websocket.accept()
    active_ws_clients.append(websocket)
    try:
        while True:
            # Keep connection alive; receives optional client pings
            _ = await websocket.receive_text()
    except WebSocketDisconnect:
        if websocket in active_ws_clients:
            active_ws_clients.remove(websocket)


if __name__ == '__main__':
    uvicorn.run(app, host="0.0.0.0", port=8000)
