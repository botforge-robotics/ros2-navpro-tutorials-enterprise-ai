#!/usr/bin/env python3
"""
NavPro Learning Hub - Level 2: Day 2
Topic: Model Context Protocol (MCP) Robotics Server & Autonomous AI Agents

EXPLANATION MODULE:
The Model Context Protocol (MCP) is an open standard developed by Anthropic
and adopted across AI ecosystems (Claude, Gemini, Cursor, Antigravity) that
enables Large Language Models to discover and invoke real-world tools.

This module demonstrates a complete MCP Robotics Server:
1. Implements the JSON-RPC 2.0 protocol over stdio.
2. Handles `tools/list`: Exposes available physical robot tools and JSON schema definitions.
3. Handles `tools/call`: Executes physical actions (navigating to coordinates, checking telemetry, docking).
4. Returns structured markdown / JSON observations back to the calling LLM agent.
"""

import sys
import json
import logging
from typing import Dict, Any, List

logging.basicConfig(level=logging.INFO, format='%(asctime)s [%(levelname)s] %(message)s', stream=sys.stderr)
logger = logging.getLogger("NavProMCP")


# =============================================================================
# 1. Physical Robot Mock / Backend Client
# =============================================================================

class PhysicalRobotBackend:
    """Mock interface simulating the NavPro REST API / ROS 2 client."""

    def __init__(self):
        self.x = 0.0
        self.y = 0.0
        self.battery = 88.5
        self.is_docked = True
        self.saved_waypoints = {
            "charging_dock": {"x": 0.0, "y": 0.0},
            "inspection_station_a": {"x": 4.2, "y": 1.5},
            "packing_zone": {"x": -2.0, "y": 6.8},
            "loading_dock": {"x": 8.0, "y": -3.2}
        }

    def get_status(self) -> Dict[str, Any]:
        return {
            "robot_id": "navpro-mini-amr",
            "position": {"x": self.x, "y": self.y},
            "battery_pct": self.battery,
            "is_docked": self.is_docked,
            "status": "CHARGING" if self.is_docked else "IDLE"
        }

    def navigate_to_coordinates(self, x: float, y: float) -> Dict[str, Any]:
        self.is_docked = False
        self.x = round(x, 2)
        self.y = round(y, 2)
        self.battery = max(5.0, self.battery - 1.5)
        return {
            "success": True,
            "message": f"Successfully arrived at ({self.x}, {self.y})",
            "current_battery": self.battery
        }

    def dock(self) -> Dict[str, Any]:
        self.x = 0.0
        self.y = 0.0
        self.is_docked = True
        return {"success": True, "message": "Robot aligned with contact pins and charging."}


backend = PhysicalRobotBackend()


# =============================================================================
# 2. MCP Tool Registry & Schema Definitions
# =============================================================================

AVAILABLE_TOOLS = [
    {
        "name": "get_robot_telemetry",
        "description": "Returns current robot coordinates, battery percentage, and docking status.",
        "inputSchema": {
            "type": "object",
            "properties": {},
            "required": []
        }
    },
    {
        "name": "list_saved_waypoints",
        "description": "Returns all named target locations known in the facility map.",
        "inputSchema": {
            "type": "object",
            "properties": {},
            "required": []
        }
    },
    {
        "name": "navigate_to_coordinates",
        "description": "Commands the autonomous robot to plan a path and navigate to exact X, Y coordinates in the map frame.",
        "inputSchema": {
            "type": "object",
            "properties": {
                "x": {"type": "number", "description": "Target X coordinate in meters"},
                "y": {"type": "number", "description": "Target Y coordinate in meters"}
            },
            "required": ["x", "y"]
        }
    },
    {
        "name": "navigate_to_named_waypoint",
        "description": "Commands the autonomous robot to navigate to a named waypoint (e.g. 'inspection_station_a', 'packing_zone').",
        "inputSchema": {
            "type": "object",
            "properties": {
                "waypoint_name": {"type": "string", "description": "Name of the target location"}
            },
            "required": ["waypoint_name"]
        }
    },
    {
        "name": "dock_robot",
        "description": "Navigates to the charging dock and initiates hardware contact charging.",
        "inputSchema": {
            "type": "object",
            "properties": {},
            "required": []
        }
    }
]


# =============================================================================
# 3. Tool Execution Dispatcher
# =============================================================================

def execute_tool(tool_name: str, arguments: Dict[str, Any]) -> Any:
    """Dispatches tool execution from LLM agent to the robot backend."""
    logger.info(f"Executing tool '{tool_name}' with args {arguments}")

    if tool_name == "get_robot_telemetry":
        return backend.get_status()

    elif tool_name == "list_saved_waypoints":
        return backend.saved_waypoints

    elif tool_name == "navigate_to_coordinates":
        x = float(arguments.get("x", 0.0))
        y = float(arguments.get("y", 0.0))
        return backend.navigate_to_coordinates(x, y)

    elif tool_name == "navigate_to_named_waypoint":
        name = arguments.get("waypoint_name", "")
        if name not in backend.saved_waypoints:
            return {"success": False, "error": f"Unknown waypoint '{name}'. Call list_saved_waypoints first."}
        pt = backend.saved_waypoints[name]
        return backend.navigate_to_coordinates(pt["x"], pt["y"])

    elif tool_name == "dock_robot":
        return backend.dock()

    else:
        raise ValueError(f"Unknown tool: {tool_name}")


# =============================================================================
# 4. JSON-RPC 2.0 stdio MCP Loop
# =============================================================================

def handle_json_rpc_message(msg: Dict[str, Any]) -> Dict[str, Any]:
    msg_id = msg.get("id")
    method = msg.get("method")
    params = msg.get("params", {})

    # Protocol Initialization Handshake
    if method == "initialize":
        return {
            "jsonrpc": "2.0",
            "id": msg_id,
            "result": {
                "protocolVersion": "2024-11-05",
                "capabilities": {"tools": {}},
                "serverInfo": {"name": "navpro-mcp-server", "version": "1.0.0"}
            }
        }

    # Tool Discovery
    elif method == "tools/list":
        return {
            "jsonrpc": "2.0",
            "id": msg_id,
            "result": {"tools": AVAILABLE_TOOLS}
        }

    # Tool Invocation
    elif method == "tools/call":
        tool_name = params.get("name")
        arguments = params.get("arguments", {})
        try:
            output = execute_tool(tool_name, arguments)
            return {
                "jsonrpc": "2.0",
                "id": msg_id,
                "result": {
                    "content": [
                        {"type": "text", "text": json.dumps(output, indent=2)}
                    ]
                }
            }
        except Exception as e:
            return {
                "jsonrpc": "2.0",
                "id": msg_id,
                "error": {"code": -32000, "message": str(e)}
            }

    else:
        return {
            "jsonrpc": "2.0",
            "id": msg_id,
            "error": {"code": -32601, "message": f"Method '{method}' not implemented"}
        }


def main():
    logger.info("Starting NavPro Model Context Protocol (MCP) Server on stdio...")
    for line in sys.stdin:
        if not line.strip():
            continue
        try:
            req = json.loads(line)
            res = handle_json_rpc_message(req)
            sys.stdout.write(json.dumps(res) + "\n")
            sys.stdout.flush()
        except Exception as e:
            logger.error(f"Error processing MCP message: {e}")


if __name__ == '__main__':
    main()
