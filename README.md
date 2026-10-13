# NavPro Learning Hub - Level 2: Enterprise Robotics Architect & AI Agent Integration

Welcome to **Level 2** of the NavPro Robotics Workshop! This advanced curriculum is crafted for experienced ROS 2 engineers, system architects, and robotics leads who want to build commercial-grade autonomous AMR fleet software, cloud APIs, Model Context Protocol (MCP) AI agent servers, and resilient mission workflows.

> ⚡ **Interactive Web Portal:** Browse this entire curriculum with live interactive simulators (REST API Gateway, 20Hz WebSocket Telemetry Streamer, MCP JSON-RPC Sandbox, Mission DAG Visualizer) in the **[NavPro Interactive Web Hub](web/index.html)**!

---

## 📚 Complete Step-by-Step Curriculum & Tutorial Guide (24 Lessons)

Each lesson features deep theoretical explanations, industrial architectural diagrams, step-by-step terminal commands, line-by-line code breakdowns, ROS 2 interface definitions, and interactive assessments:

| Lesson | Topic & Scope | Markdown Guide | Interactive Web Page |
|---|---|---|---|
| **01** | **Web Technologies for Roboticists** (HTTP Methods, JSON, REST vs RPC, Status Codes) | [Lesson 01 Guide](tutorials/01_web_technologies_for_roboticists_http_methods_json.md) | [Interactive Web Page](web/lessons/lesson_01.html) |
| **02** | **Real-Time WebSockets vs HTTP Polling** (Frame overhead, Full-duplex streaming, 20Hz AMR telemetry) | [Lesson 02 Guide](tutorials/02_realtime_websockets_vs_http_polling.md) | [Interactive Web Page](web/lessons/lesson_02.html) |
| **03** | **Enterprise Dual-Plane Architecture** (Real-Time Control Plane vs Application/Cloud Plane, Thread isolation) | [Lesson 03 Guide](tutorials/03_enterprise_system_architecture_dual_plane.md) | [Interactive Web Page](web/lessons/lesson_03.html) |
| **04** | **High-Concurrency ROS 2 MultiThreadedExecutor** (Callback groups, reentrant callbacks, deadlocks) | [Lesson 04 Guide](tutorials/04_high_concurrency_ros2_multithreaded_executor.md) | [Interactive Web Page](web/lessons/lesson_04.html) |
| **05** | **FastAPI Robotics REST Gateway** (Async ASGI, Pydantic v2 schemas, type safety, OpenAPI docs) | [Lesson 05 Guide](tutorials/05_fastapi_robotics_rest_gateway_pydantic.md) | [Interactive Web Page](web/lessons/lesson_05.html) |
| **06** | **High-Frequency WebSocket Telemetry Broadcaster** (Connection management, JSON framing, 20Hz pose broadcast) | [Lesson 06 Guide](tutorials/06_high_frequency_websocket_telemetry_broadcaster.md) | [Interactive Web Page](web/lessons/lesson_06.html) |
| **07** | **Non-Blocking Nav2 Action Dispatching** (ROS 2 Action Client, Goal Handles, Feedback streaming) | [Lesson 07 Guide](tutorials/07_non_blocking_nav2_action_dispatching.md) | [Interactive Web Page](web/lessons/lesson_07.html) |
| **08** | **Day 1 Capstone: NavPro API Gateway** (End-to-end integration, REST endpoints, WebSockets, E-Stop safety) | [Lesson 08 Guide](tutorials/08_day1_capstone_navpro_api_gateway.md) | [Interactive Web Page](web/lessons/lesson_08.html) |
| **09** | **Client SDK Architecture** (JavaScript/TypeScript and Python clients, automatic reconnect, typed responses) | [Lesson 09 Guide](tutorials/09_client_sdk_architecture_python_javascript.md) | [Interactive Web Page](web/lessons/lesson_09.html) |
| **10** | **Modern Fleet Cockpit Architecture** (HTML5 Canvas 2D, WebGL, high-DPI rendering, transformation matrices) | [Lesson 10 Guide](tutorials/10_modern_fleet_cockpit_architecture_canvas.md) | [Interactive Web Page](web/lessons/lesson_10.html) |
| **11** | **Rendering 2D SLAM Maps** (Occupancy grid parsing, cell-to-pixel math, costmap overlay rendering) | [Lesson 11 Guide](tutorials/11_rendering_2d_slam_map_occupancy_grid.md) | [Interactive Web Page](web/lessons/lesson_11.html) |
| **12** | **Live Robot Pose & Trajectory Rendering** (Coordinate frame transformation, orientation arrows, breadcrumb trails) | [Lesson 12 Guide](tutorials/12_live_robot_pose_and_trajectory_rendering.md) | [Interactive Web Page](web/lessons/lesson_12.html) |
| **13** | **Interactive Robot Controls & Virtual Joystick** (Touch/pointer events, normalized vector math, velocity throttling) | [Lesson 13 Guide](tutorials/13_interactive_robot_controls_virtual_joystick.md) | [Interactive Web Page](web/lessons/lesson_13.html) |
| **14** | **Waypoint Store & Interactive Map Markers** (Canvas click-to-pose, waypoint persistence, named patrol points) | [Lesson 14 Guide](tutorials/14_waypoint_store_and_interactive_map_markers.md) | [Interactive Web Page](web/lessons/lesson_14.html) |
| **15** | **Enterprise Fleet Security & Auth** (Bearer JWT tokens, CORS policy, rate limiting, role-based access control) | [Lesson 15 Guide](tutorials/15_enterprise_fleet_security_auth_rate_limiting.md) | [Interactive Web Page](web/lessons/lesson_15.html) |
| **16** | **Day 2 Capstone: Interactive Web Cockpit** (Unified full-stack AMR dashboard with 2D SLAM canvas, telemetry, e-stop) | [Lesson 16 Guide](tutorials/16_day2_capstone_interactive_web_cockpit.md) | [Interactive Web Page](web/lessons/lesson_16.html) |
| **17** | **Physical AI & Grounded Reasoning** (LLM spatial understanding, grounding text to metric coordinates, safety checks) | [Lesson 17 Guide](tutorials/17_physical_ai_and_grounded_reasoning.md) | [Interactive Web Page](web/lessons/lesson_17.html) |
| **18** | **Model Context Protocol (MCP) Standard** (Anthropic / Google MCP specification, JSON-RPC 2.0, tools, resources) | [Lesson 18 Guide](tutorials/18_model_context_protocol_standard_architecture.md) | [Interactive Web Page](web/lessons/lesson_18.html) |
| **19** | **Building Python MCP Robotics Server** (Exposing ROS 2 tools to Claude / Gemini, Pydantic tool schemas) | [Lesson 19 Guide](tutorials/19_building_python_mcp_robotics_server.md) | [Interactive Web Page](web/lessons/lesson_19.html) |
| **20** | **Deterministic Safety Barriers & Preflight Guards** (Bounding boxes, speed clamps, battery floor check, human confirmation) | [Lesson 20 Guide](tutorials/20_deterministic_safety_barriers_and_preflight_guards.md) | [Interactive Web Page](web/lessons/lesson_20.html) |
| **21** | **Connecting Frontier Models** (Claude Desktop, Gemini Agent, Antigravity CLI MCP configuration) | [Lesson 21 Guide](tutorials/21_connecting_frontier_models_claude_gemini_antigravity.md) | [Interactive Web Page](web/lessons/lesson_21.html) |
| **22** | **Industrial Mission Graph (DAG) Architecture** (Directed acyclic graphs, sequential & parallel execution, loop counters) | [Lesson 22 Guide](tutorials/22_industrial_mission_graph_dag_architecture.md) | [Interactive Web Page](web/lessons/lesson_22.html) |
| **23** | **Stateful Mission Runner & UI Interaction Gates** (Mission state machine, human approval gates, wearable hardware) | [Lesson 23 Guide](tutorials/23_stateful_mission_runner_and_ui_gates.md) | [Interactive Web Page](web/lessons/lesson_23.html) |
| **24** | **Day 3 Grand Capstone: End-to-End Fleet Pipeline** (Prompt -> MCP Agent -> DAG Mission -> ROS 2 Execution) | [Lesson 24 Guide](tutorials/24_day3_grand_capstone_end_to_end_fleet_pipeline.md) | [Interactive Web Page](web/lessons/lesson_24.html) |

