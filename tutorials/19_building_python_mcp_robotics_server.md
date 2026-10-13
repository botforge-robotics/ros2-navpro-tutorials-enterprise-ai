# Lesson 19: Building a Python MCP Robotics Server from Scratch

## Learning Objectives
By the end of this lesson, you will be able to:
1. Implement a production-ready **Model Context Protocol (MCP)** server in Python using `asyncio` and standard I/O streams.
2. Route JSON-RPC 2.0 requests (`initialize`, `tools/list`, `tools/call`) to asynchronous robotics handlers.
3. Bridge MCP tool calls to the FastAPI REST Gateway and Nav2 Action server via `httpx.AsyncClient`.
4. Enforce strict `sys.stderr` log isolation to ensure 100% protocol stream integrity.
5. Verify the MCP server using an automated command-line JSON-RPC pipe test.

---

## 1. Architectural Overview of the MCP Robotics Bridge

Our Python MCP server acts as an asynchronous translator between the frontier AI agent (which speaks JSON-RPC 2.0 over standard I/O) and the robot's physical control plane (FastAPI REST Gateway & ROS 2):

```mermaid
graph LR
    subgraph AI Runtime
        Agent[Antigravity / Claude Agent]
    end

    subgraph NavPro MCP Server (Python)
        StdIn["sys.stdin (JSON-RPC)"] --> Parser[Protocol Router]
        Parser --> Registry[Tool Registry]
        Registry --> Handler1[get_robot_telemetry]
        Registry --> Handler2[list_waypoints]
        Registry --> Handler3[navigate_to_waypoint]
        Registry --> Handler4[emergency_stop]
        Parser --> StdOut["sys.stdout (JSON-RPC)"]
        Logger["logging.getLogger()"] --> StdErr["sys.stderr (Debug Logs)"]
    end

    subgraph Robot Software Plane
        Gateway[FastAPI Gateway :8000]
        Handler1 & Handler2 & Handler3 & Handler4 -->|HTTP REST / WebSocket| Gateway
        Gateway --> ROS2[ROS 2 Nav2 / Micro-ROS]
    end

    Agent <-->|stdio pipe| StdIn & StdOut
```

---

## 2. Implementing the Python MCP Server (`navpro_mcp_server.py`)

Create the standalone server file in `level2/scripts/navpro_mcp_server.py`:

