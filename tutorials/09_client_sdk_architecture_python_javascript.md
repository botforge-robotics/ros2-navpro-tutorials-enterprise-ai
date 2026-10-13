# Lesson 09: Client SDK Architecture — Building Python & JavaScript Robotics SDKs

Welcome to **Day 2** of the Level 2 Advanced Robotics Workshop! On Day 1, you built a high-performance REST and WebSocket API Gateway.

However, in professional software engineering, frontend web applications, mobile apps, and automated scripts **never make raw `fetch()` or `curl` calls directly to individual endpoints**. If an endpoint URL changes or an authentication header format is updated, every screen across the codebase breaks.

Instead, companies build a **Client SDK (Software Development Kit)**. In this lesson, you will learn the architecture of robotics client SDKs (modeled after the production **`navpromini_sdk`** and Dart [`SdkApiService`](file:///home/chaitu/Projects/nav2_mission_planner/lib/services/sdk_api_service.dart#L41)), building clean, reusable Python and JavaScript client libraries.

---

## 1. Learning Objectives

By the end of this lesson, you will be able to:
1. Explain the architectural advantages of an SDK over ad-hoc raw HTTP/WebSocket requests.
2. Design a standardized, object-oriented client interface: `get_health()`, `teleop()`, `navigate()`, and `on_telemetry()`.
3. Handle network timeouts, graceful reconnects, and structured exceptions (`RobotApiException`).
4. Implement a production Python SDK using `httpx` and `websockets`.
5. Implement a lightweight JavaScript client SDK for browser frontends.

---

## 2. Client SDK Architecture

The SDK encapsulates the complexity of HTTP requests, authentication tokens, JSON serialization, and persistent WebSocket streams behind a clean, developer-friendly class:

```mermaid
graph LR
    subgraph Client_Applications["Client Code (Clean & Readable)"]
        UI["Fleet Cockpit Web App"]
        Script["Python Automation Script"]
    end

    subgraph NavPro_SDK["NavPro Client SDK (Abstraction Layer)"]
        Client["NavProClient(host='192.168.1.100')"]
        HTTPHandler["_send(method, path, body)"]
        WSHandler["_stream_telemetry(callback)"]
        AuthHandler["Bearer Token Injection"]
    end

    subgraph Robot_Backend["Robot Gateway (Port 8080)"]
        REST["FastAPI REST Endpoints"]
        WS["20Hz Telemetry WebSocket"]
    end

    UI -->|client.teleop(0.5, 0.0)| Client
    Script -->|client.navigate(4.2, 1.5)| Client

    Client --> HTTPHandler
    Client --> WSHandler
    HTTPHandler --> AuthHandler

    AuthHandler -->|HTTP / JSON| REST
    WSHandler -->|WebSocket Frames| WS
```

---

## 3. Designing the Python Client SDK (`navpro_client.py`)

Here is the production implementation of the Python SDK:

```python
import time
import json
import asyncio
import threading
from typing import Dict, Any, Callable, Optional
import httpx
import websockets


class RobotApiException(Exception):
    """Raised when the robot gateway returns a non-2xx status code or network fails."""
    def __init__(self, status_code: int, message: str, detail: Optional[Dict[str, Any]] = None):
        self.status_code = status_code
        self.message = message
        self.detail = detail or {}
        super().__init__(f"[{status_code}] {message}: {self.detail}")


class NavProClient:
    """Client SDK for interfacing with NavPro robots over REST and WebSockets."""

    def __init__(self, host: str = "localhost", port: int = 8080, api_token: Optional[str] = None):
        self.base_url = f"http://{host}:{port}"
        self.ws_url = f"ws://{host}:{port}/ws/telemetry"
        self.headers = {"Content-Type": "application/json"}
        if api_token:
            self.headers["Authorization"] = f"Bearer {api_token}"
        self._http = httpx.Client(base_url=self.base_url, timeout=5.0)

    # 1. Health & Status
    def get_health(self) -> Dict[str, Any]:
        """Fetches robot health, connectivity, and battery state."""
        resp = self._http.get("/api/v1/system/health", headers=self.headers)
        if resp.status_code != 200:
            raise RobotApiException(resp.status_code, "Failed to fetch health", resp.json())
        return resp.json()

    # 2. Velocity Teleoperation
    def send_velocity(self, linear_x: float, angular_z: float) -> Dict[str, Any]:
        """Sends velocity setpoint to robot /cmd_vel."""
        payload = {"linear_x": float(linear_x), "angular_z": float(angular_z)}
        resp = self._http.post("/api/v1/teleop", json=payload, headers=self.headers)
        if resp.status_code != 200:
            raise RobotApiException(resp.status_code, "Teleop command rejected", resp.json())
        return resp.json()

    # 3. Autonomous Waypoint Navigation
    def navigate_to_coordinates(self, x: float, y: float, yaw: float = 0.0) -> str:
        """Dispatches autonomous navigation goal and returns tracking goal_id."""
        payload = {"x": float(x), "y": float(y), "yaw": float(yaw)}
        resp = self._http.post("/api/v1/navigation/goal", json=payload, headers=self.headers)
        if resp.status_code != 202:
            raise RobotApiException(resp.status_code, "Navigation goal rejected", resp.json())
        return resp.json()["goal_id"]

    # 4. Emergency Stop
    def emergency_stop(self) -> Dict[str, Any]:
        """Triggers immediate hardware emergency stop."""
        resp = self._http.post("/api/v1/emergency_stop", headers=self.headers)
        return resp.json()

    # 5. Live Telemetry Streaming (WebSocket Thread)
    def start_telemetry_listener(self, on_frame_callback: Callable[[Dict[str, Any]], None]):
        """Spawns background thread streaming 20Hz telemetry over WebSockets."""
        async def ws_loop():
            while True:
                try:
                    async with websockets.connect(self.ws_url) as ws:
                        while True:
                            msg = await ws.recv()
                            data = json.loads(msg)
                            on_frame_callback(data)
                except Exception as e:
                    await asyncio.sleep(2.0) # Retry on disconnect

        def run_loop():
            asyncio.run(ws_loop())

        t = threading.Thread(target=run_loop, daemon=True, name="NavPro-WS-Listener")
        t.start()
        return t
```

---

## 4. Designing the JavaScript SDK (`navpro_client.js`)

For web browsers and the Cockpit GUI, we implement the equivalent JavaScript class:

```javascript
class NavProWebClient {
    constructor(host = "localhost", port = 8080) {
        this.baseUrl = `http://${host}:${port}`;
        this.wsUrl = `ws://${host}:${port}/ws/telemetry`;
        this.ws = null;
    }

    async getHealth() {
        const res = await fetch(`${this.baseUrl}/api/v1/system/health`);
        if (!res.ok) throw new Error(`Health check failed: ${res.statusText}`);
        return await res.json();
    }

    async sendVelocity(linearX, angularZ) {
        const res = await fetch(`${this.baseUrl}/api/v1/teleop`, {
            method: "POST",
            headers: { "Content-Type": "application/json" },
            body: JSON.stringify({ linear_x: linearX, angular_z: angularZ })
        });
        return await res.json();
    }

    async navigate(x, y, yaw = 0.0) {
        const res = await fetch(`${this.baseUrl}/api/v1/navigation/goal`, {
            method: "POST",
            headers: { "Content-Type": "application/json" },
            body: JSON.stringify({ x, y, yaw })
        });
        const data = await res.json();
        return data.goal_id;
    }

    async emergencyStop() {
        const res = await fetch(`${this.baseUrl}/api/v1/emergency_stop`, { method: "POST" });
        return await res.json();
    }

    connectTelemetry(onFrameCallback) {
        this.ws = new WebSocket(this.wsUrl);
        this.ws.onmessage = (event) => {
            const data = JSON.parse(event.data);
            if (data.type === "TELEMETRY_FRAME") {
                onFrameCallback(data);
            }
        };
        this.ws.onclose = () => {
            setTimeout(() => this.connectTelemetry(onFrameCallback), 2000); // Auto reconnect
        };
    }
}
```

---

## 5. Summary & Next Steps

In this lesson, you designed clean Client SDKs:
- Abstracted network protocol details behind simple class methods.
- Built reusable **Python** and **JavaScript** client SDKs.
- Handled network errors and automatic WebSocket reconnection.

In **Lesson 10**, we will use this SDK to build the **Modern Fleet Cockpit UI**, mastering multi-layer Canvas rendering and coordinate transforms!
