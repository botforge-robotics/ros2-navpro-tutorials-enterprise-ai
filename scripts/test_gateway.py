#!/usr/bin/env python3
"""
NavPro Learning Hub - Level 2
Package: navpro_gateway
Module: test_client.py
Automated test suite verifying REST API and WebSocket telemetry endpoints.
"""

import sys
import time
import json
import asyncio
import requests
import websockets

BASE_URL = "http://localhost:8000"
WS_URL = "ws://localhost:8000/ws/live_telemetry"


def test_rest_api():
    print("\n--- 1. Testing REST Endpoints ---")
    
    # 1. System Health
    r = requests.get(f"{BASE_URL}/api/v1/system/health")
    assert r.status_code == 200, f"Expected 200, got {r.status_code}"
    health = r.json()
    print(f"[PASS] System Health: Robot {health['robot_id']}, Battery {health['battery_percentage']}%, E-stop: {health['estop_active']}")

    # 2. Dispatch Navigation Goal
    payload = {"x": 3.5, "y": -1.2, "yaw": 0.785}
    r = requests.post(f"{BASE_URL}/api/v1/navigation/goal", json=payload)
    assert r.status_code == 202, f"Expected 202 Accepted, got {r.status_code}"
    print(f"[PASS] Goal Dispatch: {r.json()['message']}")

    # 3. Emergency Stop
    r = requests.post(f"{BASE_URL}/api/v1/emergency_stop")
    assert r.status_code == 200, f"Expected 200, got {r.status_code}"
    print(f"[PASS] Emergency Stop: {r.json()['status']}")

    # 4. Verify Goal is rejected while in E-stop
    r = requests.post(f"{BASE_URL}/api/v1/navigation/goal", json=payload)
    assert r.status_code == 400, f"Expected 400 when estop active, got {r.status_code}"
    print("[PASS] Security Check: Goal rejected during E-stop")

    # 5. Clear Emergency Stop
    r = requests.post(f"{BASE_URL}/api/v1/emergency_reset")
    assert r.status_code == 200, f"Expected 200, got {r.status_code}"
    print(f"[PASS] Emergency Reset: {r.json()['status']}")


async def test_websocket():
    print("\n--- 2. Testing WebSocket Live Telemetry (10 Hz) ---")
    async with websockets.connect(WS_URL) as ws:
        for i in range(5):
            msg = await ws.recv()
            data = json.loads(msg)
            pos = data["current_position"]
            print(f"[WS Msg {i+1}] Pose: ({pos['x']}, {pos['y']}) | Batt: {data['battery_percentage']}% | Status: {data['status']}")
            await asyncio.sleep(0.05)
    print("[PASS] Successfully received 5 real-time telemetry frames over WebSocket.")


def main():
    print("Testing NavPro Enterprise Gateway at http://localhost:8000 ...")
    try:
        test_rest_api()
        asyncio.run(test_websocket())
        print("\n==========================================")
        print("  ALL GATEWAY TESTS PASSED SUCCESSFULLY!  ")
        print("==========================================\n")
    except requests.exceptions.ConnectionError:
        print("\n[ERROR] Could not connect to gateway server.")
        print("Make sure server is running: python3 server.py\n")
        sys.exit(1)


if __name__ == "__main__":
    main()
