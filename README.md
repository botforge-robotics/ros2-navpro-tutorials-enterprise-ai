# NavPro Learning Hub - Level 2: Enterprise Robotics Architect & AI Agent Integration

Welcome to **Level 2** of the NavPro Robotics Workshop! This advanced curriculum is crafted for experienced ROS 2 engineers, system architects, and robotics leads who want to build commercial-grade autonomous AMR fleet software, cloud APIs, Model Context Protocol (MCP) AI agent servers, and resilient mission workflows.

---

## 🚀 Quickstart for Students (Clone, Install Docker & Run)

Follow these step-by-step instructions to get the complete Enterprise Fleet & AI Agent environment running on your laptop in minutes with zero complex dependency setup.

### 1. Prerequisites: Install Docker & Docker Compose

#### 🐧 On Linux (Ubuntu 22.04 / 24.04 / Debian)
Open a terminal and run the official Docker setup:
```bash
# 1. Install Docker Engine using official convenience script
curl -fsSL https://get.docker.com -o get-docker.sh
sudo sh get-docker.sh

# 2. Add your current user to the docker group (avoids needing 'sudo')
sudo usermod -aG docker $USER
newgrp docker

# 3. Verify Docker and Docker Compose installation
docker --version
docker compose version
```

#### 🪟 On Windows (Windows 10 / 11)
1. **Enable Hardware Virtualization**:
   - Ensure Virtualization is enabled in your BIOS/UEFI (check Task Manager -> Performance -> CPU -> "Virtualization: Enabled").
2. **Install WSL 2**:
   - Open PowerShell as Administrator and run:
     ```powershell
     wsl --install
     ```
   - Restart your computer if prompted.
