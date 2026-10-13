#!/usr/bin/env python3
"""
NavPro Learning Hub - Level 2: Day 3
Topic: Directed Acyclic Graph (DAG) Mission Engine & Interactive UI Gates

EXPLANATION MODULE:
In real industrial AMR applications, autonomous operations are rarely single
goals. They are stateful Mission Graphs comprising:
1. Navigation Nodes: Move to Waypoint A.
2. Actuation / Tool Nodes: Trigger spray nozzle, open relay door.
3. REST API Nodes: Post progress event to ERP / Fleet Server.
4. Interactive UI Gates: Halt and display a prompt on the Cockpit UI or Smartwatch Badge ("Confirm pallet unloaded?").
5. Loop Counters & Conditional Branching: Repeat loop N times.

This script demonstrates a production Mission Graph Runner.
"""

import time
import json
import logging
from enum import Enum
from typing import Dict, Any, List, Optional

logging.basicConfig(level=logging.INFO, format='%(asctime)s [%(levelname)s] %(message)s')
logger = logging.getLogger("MissionEngine")


class NodeStatus(str, Enum):
    IDLE = "IDLE"
    RUNNING = "RUNNING"
    WAITING_UI = "WAITING_UI"
    COMPLETED = "COMPLETED"
    FAILED = "FAILED"


class MissionStatus(str, Enum):
    READY = "READY"
    ACTIVE = "ACTIVE"
    PAUSED_USER_INPUT = "PAUSED_USER_INPUT"
    FINISHED = "FINISHED"
    ABORTED = "ABORTED"


