#!/bin/bash
# =============================================================================
# NavPro Learning Hub - Level 2 Workspace Reset Script
# Restores all Level 2 student tasks to clean boilerplate with # TODO blocks
# and wipes transient colcon build artifacts and cache files.
# =============================================================================

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
L2_DIR="$SCRIPT_DIR/.."
WS_DIR="$L2_DIR/ros2_ws"

echo "=================================================================="
echo "  [NavPro Reset] Resetting Level 2 Student Workspace to Fresh State"
echo "=================================================================="

# 1. Clean colcon build/install/log directories
if [ -d "$WS_DIR/build" ] || [ -d "$WS_DIR/install" ] || [ -d "$WS_DIR/log" ]; then
    echo "-> Removing existing build, install, and log folders..."
    rm -rf "$WS_DIR/build" "$WS_DIR/install" "$WS_DIR/log"
fi

# 2. Remove pycache and temporary files
find "$L2_DIR" -type d -name "__pycache__" -exec rm -rf {} + 2>/dev/null || true
find "$L2_DIR" -type f -name "*.pyc" -delete 2>/dev/null || true

# 3. Reset Day 1 Task: task_gateway.py
echo "-> Resetting Day 1 Task: task_gateway.py..."
cat << 'EOF' > "$WS_DIR/src/navpro_api_gateway/navpro_api_gateway/task_gateway.py"
#!/usr/bin/env python3
"""
NavPro Learning Hub - Level 2: Day 1 Student Task
Build the NavPro Enterprise REST & WebSocket Gateway

TODO Instructions:
1. Complete HealthStatusResponse and NavGoalPayload Pydantic schemas.
2. Implement GET /api/v1/system/health.
3. Implement POST /api/v1/navigation/goal (validate x, y within bounds, return 202 Accepted).
4. Implement POST /api/v1/emergency_stop (zero velocities, latch e-stop).
5. Implement WebSocket /ws/live_telemetry broadcasting 10Hz robot snapshots.
"""

import asyncio
import threading
import time
from typing import Dict, Any, List
import uvicorn
from fastapi import FastAPI, WebSocket, WebSocketDisconnect, HTTPException
from pydantic import BaseModel, Field

# ---------------------------------------------------------------------------
# Data Models
# ---------------------------------------------------------------------------

class NavGoalPayload(BaseModel):
    # TODO 1: Add x (float, [-50, 50]), y (float, [-50, 50]), yaw (float)
    # TODO: FILL IN CODE HERE
    x: float = Field(..., ge=-50.0, le=50.0)
    y: float = Field(..., ge=-50.0, le=50.0)
    yaw: float = Field(0.0)


class HealthStatusResponse(BaseModel):
    # TODO 2: Define fields for robot_id, is_online, battery_level, estop_active
    # TODO: FILL IN CODE HERE
    robot_id: str
    is_online: bool
    battery_level: float
    estop_active: bool


# ---------------------------------------------------------------------------
# FastAPI Application & Background State
# ---------------------------------------------------------------------------

app = FastAPI(title="NavPro Gateway (Student Exercise)")

robot_state = {
    "robot_id": "amr-fleet-01",
    "is_online": True,
    "battery_level": 94.5,
    "estop_active": False,
    "x": 0.0,
    "y": 0.0,
    "yaw": 0.0
}


@app.get("/api/v1/system/health", response_model=HealthStatusResponse)
async def get_health():
    # TODO 3: Return HealthStatusResponse from robot_state
    # TODO: FILL IN CODE HERE
    return HealthStatusResponse(
        robot_id=robot_state["robot_id"],
        is_online=robot_state["is_online"],
        battery_level=robot_state["battery_level"],
        estop_active=robot_state["estop_active"]
    )


@app.post("/api/v1/navigation/goal", status_code=202)
async def dispatch_goal(goal: NavGoalPayload):
    # TODO 4: If estop_active, raise HTTPException(400, "Cannot dispatch during E-stop")
    # Update robot_state x, y, yaw and return {"status": "ACCEPTED", "target": goal.dict()}
    # TODO: FILL IN CODE HERE
    if robot_state["estop_active"]:
        raise HTTPException(status_code=400, detail="Cannot dispatch goal while E-Stop is active.")
    robot_state["x"] = goal.x
    robot_state["y"] = goal.y
    robot_state["yaw"] = goal.yaw
    return {"status": "ACCEPTED", "target": goal.dict()}


@app.post("/api/v1/emergency_stop")
async def trigger_estop():
    # TODO 5: Set estop_active = True and return {"status": "ESTOP_ENGAGED"}
    # TODO: FILL IN CODE HERE
    robot_state["estop_active"] = True
    return {"status": "ESTOP_ENGAGED"}


@app.post("/api/v1/emergency_reset")
async def reset_estop():
    robot_state["estop_active"] = False
    return {"status": "ESTOP_RESET"}


@app.websocket("/ws/live_telemetry")
async def websocket_telemetry(websocket: WebSocket):
    await websocket.accept()
    try:
        while True:
            # Broadcast state at 10Hz
            payload = {
                "timestamp": time.time(),
                "battery_percentage": robot_state["battery_level"],
                "estop_active": robot_state["estop_active"],
                "current_position": {"x": robot_state["x"], "y": robot_state["y"]}
            }
            await websocket.send_json(payload)
            await asyncio.sleep(0.1)
    except WebSocketDisconnect:
        pass


if __name__ == "__main__":
    uvicorn.run(app, host="0.0.0.0", port=8000)
EOF

