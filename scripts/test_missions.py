#!/usr/bin/env python3
"""
NavPro Learning Hub - Level 2
Package: navpro_mission_engine
Module: test_mission_runner.py
Automated test demonstrating DAG execution and interactive UI gate resolution.
"""

import os
import json
import sys
from mission_engine import MissionGraphEngine, MissionStatus

MISSION_FILE = os.path.join(os.path.dirname(__file__), "sample_missions", "warehouse_delivery_mission.json")


def main():
    print("==================================================================")
    print("  Testing Stateful Mission Graph Engine with Interactive UI Gates")
    print("==================================================================")

    with open(MISSION_FILE, "r") as f:
        mission_data = json.load(f)

    engine = MissionGraphEngine(mission_data)

    print(f"\n1. Loaded Mission: '{engine.title}' ({len(engine.nodes)} nodes)")

    # Start mission
    print("\n2. Initiating execution...")
    engine.start()

    # Verify that it halted at the UI gate
    assert engine.status == MissionStatus.PAUSED_USER_INPUT, f"Expected PAUSED_USER_INPUT, got {engine.status}"
    assert engine.active_ui_gate is not None
    gate = engine.active_ui_gate

    print("\n3. [INTERACTIVE UI GATE TRIGGERED]")
    print(f"   Target Device:  smartwatch / cockpit")
    print(f"   Gate Title:     {gate['title']}")
    print(f"   Prompt Display: {gate['prompt']}")
    print(f"   User Options:   {gate['options']}")

    # Simulate human operator on Smartwatch / Cockpit tapping "CONFIRMED"
    print("\n4. Simulating Operator tapping 'CONFIRMED' on Smartwatch Badge...")
    engine.respond_to_ui_gate("CONFIRMED")

    # Verify completion
    assert engine.status == MissionStatus.COMPLETED, f"Expected COMPLETED, got {engine.status}"
    summary = engine.get_progress_summary()

    print("\n5. Mission Execution Finished!")
    print(f"   Final Status:  {summary['status']}")
    print(f"   Steps Done:    {summary['current_step']}/{summary['total_steps']} ({summary['progress_pct']}%)")
    print(f"   Total Logs:    {len(summary['log'])} checkpoint events recorded.")

    print("\n==================================================================")
    print("  ALL MISSION GRAPH ENGINE TESTS PASSED SUCCESSFULLY!             ")
    print("==================================================================\n")


if __name__ == "__main__":
    main()