```python
#!/usr/bin/env python3
"""
NavPro Robotics MCP Server (JSON-RPC 2.0 over stdio)
Exposes robot telemetry, waypoint navigation, and safety tools to frontier AI models.
"""

import sys
import json
import logging
import asyncio
import httpx
from typing import Dict, Any, List

# Configure logging strictly to sys.stderr
logging.basicConfig(
    stream=sys.stderr,
    level=logging.INFO,
    format="%(asctime)s [%(levelname)s] NavPro-MCP: %(message)s"
)
logger = logging.getLogger("navpro_mcp")

# Configuration
ROBOT_GATEWAY_URL = "http://127.0.0.1:8000"

class NavProMCPServer:
    def __init__(self, gateway_url: str = ROBOT_GATEWAY_URL):
        self.gateway_url = gateway_url
        self.http_client = httpx.AsyncClient(base_url=self.gateway_url, timeout=10.0)
        self.tools_registry = {
            "get_robot_telemetry": self.tool_get_robot_telemetry,
            "list_waypoints": self.tool_list_waypoints,
            "navigate_to_waypoint": self.tool_navigate_to_waypoint,
            "emergency_stop": self.tool_emergency_stop,
        }

    def get_tool_definitions(self) -> List[Dict[str, Any]]:
        """Return MCP tool schemas exposed to the AI model."""
        return [
            {
                "name": "get_robot_telemetry",
                "description": "Returns current robot pose (x, y, yaw), battery SOC percentage, velocity, and Nav2 navigation status.",
                "inputSchema": {
                    "type": "object",
                    "properties": {},
                    "required": []
                }
            },
            {
                "name": "list_waypoints",
                "description": "Lists all registered semantic landmarks and target waypoints currently saved on the robot's map.",
                "inputSchema": {
                    "type": "object",
                    "properties": {},
                    "required": []
                }
            },
            {
                "name": "navigate_to_waypoint",
                "description": "Dispatches the AMR to autonomously drive to a specified semantic waypoint landmark using Nav2.",
                "inputSchema": {
                    "type": "object",
                    "properties": {
                        "waypoint_id": {
                            "type": "string",
                            "description": "Unique identifier of the destination waypoint (e.g. 'charging_dock', 'inspection_bay_1')."
                        }
                    },
                    "required": ["waypoint_id"]
                }
            },
            {
                "name": "emergency_stop",
                "description": "Trigger an immediate software Emergency Stop. Cuts motor drive power and aborts all active Nav2 tasks.",
                "inputSchema": {
                    "type": "object",
                    "properties": {
                        "reason": {
                            "type": "string",
                            "description": "Operational reason for the E-Stop invocation."
                        }
                    },
                    "required": ["reason"]
                }
            }
        ]

    # --- Tool Implementations ---
    async def tool_get_robot_telemetry(self, args: Dict[str, Any]) -> str:
        try:
            resp = await self.http_client.get("/api/v1/telemetry")
            if resp.status_code == 200:
                data = resp.json()
                return (
                    f"Robot Telemetry:\n"
                    f"- Pose: x={data.get('x', 0):.2f}m, y={data.get('y', 0):.2f}m, yaw={data.get('yaw', 0):.2f} rad\n"
                    f"- Battery: {data.get('battery_soc', 100):.1f}%\n"
                    f"- Nav Status: {data.get('nav_status', 'IDLE')}\n"
                    f"- E-Stop Active: {data.get('estop_active', False)}"
                )
            return f"Error querying telemetry: HTTP {resp.status_code} - {resp.text}"
        except Exception as e:
            logger.error(f"Failed to fetch telemetry: {e}")
            return f"Telemetry query exception: {str(e)}"

    async def tool_list_waypoints(self, args: Dict[str, Any]) -> str:
        try:
            resp = await self.http_client.get("/api/v1/waypoints")
            if resp.status_code == 200:
                waypoints = resp.json()
                if not waypoints:
                    return "No waypoints currently registered in the robot's active map."
                lines = [f"Found {len(waypoints)} registered waypoints:"]
                for wp in waypoints:
                    lines.append(f"- ID: '{wp['id']}' ({wp.get('name', 'N/A')}) at x={wp['x']:.2f}, y={wp['y']:.2f}")
                return "\n".join(lines)
            return f"Error listing waypoints: HTTP {resp.status_code}"
        except Exception as e:
            return f"Waypoint query exception: {str(e)}"

    async def tool_navigate_to_waypoint(self, args: Dict[str, Any]) -> str:
        waypoint_id = args.get("waypoint_id")
        if not waypoint_id:
            return "Error: 'waypoint_id' parameter is required."

        try:
            resp = await self.http_client.post(
                "/api/v1/navigation/navigate_to_waypoint",
                json={"waypoint_id": waypoint_id}
            )
            if resp.status_code in (200, 202):
                data = resp.json()
                task_id = data.get("task_id", "unknown")
                return f"Navigation goal successfully dispatched to waypoint '{waypoint_id}'. Task ID: {task_id}."
            return f"Navigation dispatch rejected: HTTP {resp.status_code} - {resp.text}"
        except Exception as e:
            return f"Navigation dispatch exception: {str(e)}"

    async def tool_emergency_stop(self, args: Dict[str, Any]) -> str:
        reason = args.get("reason", "E-Stop triggered by MCP Agent")
        try:
            resp = await self.http_client.post(
                "/api/v1/safety/estop",
                json={"reason": reason, "requester": "mcp_ai_agent"}
            )
            if resp.status_code == 200:
                return f"EMERGENCY STOP ENGAGED. Motors disabled. Reason: {reason}."
            return f"E-Stop command failed: HTTP {resp.status_code} - {resp.text}"
        except Exception as e:
            return f"E-Stop exception: {str(e)}"

    # --- JSON-RPC 2.0 Dispatcher ---
    async def process_message(self, request_raw: str) -> str:
        """Parse, execute, and format JSON-RPC 2.0 response."""
        try:
            req = json.loads(request_raw)
        except json.JSONDecodeError:
            return json.dumps({
                "jsonrpc": "2.0",
                "id": None,
                "error": {"code": -32700, "message": "Parse error: Invalid JSON"}
            })

        msg_id = req.get("id")
        method = req.get("method")
        params = req.get("params", {})

        logger.info(f"Incoming RPC method: {method} (id: {msg_id})")

        # 1. Handle initialize handshake
        if method == "initialize":
            return json.dumps({
                "jsonrpc": "2.0",
                "id": msg_id,
                "result": {
                    "protocolVersion": "2024-11-05",
                    "capabilities": {
                        "tools": {"listChanged": False}
                    },
                    "serverInfo": {
                        "name": "navpro-robotics-mcp",
                        "version": "1.0.0"
                    }
                }
            })

        # 2. Handle notifications (no response expected)
        if method == "notifications/initialized":
            logger.info("Client handshake completed successfully.")
            return ""

        # 3. Handle tools/list
        if method == "tools/list":
            return json.dumps({
                "jsonrpc": "2.0",
                "id": msg_id,
                "result": {
                    "tools": self.get_tool_definitions()
                }
            })

        # 4. Handle tools/call
        if method == "tools/call":
            tool_name = params.get("name")
            tool_args = params.get("arguments", {})

            if tool_name not in self.tools_registry:
                return json.dumps({
                    "jsonrpc": "2.0",
                    "id": msg_id,
                    "error": {"code": -32601, "message": f"Tool '{tool_name}' not found"}
                })

            # Execute tool handler
            handler = self.tools_registry[tool_name]
            result_text = await handler(tool_args)

            return json.dumps({
                "jsonrpc": "2.0",
                "id": msg_id,
                "result": {
                    "content": [
                        {"type": "text", "text": result_text}
                    ],
                    "isError": False
                }
            })

        # Unknown method
        return json.dumps({
            "jsonrpc": "2.0",
            "id": msg_id,
            "error": {"code": -32601, "message": f"Method '{method}' not implemented"}
        })

    async def run(self):
        """Asynchronous standard I/O event loop."""
        logger.info("NavPro MCP Server started. Listening on stdio...")
        loop = asyncio.get_event_loop()
        reader = asyncio.StreamReader()
        protocol = asyncio.StreamReaderProtocol(reader)
        await loop.connect_read_pipe(lambda: protocol, sys.stdin)

        while True:
            line_bytes = await reader.readline()
            if not line_bytes:
                break # EOF reached

            line = line_bytes.decode("utf-8").strip()
            if not line:
                continue

            response = await self.process_message(line)
            if response:
                sys.stdout.write(response + "\n")
                sys.stdout.flush()

        await self.http_client.aclose()
        logger.info("NavPro MCP Server shutdown.")

if __name__ == "__main__":
    server = NavProMCPServer()
    try:
        asyncio.run(server.run())
    except KeyboardInterrupt:
        pass
```

