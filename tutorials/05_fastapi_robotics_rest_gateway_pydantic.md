# Lesson 05: Building the Robot REST API Gateway with FastAPI

In Lesson 04, we implemented the thread-safe `MultiThreadedExecutor` background worker. Now, we will wrap this worker inside **FastAPI**, building our production REST API Gateway.

FastAPI is the industry standard for high-performance Python microservices. Built on the **Asynchronous Server Gateway Interface (ASGI)**, it provides asynchronous non-blocking request handling, automated Pydantic v2 validation, and auto-generated Swagger documentation.

---

## 1. Learning Objectives

By the end of this lesson, you will be able to:
1. Embed the `rclpy` background daemon into FastAPI using modern `@asynccontextmanager` **lifespans**.
2. Define Pydantic v2 data models that enforce physical velocity limits ($[-1.0, 1.0]\,\text{m/s}$) and coordinate bounds.
3. Construct core REST endpoints: `GET /api/v1/system/health`, `GET /api/v1/telemetry`, `POST /api/v1/teleop`, and `POST /api/v1/emergency_stop`.
4. Automatically generate interactive OpenAPI (Swagger) documentation at `/docs`.
5. Test endpoints using `curl` and verify automated HTTP 422 input rejection.

---

## 2. Lifespan Management: Starting & Stopping ROS 2 in FastAPI

In modern FastAPI, the `@asynccontextmanager lifespan` pattern manages external background services during server startup and shutdown:

```python
from contextlib import asynccontextmanager
from fastapi import FastAPI
import rclpy

@asynccontextmanager
async def lifespan(app: FastAPI):
    # Startup: Initialize ROS 2 and spawn background worker
    print("[FastAPI Lifespan] Initializing ROS 2 Jazzy subsystem...")
    rclpy.init()
    # (Launch background MultiThreadedExecutor thread here...)
    yield
    # Shutdown: Halt robot and teardown cleanly
    print("[FastAPI Lifespan] Shutting down ROS 2 subsystems cleanly...")
    if rclpy.ok():
        rclpy.shutdown()

app = FastAPI(
    title="NavPro Robot API Gateway",
    version="2.0.0",
    lifespan=lifespan
)
```

---

## 3. Pydantic v2 Robotics Data Models

Pydantic v2 enforces physical safety constraints before any command reaches the ROS 2 `/cmd_vel` publisher:

```python
from pydantic import BaseModel, Field, field_validator
from typing import Dict, Any
import math

class TeleopPayload(BaseModel):
    """Payload for manual velocity commands."""
    linear_x: float = Field(
        ...,
        ge=-1.0,
        le=1.0,
        description="Forward/reverse velocity setpoint (m/s). Clamped between -1.0 and +1.0."
    )
    angular_z: float = Field(
        ...,
        ge=-2.0,
        le=2.0,
        description="Rotational velocity setpoint (rad/s). Clamped between -2.0 and +2.0."
    )

    @field_validator('linear_x', 'angular_z')
    @classmethod
    def check_finite(cls, v: float) -> float:
        if math.isnan(v) or math.isinf(v):
            raise ValueError("Velocity cannot be NaN or Infinite.")
        return v


class NavigationGoalPayload(BaseModel):
    """Payload for dispatching an autonomous navigation waypoint."""
    x: float = Field(..., ge=-50.0, le=50.0, description="Target X coordinate in map frame (m).")
    y: float = Field(..., ge=-50.0, le=50.0, description="Target Y coordinate in map frame (m).")
    yaw: float = Field(0.0, ge=-math.pi, le=math.pi, description="Target orientation yaw angle (rad).")


class SystemHealthResponse(BaseModel):
    """System health snapshot response."""
    robot_id: str = "navpro-mini-amr"
    status: str
    is_online: bool
    battery_percentage: float
    estop_active: bool
    current_position: Dict[str, float]
    ros2_connected: bool
    timestamp: float
```

---

## 4. Mounting the REST Endpoints

```python
from fastapi import APIRouter, HTTPException, status
from geometry_msgs.msg import Twist

router = APIRouter(prefix="/api/v1", tags=["Robotics Core APIs"])


@router.get("/system/health", response_model=SystemHealthResponse)
async def get_system_health():
    """Returns real-time health, connectivity, and battery status."""
    snapshot = robot_state.get_snapshot()
    return SystemHealthResponse(
        robot_id="navpro-mini-amr",
        status="ESTOP" if snapshot["emergency_stop"] else "OPERATIONAL",
        is_online=True,
        battery_percentage=snapshot["battery_percentage"],
        estop_active=snapshot["emergency_stop"],
        current_position={
            "x": round(snapshot["x"], 3),
            "y": round(snapshot["y"], 3),
            "yaw": round(snapshot["yaw"], 3)
        },
        ros2_connected=rclpy.ok(),
        timestamp=snapshot["timestamp"]
    )


@router.post("/teleop", status_code=status.HTTP_200_OK)
async def manual_teleop(cmd: TeleopPayload):
    """Publishes velocity commands to the ROS 2 /cmd_vel topic."""
    snapshot = robot_state.get_snapshot()
    if snapshot["emergency_stop"]:
        raise HTTPException(
            status_code=status.HTTP_409_CONFLICT,
            detail="Cannot execute teleop: Hardware Emergency Stop is currently ENGAGED!"
        )

    # Publish Twist to ROS 2
    twist = Twist()
    twist.linear.x = float(cmd.linear_x)
    twist.angular.z = float(cmd.angular_z)
    ros2_node.cmd_vel_pub.publish(twist)

    return {"status": "COMMAND_ACCEPTED", "linear_x": cmd.linear_x, "angular_z": cmd.angular_z}


@router.post("/emergency_stop", status_code=status.HTTP_200_OK)
async def trigger_emergency_stop():
    """Immediately stops the robot and engages software E-Stop."""
    zero_twist = Twist()
    for _ in range(5):
        ros2_node.cmd_vel_pub.publish(zero_twist)

    robot_state.set_estop(True)
    return {"status": "ESTOP_ENGAGED", "detail": "Motors cut off immediately."}
```

---

## 5. Testing with `curl` & Swagger UI

Launch your server:
```bash
uvicorn server:app --host 0.0.0.0 --port 8080
```

1. **Test Valid Teleop Command:**
   ```bash
   curl -X POST http://localhost:8080/api/v1/teleop \
        -H "Content-Type: application/json" \
        -d '{"linear_x": 0.5, "angular_z": 0.2}' | jq .
   ```
   *Response: `HTTP 200 OK` `{"status": "COMMAND_ACCEPTED"}`*

2. **Test Safety Rejection (Overspeeding):**
   ```bash
   curl -X POST http://localhost:8080/api/v1/teleop \
        -H "Content-Type: application/json" \
        -d '{"linear_x": 99.0, "angular_z": 0.0}' | jq .
   ```
   *Response: `HTTP 422 Unprocessable Entity` — Pydantic automatically rejects the unsafe velocity without executing!*

3. **Open Swagger UI:** Navigate to `http://localhost:8080/docs` in your browser to interactively test every endpoint!

---

## 6. Summary & Next Steps

In this lesson, you built the core REST API Gateway:
- Configured FastAPI with **`@asynccontextmanager lifespan`** for background ROS 2 management.
- Enforced physical velocity limits using **Pydantic v2 schemas**.
- Protected the robot from invalid inputs with automated `422` error responses.

In **Lesson 06**, we will add the **High-Frequency 20Hz WebSocket Telemetry Broadcaster** to stream live robot coordinates to the web!
