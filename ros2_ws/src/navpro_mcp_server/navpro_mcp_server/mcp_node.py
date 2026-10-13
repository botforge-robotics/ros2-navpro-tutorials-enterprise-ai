#!/usr/bin/env python3
"""
NavPro Learning Hub - Level 2
Package: navpro_mcp_server
Module: mcp_server.py
Model Context Protocol (MCP) Robotics Server.
Allows LLM AI Agents (Claude, Gemini, Antigravity) to inspect and control physical/simulated robots.
Complies with Anthropic/Google MCP standard (JSON-RPC 2.0 over stdio).
"""

import sys
import json
import logging
from typing import Dict, Any, List, Optional

# Log exclusively to stderr so stdout remains clean for JSON-RPC 2.0 frames
logging.basicConfig(level=logging.INFO, format='%(asctime)s [%(levelname)s] %(message)s', stream=sys.stderr)
logger = logging.getLogger("NavProMCPServer")


# =============================================================================
# Robot Backend Controller (Simulated / Hardware API)
# =============================================================================

class RobotHardwareController:
    def __init__(self):
        self.robot_id = "navpro-amr-01"
        self.x = 0.0
        self.y = 0.0
        self.battery_pct = 92.0
        self.is_docked = True
        self.estop = False
        self.waypoints = {
            "charging_station": {"x": 0.0, "y": 0.0},
            "warehouse_aisle_1": {"x": 3.0, "y": 1.5},
            "warehouse_aisle_2": {"x": 3.0, "y": -1.5},
            "packing_bench": {"x": -2.5, "y": 0.0},
            "dispatch_bay": {"x": 4.2, "y": 0.0},
        }

    def get_power(self) -> Dict[str, Any]:
        return {
            "battery_percentage": self.battery_pct,
            "is_charging": self.is_docked,
            "voltage": 24.2 if self.is_docked else 23.4,
            "health": "GOOD" if self.battery_pct > 20 else "WARNING_LOW_BATTERY"
        }

    def get_health(self) -> Dict[str, Any]:
        return {
            "robot_id": self.robot_id,
            "status": "OPERATIONAL" if not self.estop else "EMERGENCY_STOP",
            "estop_engaged": self.estop,
            "pose": {"x": self.x, "y": self.y},
            "is_docked": self.is_docked,
        }

    def list_waypoints(self) -> Dict[str, Any]:
        return {"available_waypoints": list(self.waypoints.keys()), "details": self.waypoints}

    def navigate_coords(self, x: float, y: float) -> Dict[str, Any]:
        if self.estop:
            return {"success": False, "error": "Cannot navigate: Emergency Stop is engaged!"}
        self.is_docked = False
        self.x = round(x, 2)
        self.y = round(y, 2)
        self.battery_pct = max(5.0, self.battery_pct - 1.0)
        return {"success": True, "target": {"x": self.x, "y": self.y}, "status": "ARRIVED"}

    def navigate_waypoint(self, name: str) -> Dict[str, Any]:
        if name not in self.waypoints:
            return {"success": False, "error": f"Unknown waypoint '{name}'. Call list_waypoints first."}
        pt = self.waypoints[name]
        return self.navigate_coords(pt["x"], pt["y"])

    def dock(self) -> Dict[str, Any]:
        res = self.navigate_coords(0.0, 0.0)
        if res.get("success"):
            self.is_docked = True
            return {"success": True, "status": "DOCKED_AND_CHARGING"}
        return res

    def emergency_stop(self) -> Dict[str, Any]:
        self.estop = True
        return {"success": True, "status": "ESTOP_ENGAGED", "motors": "POWER_CUT"}


robot = RobotHardwareController()

# =============================================================================
# MCP Tool Registry & JSON Schema Definitions
# =============================================================================