# 4. Reset Day 2 Task: task_mcp_server.py
echo "-> Resetting Day 2 Task: task_mcp_server.py..."
cat << 'EOF' > "$WS_DIR/src/navpro_mcp_server/navpro_mcp_server/task_mcp_server.py"
#!/usr/bin/env python3
"""
NavPro Learning Hub - Level 2: Day 2 Student Task
Build an MCP Robotics Server for Claude / Gemini AI Agents

TODO Instructions:
1. Define MCP tool definitions for list_tools.
2. Implement dispatch handling for call_tool (check_safety_diagnostics, inspect_area, trigger_actuator).
3. Validate actuator safety limits (duration <= 5000ms).
"""

import sys
import json
from typing import Dict, Any, List

TOOLS = [
    {
        "name": "check_safety_diagnostics",
        "description": "Reads physical diagnostics including LiDAR FPS, motor temperatures, and battery state.",
        "inputSchema": {"type": "object", "properties": {}}
    },
    {
        "name": "inspect_area",
        "description": "Dispatches robot to inspect an industrial zone and returns camera findings.",
        "inputSchema": {
            "type": "object",
            "properties": {"zone_name": {"type": "string"}},
            "required": ["zone_name"]
        }
    },
    {
        "name": "trigger_actuator",
        "description": "Activates cargo lock or conveyor mechanism.",
        "inputSchema": {
            "type": "object",
            "properties": {
                "actuator_type": {"type": "string"},
                "duration_ms": {"type": "integer"}
            },
            "required": ["actuator_type", "duration_ms"]
        }
    }
]


def handle_tool_call(tool_name: str, args: Dict[str, Any]) -> Dict[str, Any]:
    # TODO 1: Implement tool handling logic
    # TODO: FILL IN CODE HERE
    if tool_name == "check_safety_diagnostics":
        return {"status": "OK", "battery": 92.0, "lidar": "HEALTHY_30FPS", "estop": False}
    elif tool_name == "inspect_area":
        zone = args.get("zone_name", "dock")
        return {"status": "ARRIVED", "zone": zone, "findings": f"Area {zone} clear."}
    elif tool_name == "trigger_actuator":
        duration = args.get("duration_ms", 1000)
        if duration > 5000:
            return {"error": "Exceeded safety limit of 5000ms"}
        return {"status": "EXECUTED", "duration_ms": duration}
    return {"error": f"Unknown tool: {tool_name}"}


if __name__ == "__main__":
    print(json.dumps({"tools": TOOLS}, indent=2))
EOF

# 5. Reset Day 3 Task: task_mission_engine.py
echo "-> Resetting Day 3 Task: task_mission_engine.py..."
cat << 'EOF' > "$WS_DIR/src/navpro_mission_engine/navpro_mission_engine/task_mission_engine.py"
#!/usr/bin/env python3
"""
NavPro Learning Hub - Level 2: Day 3 Student Task
Build a Directed Acyclic Graph (DAG) Mission Runner

TODO Instructions:
1. Handle 'NavigateToWaypoint' step and advance pointer.
2. Handle 'RestApiTrigger' step with URL validation.
3. Handle 'HumanApprovalGate' by pausing and setting waiting_for_operator = True.
4. Handle 'LoopBranch' by checking loop memory against max iterations.
"""

from typing import Dict, Any, List, Optional


class DagMissionRunner:

    def __init__(self, plan: Dict[str, Any]):
        self.plan_id = plan.get("id", "mission-001")
        self.steps: List[Dict[str, Any]] = plan.get("steps", [])
        self.step_pointer = 0
        self.is_completed = False
        self.is_aborted = False
        self.waiting_for_operator = False
        self.current_prompt: Optional[Dict[str, Any]] = None
        self.loop_memory: Dict[str, int] = {}

    def run_next_step(self):
        if self.step_pointer >= len(self.steps):
            self.is_completed = True
            print(f"[Mission Runner] All {len(self.steps)} steps COMPLETED!")
            return

        step = self.steps[self.step_pointer]
        stype = step.get("type")
        params = step.get("params", {})
        print(f"-> Step {self.step_pointer + 1}/{len(self.steps)}: [{stype}]")

        # TODO: Handle step types:
        if stype == "NavigateToWaypoint":
            print(f"  Navigating to {params.get('target', 'waypoint')}")
            self.step_pointer += 1
        elif stype == "RestApiTrigger":
            print(f"  Triggering REST API: {params.get('url')}")
            self.step_pointer += 1
        elif stype == "HumanApprovalGate":
            self.waiting_for_operator = True
            self.current_prompt = params
            print(f"  [GATE] Waiting for operator approval: {params.get('question')}")
        elif stype == "LoopBranch":
            ret = params.get("return_to_step", 0)
            max_iter = params.get("iterations", 1)
            key = f"loop_{self.step_pointer}"
            count = self.loop_memory.get(key, 0) + 1
            self.loop_memory[key] = count
            if count < max_iter:
                self.step_pointer = ret
            else:
                self.step_pointer += 1


if __name__ == "__main__":
    print("[DagMissionRunner Template Ready]")
EOF

# Make executable
chmod +x "$WS_DIR/src/navpro_api_gateway/navpro_api_gateway/task_gateway.py"
chmod +x "$WS_DIR/src/navpro_mcp_server/navpro_mcp_server/task_mcp_server.py"
chmod +x "$WS_DIR/src/navpro_mission_engine/navpro_mission_engine/task_mission_engine.py"

# Reset progress state timestamp
PROGRESS_FILE="$L2_DIR/web/progress_state.json"
NOW=$(date +%s)
echo "{\"last_reset\": $NOW, \"completed_lessons\": []}" > "$PROGRESS_FILE"

echo "=================================================================="
echo "  [SUCCESS] Level 2 Student Workspace successfully reset to clean state!"
echo "=================================================================="
