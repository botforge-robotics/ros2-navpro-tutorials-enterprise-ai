#!/usr/bin/env python3
"""
NavPro Learning Hub - Level 2
Package: navpro_mcp_server
Module: test_mcp_client.py
Test client simulating an LLM AI Agent communicating with the NavPro MCP Server over stdio.
"""

import sys
import os
import subprocess
import json
import time

SERVER_SCRIPT = os.path.join(os.path.dirname(__file__), "mcp_server.py")


def send_rpc(proc, request):
    payload = json.dumps(request) + "\n"
    proc.stdin.write(payload.encode("utf-8"))
    proc.stdin.flush()
    line = proc.stdout.readline().decode("utf-8")
    return json.loads(line)


def main():
    print("==================================================================")
    print("  Testing NavPro MCP Server via stdio JSON-RPC 2.0 Protocol       ")
    print("==================================================================")

    proc = subprocess.Popen(
        [sys.executable, "-u", SERVER_SCRIPT],
        stdin=subprocess.PIPE,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        text=False
    )

    try:
        # 1. Initialize
        print("\n--- 1. Testing 'initialize' ---")
        req = {
            "jsonrpc": "2.0",
            "id": 1,
            "method": "initialize",
            "params": {"protocolVersion": "2024-11-05"}
        }
        res = send_rpc(proc, req)
        server_info = res["result"]["serverInfo"]
        print(f"[PASS] Connected to server: {server_info['name']} v{server_info['version']}")

        # 2. Tools List
        print("\n--- 2. Testing 'tools/list' ---")
        req = {"jsonrpc": "2.0", "id": 2, "method": "tools/list", "params": {}}
        res = send_rpc(proc, req)
        tools = res["result"]["tools"]
        tool_names = [t["name"] for t in tools]
        print(f"[PASS] Registered {len(tools)} tools: {', '.join(tool_names)}")

        # 3. Call 'get_power_status'
        print("\n--- 3. Invoking tool 'get_power_status' ---")
        req = {
            "jsonrpc": "2.0",
            "id": 3,
            "method": "tools/call",
            "params": {"name": "get_power_status", "arguments": {}}
        }
        res = send_rpc(proc, req)
        content_text = res["result"]["content"][0]["text"]
        print(f"[PASS] Power Status response:\n{content_text}")

        # 4. Call 'list_waypoints'
        print("\n--- 4. Invoking tool 'list_waypoints' ---")
        req = {
            "jsonrpc": "2.0",
            "id": 4,
            "method": "tools/call",
            "params": {"name": "list_waypoints", "arguments": {}}
        }
        res = send_rpc(proc, req)
        print(f"[PASS] Waypoints response:\n{res['result']['content'][0]['text']}")

        # 5. Call 'navigate_to_waypoint'
        print("\n--- 5. Invoking tool 'navigate_to_waypoint' ('packing_bench') ---")
        req = {
            "jsonrpc": "2.0",
            "id": 5,
            "method": "tools/call",
            "params": {"name": "navigate_to_waypoint", "arguments": {"waypoint_name": "packing_bench"}}
        }
        res = send_rpc(proc, req)
        print(f"[PASS] Navigation result:\n{res['result']['content'][0]['text']}")

        # 6. Call 'dock_robot'
        print("\n--- 6. Invoking tool 'dock_robot' ---")
        req = {
            "jsonrpc": "2.0",
            "id": 6,
            "method": "tools/call",
            "params": {"name": "dock_robot", "arguments": {}}
        }
        res = send_rpc(proc, req)
        print(f"[PASS] Docking result:\n{res['result']['content'][0]['text']}")

        print("\n==================================================================")
        print("  ALL MCP PROTOCOL TESTS PASSED! AI AGENT READY TO CONTROL ROBOT   ")
        print("==================================================================\n")

    finally:
        proc.terminate()
        proc.wait()


if __name__ == "__main__":
    main()