MCP_TOOLS = [
    {
        "name": "get_power_status",
        "description": "Queries the robot battery percentage, charging state, and voltage.",
        "inputSchema": {
            "type": "object",
            "properties": {},
            "required": []
        }
    },
    {
        "name": "get_system_health",
        "description": "Checks system operational state, current coordinates, and safety interlocks.",
        "inputSchema": {
            "type": "object",
            "properties": {},
            "required": []
        }
    },
    {
        "name": "list_waypoints",
        "description": "Retrieves the list of named warehouse waypoints and coordinates.",
        "inputSchema": {
            "type": "object",
            "properties": {},
            "required": []
        }
    },
    {
        "name": "navigate_to_waypoint",
        "description": "Dispatches the AMR to a named warehouse location (e.g., 'warehouse_aisle_1', 'packing_bench').",
        "inputSchema": {
            "type": "object",
            "properties": {
                "waypoint_name": {
                    "type": "string",
                    "description": "Name of the target waypoint"
                }
            },
            "required": ["waypoint_name"]
        }
    },
    {
        "name": "navigate_to_coordinates",
        "description": "Dispatches the AMR to specific (x, y) metric coordinates in the warehouse map.",
        "inputSchema": {
            "type": "object",
            "properties": {
                "x": {"type": "number", "description": "X coordinate in meters"},
                "y": {"type": "number", "description": "Y coordinate in meters"}
            },
            "required": ["x", "y"]
        }
    },
    {
        "name": "dock_robot",
        "description": "Commands the robot to navigate back to its docking station and initiate battery charging.",
        "inputSchema": {
            "type": "object",
            "properties": {},
            "required": []
        }
    },
    {
        "name": "emergency_stop",
        "description": "Immediately disables motor power and halts the robot in place.",
        "inputSchema": {
            "type": "object",
            "properties": {},
            "required": []
        }
    }
]


# =============================================================================
# JSON-RPC 2.0 Protocol Dispatcher
# =============================================================================

def handle_rpc_request(request: Dict[str, Any]) -> Optional[Dict[str, Any]]:
    req_id = request.get("id")
    method = request.get("method")
    params = request.get("params", {})

    logger.info(f"Incoming JSON-RPC Request: method={method}, id={req_id}")

    if method == "initialize":
        return {
            "jsonrpc": "2.0",
            "id": req_id,
            "result": {
                "protocolVersion": "2024-11-05",
                "capabilities": {"tools": {}},
                "serverInfo": {
                    "name": "navpro-mcp-robotics-server",
                    "version": "1.0.0"
                }
            }
        }

    elif method == "tools/list":
        return {
            "jsonrpc": "2.0",
            "id": req_id,
            "result": {
                "tools": MCP_TOOLS
            }
        }

    elif method == "tools/call":
        tool_name = params.get("name")
        arguments = params.get("arguments", {})

        result_content = execute_tool(tool_name, arguments)
        return {
            "jsonrpc": "2.0",
            "id": req_id,
            "result": {
                "content": [
                    {
                        "type": "text",
                        "text": json.dumps(result_content, indent=2)
                    }
                ]
            }
        }

    elif method == "notifications/initialized":
        # Notification; no response required
        return None

    else:
        return {
            "jsonrpc": "2.0",
            "id": req_id,
            "error": {
                "code": -32601,
                "message": f"Method '{method}' not found"
            }
        }


def execute_tool(name: str, args: Dict[str, Any]) -> Dict[str, Any]:
    if name == "get_power_status":
        return robot.get_power()
    elif name == "get_system_health":
        return robot.get_health()
    elif name == "list_waypoints":
        return robot.list_waypoints()
    elif name == "navigate_to_waypoint":
        return robot.navigate_waypoint(args.get("waypoint_name", ""))
    elif name == "navigate_to_coordinates":
        return robot.navigate_coords(float(args.get("x", 0.0)), float(args.get("y", 0.0)))
    elif name == "dock_robot":
        return robot.dock()
    elif name == "emergency_stop":
        return robot.emergency_stop()
    else:
        return {"error": f"Unknown tool: '{name}'"}


def main():
    logger.info("NavPro Model Context Protocol (MCP) Server started on stdio.")
    while True:
        line = sys.stdin.readline()
        if not line:
            break
        line = line.strip()
        if not line:
            continue
        try:
            req = json.loads(line)
            response = handle_rpc_request(req)
            if response is not None:
                sys.stdout.write(json.dumps(response) + "\n")
                sys.stdout.flush()
        except json.JSONDecodeError:
            logger.error(f"Malformed JSON: {line}")
            sys.stdout.write(json.dumps({
                "jsonrpc": "2.0",
                "id": None,
                "error": {"code": -32700, "message": "Parse error"}
            }) + "\n")
            sys.stdout.flush()


if __name__ == "__main__":
    main()
