# Lesson 01: Web Technologies for Roboticists — HTTP, Methods & JSON

Welcome to **Level 2** of the NavPro Robotics Workshop! In Level 1, you mastered the real-time robotics fundamentals: ROS 2 nodes, topics, services, actions, TF2 coordinate transforms, Gazebo physics simulation, and Nav2 autonomous navigation.

However, in commercial robotics systems (such as warehouse AMRs, hospital delivery fleets, and autonomous inspection rovers), robots must communicate with the outside world: web browsers, mobile apps, enterprise ERP systems, and cloud fleet servers.

In this lesson, you will master the foundational language of the modern web: **HTTP (Hypertext Transfer Protocol)**, request methods, status codes, and JSON serialization for robotics.

---

## 1. Learning Objectives

By the end of this lesson, you will be able to:
1. Explain the Client-Server model and how it contrasts with ROS 2 peer-to-peer DDS pub/sub.
2. Dissect an HTTP packet: Request Line, Headers, Query Parameters, and Body.
3. Apply standard HTTP methods (`GET`, `POST`, `PUT`, `DELETE`) to physical robotics operations.
4. Interpret and use industrial HTTP status codes (`200 OK`, `202 Accepted`, `400`, `422`, `500`).
5. Serialize complex ROS 2 telemetry objects into standard JSON payloads.

---

## 2. The Client-Server Model vs. ROS 2 DDS

In ROS 2, nodes use **DDS (Data Distribution Service)** over UDP multicast. Every node discovers every other node dynamically as peers. 

In the web ecosystem, the world operates on the **Client-Server Architecture**:

```
      ROS 2 DDS (Peer-to-Peer Multicast):
      [ Node A ] <─── UDP Multicast ───> [ Node B ]
          │                                  │
          └─────────── [ Node C ] ───────────┘

      Web / Enterprise Cloud (Client-Server):
      [ Web Browser / Cockpit ]  ─── Request (TCP) ───>  [ Robot Gateway Server ]
                                 <─── Response (JSON) ──
```

- **Client:** The initiator of the communication (e.g. a web browser dashboard, mobile app, or Python script).
- **Server:** The robot's onboard API gateway daemon listening on a dedicated port (e.g. port `8080` or `8090`).
- **Statelessness:** By default, each HTTP transaction is independent. The server processes the request and closes or reuses the TCP connection.

---

## 3. Dissecting an HTTP Request & Response

When a web browser clicks a button to inspect a robot, it transmits an HTTP request over TCP:

### 3.1 Raw HTTP Request Packet
```http
POST /api/v1/navigation/goal HTTP/1.1
Host: 192.168.1.100:8080
Content-Type: application/json
Authorization: Bearer navpro_operator_token_456
User-Agent: NavPro-Cockpit/2.0

{
  "x": 4.5,
  "y": 2.0,
  "yaw": 1.57
}
```

- **Request Line:** `POST /api/v1/navigation/goal HTTP/1.1` specifies the method, resource path, and HTTP version.
- **Headers:** Metadata key-value pairs (`Content-Type: application/json` tells the server the body is JSON).
- **Body:** The payload carrying our target $(x, y, \theta)$ coordinates.

### 3.2 Raw HTTP Response Packet
```http
HTTP/1.1 202 Accepted
Content-Type: application/json
Date: Tue, 13 Oct 2026 12:00:00 GMT

{
  "status": "ACCEPTED",
  "goal_id": "nav_88a91b",
  "message": "Navigation goal accepted and dispatched to Nav2."
}
```

---

## 4. HTTP Methods Mapped to Robotics Operations

In RESTful robotics design, we map standard HTTP verbs to specific robot actions:

| HTTP Method | Purpose in Robotics | Example Robotics Endpoint | Expected Payload |
|---|---|---|---|
| **`GET`** | **Read-Only State:** Safe and idempotent. Never triggers physical motion. | `GET /api/v1/telemetry`<br>`GET /api/v1/battery` | None (reads cached state). |
| **`POST`** | **Action Trigger:** Dispatches actuation, creates new goals, triggers E-Stop. | `POST /api/v1/navigation/goal`<br>`POST /api/v1/emergency_stop` | JSON containing parameters: `{"x": 2.5, "y": 1.0}`. |
| **`PUT` / `PATCH`** | **State Update:** Modifies stored configuration or existing landmark. | `PUT /api/v1/waypoints/station_a` | JSON: `{"x": 3.0, "y": 1.5}`. |
| **`DELETE`** | **Cancellation / Deletion:** Cancels an active goal or removes a waypoint. | `DELETE /api/v1/navigation/active_goal`<br>`DELETE /api/v1/waypoints/old_dock` | None or cancellation reason. |

> [!IMPORTANT]
> **Safety Rule: `GET` Requests Must Never Move the Robot!**  
> Web browsers, search indexers, and proxies frequently pre-fetch `GET` URLs automatically. If you configure `GET /api/v1/move_forward` to publish velocity to `/cmd_vel`, your robot could drive into a wall simply because someone opened a browser bookmark! Always use `POST` for physical actuation.

---

## 5. Industrial HTTP Status Codes for Autonomous Fleets

When the robot responds to a client, the status code communicates what happened:

```
        HTTP Status Code Families:
        ├── 2xx (Success): Request received, understood, and accepted.
        ├── 4xx (Client Error): Client sent invalid data, missing auth, or illegal values.
        └── 5xx (Server Error): Robot backend crashed or ROS 2 node died.
```

| Status Code | Name | Practical Robotics Meaning |
|---|---|---|
| **`200 OK`** | Standard Success | Telemetry read succeeded, or parameter was updated successfully. |
| **`202 Accepted`** | Asynchronous Job Queued | **Critical for Nav2 actions!** Tells client: *"We validated your goal and dispatched it to the robot. Motion has begun in the background."* |
| **`400 Bad Request`** | Malformed Syntax | JSON syntax error or missing mandatory fields. |
| **`401 Unauthorized`** | Missing Authentication | No API token or Bearer key supplied. |
| **`403 Forbidden`** | Insufficient Role | User is a `Viewer` attempting to trigger `Admin` manual teleop. |
| **`404 Not Found`** | Missing Resource | Requested landmark name or `goal_id` does not exist in memory. |
| **`409 Conflict`** | State Conflict | Request cannot execute due to robot state (e.g. attempting to navigate while **Emergency Stop is ENGAGED**). |
| **`422 Unprocessable Entity`** | Pydantic Validation Error | Coordinate exceeds allowable warehouse bounds or velocity is `NaN`. |
| **`500 Internal Error`** | Hardware/Software Fault | Motor driver disconnected, ROS 2 executor exception, or lidar crash. |

---

## 6. JSON Data Encoding for Robotics

JSON (JavaScript Object Notation) is the universal data format of the web. Here is how ROS 2 message types map into clean JSON:

```python
import json
import time

# Converting ROS 2 Odometry & Battery into Web JSON
telemetry_data = {
    "robot_id": "navpro-mini-amr",
    "timestamp": time.time(),
    "pose": {
        "x": 4.25,      # meters
        "y": 1.50,      # meters
        "yaw": 1.57     # radians
    },
    "velocity": {
        "linear": 0.45,  # m/s
        "angular": 0.05  # rad/s
    },
    "battery": {
        "percentage": 88.5,
        "is_charging": False,
        "voltage": 24.2
    },
    "status": "NAVIGATING"
}

# Serialize to string
json_payload = json.dumps(telemetry_data)
print("Serialized JSON Size:", len(json_payload), "bytes")
```

---

## 7. Summary & Next Steps

In this lesson, you mastered the core web fundamentals:
- The **Client-Server model** establishes a clean boundary between external clients and onboard robot software.
- Standard **HTTP methods** (`GET`, `POST`, `PUT`, `DELETE`) map cleanly to queries vs. physical actuation.
- **HTTP status codes** (`200`, `202`, `409`, `422`) communicate success and failure states deterministically.

In **Lesson 02**, we will examine **WebSockets vs. HTTP Polling**: discovering how persistent full-duplex sockets eliminate bandwidth waste for high-speed $20\,\text{Hz}$ telemetry streaming!