---

## 3. Testing the MCP Server via Command-Line Pipe

You can verify the MCP server directly in your shell using `echo` and pipes without needing an external AI host:

```bash
# Test 1: Initialize Handshake
echo '{"jsonrpc": "2.0", "id": 1, "method": "initialize", "params": {"protocolVersion": "2024-11-05"}}' | python3 level2/scripts/navpro_mcp_server.py
```

**Expected JSON Response:**
```json
{"jsonrpc": "2.0", "id": 1, "result": {"protocolVersion": "2024-11-05", "capabilities": {"tools": {"listChanged": false}}, "serverInfo": {"name": "navpro-robotics-mcp", "version": "1.0.0"}}}
```

```bash
# Test 2: Query Tools List
echo '{"jsonrpc": "2.0", "id": 2, "method": "tools/list", "params": {}}' | python3 level2/scripts/navpro_mcp_server.py
```

```bash
# Test 3: Invoke get_robot_telemetry
echo '{"jsonrpc": "2.0", "id": 3, "method": "tools/call", "params": {"name": "get_robot_telemetry", "arguments": {}}}' | python3 level2/scripts/navpro_mcp_server.py
```

---

## Summary
- We implemented a complete **Model Context Protocol (MCP)** server in pure Python using `asyncio` and `httpx`.
- Handled JSON-RPC 2.0 framing for `initialize`, `tools/list`, and `tools/call`.
- Routed AI tool calls directly to our FastAPI REST endpoints, bridging the LLM to ROS 2.
- Ensured zero stdout pollution by routing all logs to `sys.stderr`.
- In **Lesson 20**, we will add **Deterministic Safety Barriers and Pre-flight Interceptors** to prevent the LLM from issuing dangerous commands!
