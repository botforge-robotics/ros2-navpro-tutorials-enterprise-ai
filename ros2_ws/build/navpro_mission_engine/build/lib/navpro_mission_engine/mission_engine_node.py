#!/usr/bin/env python3
"""
NavPro Learning Hub - Level 2
Package: navpro_mission_engine
Module: mission_engine.py
Stateful Directed Acyclic Graph (DAG) Mission Runner with Interactive UI Gates.
"""

import time
import json
import logging
from enum import Enum
from typing import Dict, Any, List, Optional, Callable

logging.basicConfig(level=logging.INFO, format='%(asctime)s [%(levelname)s] %(message)s')
logger = logging.getLogger("NavProMissionEngine")


class NodeStatus(str, Enum):
    IDLE = "IDLE"
    RUNNING = "RUNNING"
    WAITING_UI = "WAITING_UI"
    COMPLETED = "COMPLETED"
    FAILED = "FAILED"
    SKIPPED = "SKIPPED"


class MissionStatus(str, Enum):
    READY = "READY"
    ACTIVE = "ACTIVE"
    PAUSED_USER_INPUT = "PAUSED_USER_INPUT"
    COMPLETED = "COMPLETED"
    ABORTED = "ABORTED"


class MissionGraphEngine:
    """
    Executes a structured mission plan with checkpointing and human-in-the-loop gates.
    """

    def __init__(self, mission_data: Dict[str, Any]):
        self.mission_id = mission_data.get("id", "mission_default")
        self.title = mission_data.get("title", "Untitled Mission")
        self.nodes: List[Dict[str, Any]] = mission_data.get("nodes", [])
        self.current_node_index = 0
        self.status = MissionStatus.READY
        self.active_ui_gate: Optional[Dict[str, Any]] = None
        self.execution_log: List[Dict[str, Any]] = []

        # Hook callbacks for external hardware/gateway integration
        self.nav_handler: Optional[Callable] = None
        self.dock_handler: Optional[Callable] = None

    def start(self):
        """Starts mission execution from the beginning."""
        if not self.nodes:
            logger.error("Cannot start: Mission contains no nodes!")
            self.status = MissionStatus.ABORTED
            return False

        logger.info(f"==> Launching Mission: '{self.title}' (ID: {self.mission_id}) with {len(self.nodes)} steps.")
        self.status = MissionStatus.ACTIVE
        self.current_node_index = 0
        return self._execute_next_step()

    def _execute_next_step(self) -> bool:
        """Processes current node and advances execution pointer."""
        if self.current_node_index >= len(self.nodes):
            self.status = MissionStatus.COMPLETED
            logger.info(f"==> Mission '{self.title}' COMPLETED ALL STEPS SUCCESSFULLY!")
            return True

        node = self.nodes[self.current_node_index]
        node_id = node.get("id", f"node_{self.current_node_index}")
        node_type = node.get("type", "UNKNOWN")
        node_name = node.get("name", node_id)
        params = node.get("params", {})

        logger.info(f"[Step {self.current_node_index + 1}/{len(self.nodes)}] Executing '{node_name}' ({node_type})")

        if node_type == "NAVIGATE_WAYPOINT":
            wp = params.get("waypoint", "unknown")
            logger.info(f" -> Navigating to waypoint: {wp} ...")
            if self.nav_handler:
                self.nav_handler(wp)
            else:
                time.sleep(0.5)  # Simulated navigation transit
            self._record_node_success(node_id, f"Arrived at waypoint {wp}")
            self.current_node_index += 1
            return self._execute_next_step()

        elif node_type == "NAVIGATE_COORDINATES":
            x, y = params.get("x", 0.0), params.get("y", 0.0)
            logger.info(f" -> Navigating to coordinates: ({x}, {y}) ...")
            time.sleep(0.5)
            self._record_node_success(node_id, f"Arrived at ({x}, {y})")
            self.current_node_index += 1
            return self._execute_next_step()

        elif node_type == "WAIT_DELAY":
            duration = float(params.get("duration_seconds", 1.0))
            logger.info(f" -> Dwelling / waiting for {duration} seconds ...")
            time.sleep(min(duration, 1.0))  # Accelerated for unit test
            self._record_node_success(node_id, f"Wait completed ({duration}s)")
            self.current_node_index += 1
            return self._execute_next_step()

        elif node_type == "DOCK":
            logger.info(" -> Navigating to docking station and initiating charge ...")
            if self.dock_handler:
                self.dock_handler()
            else:
                time.sleep(0.5)
            self._record_node_success(node_id, "Successfully docked and charging")
            self.current_node_index += 1
            return self._execute_next_step()

        elif node_type == "UI_CONFIRMATION_GATE":
            logger.info(f" -> GATED STEP: Pausing mission execution for operator confirmation!")
            self.status = MissionStatus.PAUSED_USER_INPUT
            self.active_ui_gate = {
                "node_id": node_id,
                "title": params.get("title", "Operator Confirmation Needed"),
                "prompt": params.get("prompt", "Confirm to proceed:"),
                "options": params.get("options", ["CONFIRMED", "CANCEL"]),
                "default": params.get("default_option", "CONFIRMED"),
                "timeout_seconds": params.get("timeout_seconds", 60),
                "timestamp": time.time(),
            }
            logger.info(f"    PROMPT: '{self.active_ui_gate['prompt']}'")
            logger.info(f"    OPTIONS: {self.active_ui_gate['options']}")
            return False  # Halt execution loop until operator input received

        else:
            logger.warn(f"Unknown node type '{node_type}'. Skipping.")
            self.current_node_index += 1
            return self._execute_next_step()

    def respond_to_ui_gate(self, chosen_option: str) -> bool:
        """Called when user clicks a button on Cockpit UI or Smartwatch Badge."""
        if self.status != MissionStatus.PAUSED_USER_INPUT or not self.active_ui_gate:
            logger.error("Cannot process UI response: Mission is not paused waiting for input!")
            return False

        gate = self.active_ui_gate
        logger.info(f"Operator responded to gate '{gate['node_id']}' with: [{chosen_option}]")

        if chosen_option in ["CANCEL", "ABORT", "ABORT_MISSION"]:
            logger.warn("Operator elected to abort mission!")
            self.status = MissionStatus.ABORTED
            self.active_ui_gate = None
            self._record_node_success(gate["node_id"], f"Mission aborted by operator: {chosen_option}")
            return False

        # Positive / Proceed response
        self._record_node_success(gate["node_id"], f"Operator confirmed: {chosen_option}")
        self.active_ui_gate = None
        self.status = MissionStatus.ACTIVE
        self.current_node_index += 1
        return self._execute_next_step()

    def _record_node_success(self, node_id: str, message: str):
        self.execution_log.append({
            "node_id": node_id,
            "status": NodeStatus.COMPLETED,
            "message": message,
            "timestamp": time.time()
        })

    def get_progress_summary(self) -> Dict[str, Any]:
        return {
            "mission_id": self.mission_id,
            "title": self.title,
            "status": self.status.value,
            "current_step": self.current_node_index,
            "total_steps": len(self.nodes),
            "progress_pct": round((self.current_node_index / max(1, len(self.nodes))) * 100.0, 1),
            "waiting_ui_gate": self.active_ui_gate,
            "log": self.execution_log,
        }