---

## 💻 Standard ROS 2 Colcon Workspace (`ros2_ws`)

The Level 2 environment is packaged as a standard production ROS 2 Jazzy colcon workspace:

```
ros2_ws/src/
├── navpro_enterprise_interfaces/  # Custom ROS 2 msgs, srvs, actions (CMake)
│   ├── msg/FleetTelemetry.msg
│   ├── srv/TriggerInteractionGate.srv
│   └── action/ExecuteMission.action
├── navpro_api_gateway/            # FastAPI REST & 20Hz WebSocket Bridge (ament_python)
│   ├── navpro_api_gateway/gateway_node.py
│   ├── navpro_api_gateway/task_gateway.py
│   └── launch/gateway.launch.py
├── navpro_mcp_server/             # Model Context Protocol AI Tool Server (ament_python)
│   ├── navpro_mcp_server/mcp_node.py
│   ├── navpro_mcp_server/task_mcp_server.py
│   └── launch/mcp_server.launch.py
└── navpro_mission_engine/         # Stateful DAG Workflow Engine (ament_python)
    ├── navpro_mission_engine/mission_engine_node.py
    ├── navpro_mission_engine/task_mission_engine.py
    ├── sample_missions/
    └── launch/mission_engine.launch.py
```

### Student Tasks & Reference Implementations
| Module | Hands-On Starter Template | Reference Production Node | Test Verification Script |
|---|---|---|---|
| **Day 1: API Gateway** | [`task_gateway.py`](ros2_ws/src/navpro_api_gateway/navpro_api_gateway/task_gateway.py) | [`gateway_node.py`](ros2_ws/src/navpro_api_gateway/navpro_api_gateway/gateway_node.py) | `python3 scripts/test_gateway.py` |
| **Day 2: MCP Server** | [`task_mcp_server.py`](ros2_ws/src/navpro_mcp_server/navpro_mcp_server/task_mcp_server.py) | [`mcp_node.py`](ros2_ws/src/navpro_mcp_server/navpro_mcp_server/mcp_node.py) | `python3 scripts/test_mcp.py` |
| **Day 3: Mission DAG** | [`task_mission_engine.py`](ros2_ws/src/navpro_mission_engine/navpro_mission_engine/task_mission_engine.py) | [`mission_engine_node.py`](ros2_ws/src/navpro_mission_engine/navpro_mission_engine/mission_engine_node.py) | `python3 scripts/test_missions.py` |

---

## 🚀 Running the Environment

### Single-Command Docker Bringup
```bash
docker compose up -d
```
Launches:
- **Learning Web Hub**: [http://localhost:8000](http://localhost:8000)
- **In-Browser VS Code**: [http://localhost:8443](http://localhost:8443)
- **Interactive UI Gateway**: [http://localhost:8999](http://localhost:8999)

### Local Standalone Bringup
```bash
python3 start_learning_hub.py
```
Serves the web portal on `http://localhost:8000` with local SQLite database progress tracking.