3. **Install Docker Desktop**:
   - Download and install **[Docker Desktop for Windows](https://www.docker.com/products/docker-desktop/)**.
   - During installation, ensure the **"Use WSL 2 instead of Hyper-V"** option is checked.
   - Start Docker Desktop and ensure the whale icon is running in the system tray.
   - Open PowerShell or Windows Terminal to verify:
     ```powershell
     docker --version
     docker compose version
     ```

---

### 2. Clone the Repository

Clone the repository and enter the project directory:

```bash
git clone https://github.com/botforge-robotics/ros2-navpro-tutorials-enterprise-ai.git
cd ros2-navpro-tutorials-enterprise-ai
```

---

### 3. Build & Run with Docker Compose

Launch the complete containerized enterprise robotics stack:

```bash
# Build the container image and start in the background
docker compose up --build -d
```
*(On subsequent runs, simply run `docker compose up -d`)*

---

### 4. Access In-Browser Student Environments

Once the container is running, open your web browser to access:

| Service | Access URL | Credentials / Notes |
| :--- | :--- | :--- |
| **🎓 Interactive Learning Hub (LMS)** | [http://localhost:8000](http://localhost:8000) | Step-by-step enterprise tutorials, interactive quizzes, progress tracking & instructor LAN sync |
| **💻 In-Browser VS Code IDE** | [http://localhost:8443](http://localhost:8443) | Direct access to workspace `/home/navpro/workspace` with Python, FastAPI, and ROS 2 tooling |
| **⚡ Interactive Mission Engine UI** | [http://localhost:8999](http://localhost:8999) | Visual DAG mission graph execution, state inspection, and human approval gates |

---

### 5. Helpful Commands for Students

```bash
# View live container logs
docker compose logs -f

# Open a bash shell inside the running container
docker compose exec navpro_level2 bash

# Stop the container when finished
docker compose down
```

---

## 📚 Complete Step-by-Step Curriculum (24 Lessons)

Each lesson features deep theoretical explanations, industrial architectural diagrams, step-by-step terminal commands, line-by-line code breakdowns, ROS 2 interface definitions, and interactive assessments:

| Lesson | Topic & Pedagogical Scope | Markdown Guide |
| :---: | :--- | :---: |
| **01** | **Web Technologies for Roboticists** (HTTP Methods, JSON, REST vs RPC, Status Codes) | [Lesson 01 Guide](tutorials/01_web_technologies_for_roboticists_http_methods_json.md) |
| **02** | **Real-Time WebSockets vs HTTP Polling** (Frame overhead, Full-duplex streaming, 20Hz AMR telemetry) | [Lesson 02 Guide](tutorials/02_realtime_websockets_vs_http_polling.md) |
| **03** | **Enterprise Dual-Plane Architecture** (Real-Time Control Plane vs Application/Cloud Plane, Thread isolation) | [Lesson 03 Guide](tutorials/03_enterprise_system_architecture_dual_plane.md) |
| **04** | **High-Concurrency ROS 2 MultiThreadedExecutor** (Callback groups, reentrant callbacks, deadlocks) | [Lesson 04 Guide](tutorials/04_high_concurrency_ros2_multithreaded_executor.md) |
| **05** | **FastAPI Robotics REST Gateway** (Async ASGI, Pydantic v2 schemas, type safety, OpenAPI docs) | [Lesson 05 Guide](tutorials/05_fastapi_robotics_rest_gateway_pydantic.md) |
| **06** | **High-Frequency WebSocket Telemetry Broadcaster** (Connection management, JSON framing, 20Hz pose broadcast) | [Lesson 06 Guide](tutorials/06_high_frequency_websocket_telemetry_broadcaster.md) |
| **07** | **Non-Blocking Nav2 Action Dispatching** (ROS 2 Action Client, Goal Handles, Feedback streaming) | [Lesson 07 Guide](tutorials/07_non_blocking_nav2_action_dispatching.md) |
| **08** | **Day 1 Capstone: NavPro API Gateway** (End-to-end integration, REST endpoints, WebSockets, E-Stop safety) | [Lesson 08 Guide](tutorials/08_day1_capstone_navpro_api_gateway.md) |
| **09** | **Client SDK Architecture** (JavaScript/TypeScript and Python clients, automatic reconnect, typed responses) | [Lesson 09 Guide](tutorials/09_client_sdk_architecture_python_javascript.md) |
| **10** | **Modern Fleet Cockpit Architecture** (HTML5 Canvas 2D, WebGL, high-DPI rendering, transformation matrices) | [Lesson 10 Guide](tutorials/10_modern_fleet_cockpit_architecture_canvas.md) |
| **11** | **Rendering 2D SLAM Maps** (Occupancy grid parsing, cell-to-pixel math, costmap overlay rendering) | [Lesson 11 Guide](tutorials/11_rendering_2d_slam_map_occupancy_grid.md) |
| **12** | **Live Robot Pose & Trajectory Rendering** (Coordinate frame transformation, orientation arrows, breadcrumb trails) | [Lesson 12 Guide](tutorials/12_live_robot_pose_and_trajectory_rendering.md) |
| **13** | **Interactive Robot Controls & Virtual Joystick** (Touch/pointer events, normalized vector math, velocity throttling) | [Lesson 13 Guide](tutorials/13_interactive_robot_controls_virtual_joystick.md) |
| **14** | **Waypoint Store & Interactive Map Markers** (Canvas click-to-pose, waypoint persistence, named patrol points) | [Lesson 14 Guide](tutorials/14_waypoint_store_and_interactive_map_markers.md) |
| **15** | **Enterprise Fleet Security & Auth** (Bearer JWT tokens, CORS policy, rate limiting, role-based access control) | [Lesson 15 Guide](tutorials/15_enterprise_fleet_security_auth_rate_limiting.md) |
| **16** | **Day 2 Capstone: Interactive Web Cockpit** (Unified full-stack AMR dashboard with 2D SLAM canvas, telemetry, e-stop) | [Lesson 16 Guide](tutorials/16_day2_capstone_interactive_web_cockpit.md) |
| **17** | **Physical AI & Grounded Reasoning** (LLM spatial understanding, grounding text to metric coordinates, safety checks) | [Lesson 17 Guide](tutorials/17_physical_ai_and_grounded_reasoning.md) |
| **18** | **Model Context Protocol (MCP) Standard** (Anthropic / Google MCP specification, JSON-RPC 2.0, tools, resources) | [Lesson 18 Guide](tutorials/18_model_context_protocol_standard_architecture.md) |
| **19** | **Building Python MCP Robotics Server** (Exposing ROS 2 tools to Claude / Gemini, Pydantic tool schemas) | [Lesson 19 Guide](tutorials/19_building_python_mcp_robotics_server.md) |
| **20** | **Deterministic Safety Barriers & Preflight Guards** (Bounding boxes, speed clamps, battery floor check, human confirmation) | [Lesson 20 Guide](tutorials/20_deterministic_safety_barriers_and_preflight_guards.md) |
| **21** | **Connecting Frontier Models** (Claude Desktop, Gemini Agent, Antigravity CLI MCP configuration) | [Lesson 21 Guide](tutorials/21_connecting_frontier_models_claude_gemini_antigravity.md) |
| **22** | **Industrial Mission Graph (DAG) Architecture** (Directed acyclic graphs, sequential & parallel execution, loop counters) | [Lesson 22 Guide](tutorials/22_industrial_mission_graph_dag_architecture.md) |
| **23** | **Stateful Mission Runner & UI Interaction Gates** (Mission state machine, human approval gates, wearable hardware) | [Lesson 23 Guide](tutorials/23_stateful_mission_runner_and_ui_gates.md) |
| **24** | **Day 3 Grand Capstone: End-to-End Fleet Pipeline** (Prompt -> MCP Agent -> DAG Mission -> ROS 2 Execution) | [Lesson 24 Guide](tutorials/24_day3_grand_capstone_end_to_end_fleet_pipeline.md) |

---

## 💻 Student Assignments vs. Reference Solutions

Every assignment includes a student starter template and a verified production reference implementation:

| Project / Exercise | Hands-On Starter Template | Reference Production Node | Test Verification Script |
| :--- | :--- | :--- | :--- |
| **Day 1: API Gateway** | [`task_gateway.py`](ros2_ws/src/navpro_api_gateway/navpro_api_gateway/task_gateway.py) | [`gateway_node.py`](ros2_ws/src/navpro_api_gateway/navpro_api_gateway/gateway_node.py) | `python3 scripts/test_gateway.py` |
| **Day 2: MCP Server** | [`task_mcp_server.py`](ros2_ws/src/navpro_mcp_server/navpro_mcp_server/task_mcp_server.py) | [`mcp_node.py`](ros2_ws/src/navpro_mcp_server/navpro_mcp_server/mcp_node.py) | `python3 scripts/test_mcp.py` |
| **Day 3: Mission DAG** | [`task_mission_engine.py`](ros2_ws/src/navpro_mission_engine/navpro_mission_engine/task_mission_engine.py) | [`mission_engine_node.py`](ros2_ws/src/navpro_mission_engine/navpro_mission_engine/mission_engine_node.py) | `python3 scripts/test_missions.py` |
