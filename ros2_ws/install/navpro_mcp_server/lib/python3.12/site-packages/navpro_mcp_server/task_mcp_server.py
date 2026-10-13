#!/usr/bin/env python3
"""
NavPro Learning Hub - Level 2: Day 2
Student Hands-on Task: Build an MCP Robotics Server for Claude / Gemini Agents

=============================================================================
TASK DESCRIPTION:
=============================================================================
Your objective is to complete the Model Context Protocol (MCP) server that
allows AI agents to control robot tools and actuators.

Tools to register and implement:
1. `check_safety_diagnostics`:
   - Returns LiDAR health, motor temperatures, and battery level.
2. `inspect_area`:
   - Input: `{"zone_name": string}`
   - Moves robot to zone and returns simulated camera inspection report.
3. `trigger_actuator`:
   - Input: `{"actuator_type": string, "duration_ms": integer, "direction": string}`
   - Validates that duration_ms <= 5000 (safety limit).
   - If duration_ms > 5000, returns error "Exceeded maximum allowed 5000ms actuation".
4. `emergency_stop`:
   - Halts all movement and latches safety barrier.

Follow the TODOs below to implement the MCP tool definitions and dispatch logic.
"""

import sys
import json
from typing import Dict, Any, List


# ---------------------------------------------------------------------------
# Robot State Simulation
# ---------------------------------------------------------------------------

class SimulatedFleetUnit:
    def __init__(self):
        self.battery = 92.0
        self.current_zone = "dock"
        self.motor_temp_c = 34.5
        self.estop = False

    def get_diagnostics(self):
        return {
            "battery_pct": self.battery,
            "motor_temperature_c": self.motor_temp_c,
            "lidar_status": "HEALTHY_30FPS",
            "emergency_stopped": self.estop
        }

    def move_to_zone(self, zone: str):
        self.current_zone = zone
        self.battery -= 2.0
        return {
            "status": "ARRIVED",
            "zone": zone,
            "camera_inspection": f"Visual scan of {zone} complete. 0 foreign obstacles detected."
        }

    def fire_actuator(self, act_type: str, duration_ms: int, direction: str):
        return {
            "status": "EXECUTED",
            "actuator": act_type,
            "duration_ms": duration_ms,
            "direction": direction
        }


robot = SimulatedFleetUnit()


# ---------------------------------------------------------------------------
# MCP Tool Schemas
# ---------------------------------------------------------------------------

# TODO 1: Complete the MCP tool schemas in TOOL_DEFINITIONS
# Define:
# - 'check_safety_diagnostics'
# - 'inspect_area' (requires 'zone_name')
# - 'trigger_actuator' (requires 'actuator_type', 'duration_ms', 'direction')
# - 'emergency_stop'

TOOL_DEFINITIONS: List[Dict[str, Any]] = [
    {
        "name": "check_safety_diagnostics",
        "description": "Checks hardware health, motor thermals, and battery charge.",
        "inputSchema": {"type": "object", "properties": {}, "required": []}
    },
    # -----------------------------------------------------------------------
    # TODO 1: Add 'inspect_area' tool definition
    # -----------------------------------------------------------------------
    # {
    #     "name": "inspect_area",
    #     ...
    # },

    # -----------------------------------------------------------------------
    # TODO 1: Add 'trigger_actuator' tool definition
    # -----------------------------------------------------------------------
    # {
    #     "name": "trigger_actuator",
    #     ...
    # },

    # -----------------------------------------------------------------------
    # TODO 1: Add 'emergency_stop' tool definition
    # -----------------------------------------------------------------------
    # {
    #     "name": "emergency_stop",
    #     ...
    # }
]


# ---------------------------------------------------------------------------
# Tool Execution Handler
# ---------------------------------------------------------------------------

def handle_tool_call(tool_name: str, args: Dict[str, Any]) -> Dict[str, Any]:
    """
    Executes the requested tool and returns the resulting dictionary.
    """
    if tool_name == "check_safety_diagnostics":
        return robot.get_diagnostics()

    # -----------------------------------------------------------------------
    # TODO 2: Implement 'inspect_area'
    # - Extract zone = args.get("zone_name")
    # - Call robot.move_to_zone(zone)
    # - Return the result
    # -----------------------------------------------------------------------
    # TODO: FILL IN CODE HERE

    # -----------------------------------------------------------------------
    # TODO 3: Implement 'trigger_actuator'
    # - Extract act_type = args.get("actuator_type")
    # - Extract duration = args.get("duration_ms")
    # - Extract direction = args.get("direction", "forward")
    # - Safety check: If duration > 5000:
    #     raise ValueError("Actuator duration cannot exceed 5000ms safety limit")
    # - Return robot.fire_actuator(act_type, duration, direction)
    # -----------------------------------------------------------------------
    # TODO: FILL IN CODE HERE

    # -----------------------------------------------------------------------
    # TODO 4: Implement 'emergency_stop'
    # - Set robot.estop = True
    # - Return {"status": "EMERGENCY_STOP_ACTIVE", "motors": "POWER_CUT"}
    # -----------------------------------------------------------------------
    # TODO: FILL IN CODE HERE

    raise ValueError(f"Unknown tool name: {tool_name}")


# ---------------------------------------------------------------------------
# JSON-RPC 2.0 Dispatcher Loop
# ---------------------------------------------------------------------------

def process_rpc_request(req: Dict[str, Any]) -> Dict[str, Any]:
    req_id = req.get("id")
    method = req.get("method")
    params = req.get("params", {})

    if method == "initialize":
        return {
            "jsonrpc": "2.0",
            "id": req_id,
            "result": {
                "protocolVersion": "2024-11-05",
                "capabilities": {"tools": {}},
                "serverInfo": {"name": "student-mcp-robot-server", "version": "1.0.0"}
            }
        }

    elif method == "tools/list":
        return {
            "jsonrpc": "2.0",
            "id": req_id,
            "result": {"tools": TOOL_DEFINITIONS}
        }

    elif method == "tools/call":
        tool_name = params.get("name")
        arguments = params.get("arguments", {})
        try:
            res = handle_tool_call(tool_name, arguments)
            return {
                "jsonrpc": "2.0",
                "id": req_id,
                "result": {
                    "content": [{"type": "text", "text": json.dumps(res, indent=2)}]
                }
            }
        except Exception as err:
            return {
                "jsonrpc": "2.0",
                "id": req_id,
                "error": {"code": -32000, "message": str(err)}
            }

    return {"jsonrpc": "2.0", "id": req_id, "error": {"code": -32601, "message": "Method not found"}}


def main():
    for line in sys.stdin:
        if not line.strip():
            continue
        try:
            req = json.loads(line)
            res = process_rpc_request(req)
            sys.stdout.write(json.dumps(res) + "\n")
            sys.stdout.flush()
        except Exception:
            pass


if __name__ == '__main__':
    main()