class MissionGraphEngine:
    """
    Stateful execution engine for multi-step autonomous missions.
    """

    def __init__(self, mission_graph: Dict[str, Any]):
        self.mission_id = mission_graph.get("id", "mission-001")
        self.title = mission_graph.get("title", "Autonomous Mission")
        self.nodes: List[Dict[str, Any]] = mission_graph.get("nodes", [])
        self.current_index = 0
        self.status = MissionStatus.READY
        self.active_ui_prompt: Optional[Dict[str, Any]] = None
        self.context_memory: Dict[str, Any] = {}

    def start(self):
        logger.info(f"Starting Mission '{self.title}' (ID: {self.mission_id}) with {len(self.nodes)} steps.")
        self.status = MissionStatus.ACTIVE
        self.execute_next()

    def execute_next(self):
        """Processes the current node in the graph."""
        if self.current_index >= len(self.nodes):
            self.status = MissionStatus.FINISHED
            logger.info(f"MISSION SUCCESS: All {len(self.nodes)} nodes executed successfully!")
            return

        current_node = self.nodes[self.current_index]
        node_id = current_node.get("id")
        node_type = current_node.get("type")
        node_params = current_node.get("params", {})

        logger.info(f"\n--- [Step {self.current_index + 1}/{len(self.nodes)}] Executing Node '{node_id}' ({node_type}) ---")

        if node_type == "NavigatePose":
            self._execute_navigate(current_node, node_params)

        elif node_type == "ActuatorAction":
            self._execute_actuator(current_node, node_params)

        elif node_type == "RestApiCall":
            self._execute_rest_api(current_node, node_params)

        elif node_type == "UserPromptGate":
            self._execute_user_prompt(current_node, node_params)

        elif node_type == "LoopCounter":
            self._execute_loop(current_node, node_params)

        else:
            logger.error(f"Unknown node type: {node_type}. Aborting mission.")
            self.status = MissionStatus.ABORTED

    def _execute_navigate(self, node: Dict[str, Any], params: Dict[str, Any]):
        x = params.get("x", 0.0)
        y = params.get("y", 0.0)
        logger.info(f"[NAV] Driving autonomous robot to target: ({x}, {y})...")
        time.sleep(1.0)  # Simulated navigation delay
        logger.info(f"[NAV] Arrived at ({x}, {y}). Step complete.")
        self.current_index += 1
        self.execute_next()

    def _execute_actuator(self, node: Dict[str, Any], params: Dict[str, Any]):
        tool = params.get("tool", "relay")
        duration = params.get("duration_ms", 1000)
        logger.info(f"[TOOL] Firing actuator '{tool}' for {duration}ms...")
        time.sleep(0.5)
        logger.info(f"[TOOL] Tool action '{tool}' finished.")
        self.current_index += 1
        self.execute_next()

    def _execute_rest_api(self, node: Dict[str, Any], params: Dict[str, Any]):
        endpoint = params.get("endpoint", "")
        method = params.get("method", "POST")
        payload = params.get("payload", {})
        logger.info(f"[REST] Sending HTTP {method} to {endpoint} with data {payload}...")
        time.sleep(0.3)
        logger.info(f"[REST] HTTP 200 OK received from fleet server.")
        self.current_index += 1
        self.execute_next()

    def _execute_user_prompt(self, node: Dict[str, Any], params: Dict[str, Any]):
        """HALTS execution until Cockpit UI or Smartwatch responds."""
        prompt_text = params.get("prompt", "Proceed with mission?")
        options = params.get("options", ["Confirm", "Abort"])

        logger.warning(f"[UI GATE] Mission PAUSED waiting for human confirmation: '{prompt_text}'")
        self.status = MissionStatus.PAUSED_USER_INPUT
        self.active_ui_prompt = {
            "node_id": node.get("id"),
            "prompt": prompt_text,
            "options": options
        }
        # Halts here! Next step only triggers when operator calls respond_to_ui()

    def respond_to_ui(self, selected_option: str):
        """Called by UI WebSocket or REST API when human clicks a button."""
        if self.status != MissionStatus.PAUSED_USER_INPUT:
            logger.warning("No active UI gate pending.")
            return

        logger.info(f"[UI GATE] Operator responded with: '{selected_option}'")
        self.active_ui_prompt = None

        if selected_option.lower() in ["abort", "cancel", "no"]:
            logger.error("Operator rejected continuation. Mission ABORTED.")
            self.status = MissionStatus.ABORTED
            return

        self.status = MissionStatus.ACTIVE
        self.current_index += 1
        self.execute_next()

    def _execute_loop(self, node: Dict[str, Any], params: Dict[str, Any]):
        target_index = params.get("jump_to_index", 0)
        max_loops = params.get("max_iterations", 1)

        loop_count = self.context_memory.get(node["id"], 0)
        if loop_count < max_loops:
            self.context_memory[node["id"]] = loop_count + 1
            logger.info(f"[LOOP] Iteration {loop_count + 1}/{max_loops}. Jumping to Step {target_index + 1}...")
            self.current_index = target_index
        else:
            logger.info(f"[LOOP] All {max_loops} iterations complete. Proceeding.")
            self.current_index += 1

        self.execute_next()


# =============================================================================
# Demonstration Run
# =============================================================================

SAMPLE_MISSION = {
    "id": "chem-inspection-44",
    "title": "Chemical Facility Autonomous Patrol",
    "nodes": [
        {"id": "n1", "type": "NavigatePose", "params": {"x": 3.5, "y": 1.2}},
        {"id": "n2", "type": "ActuatorAction", "params": {"tool": "air_sampler", "duration_ms": 2000}},
        {"id": "n3", "type": "RestApiCall", "params": {"endpoint": "http://erp.facility.internal/api/log", "method": "POST", "payload": {"status": "SAMPLED"}}},
        {"id": "n4", "type": "UserPromptGate", "params": {"prompt": "Hazard check complete. Proceed to Sector B?", "options": ["Proceed", "Abort"]}},
        {"id": "n5", "type": "NavigatePose", "params": {"x": 0.0, "y": 0.0}}
    ]
}

if __name__ == '__main__':
    engine = MissionGraphEngine(SAMPLE_MISSION)
    engine.start()

    # Simulate human operator on Smartwatch Badge confirming after 2 seconds
    time.sleep(2.0)
    if engine.status == MissionStatus.PAUSED_USER_INPUT:
        print("\n>>> [Cockpit Operator] Clicking 'Proceed' button on screen... <<<")
        engine.respond_to_ui("Proceed")
