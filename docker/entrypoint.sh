#!/bin/bash
set -e

# Source ROS 2 environment
if [ -f "/opt/ros/jazzy/setup.bash" ]; then
    source "/opt/ros/jazzy/setup.bash"
fi

echo "=================================================================="
echo "    NavPro Level 2 Environment: Web APIs, MCP & Mission Graphs   "
echo "=================================================================="
echo "  * Web Code Editor:    http://localhost:8443 (code-server)"
echo "  * FastAPI Gateway:    http://localhost:8000"
echo "  * Interactive UI Gate: http://localhost:8999"
echo "=================================================================="

# Start code-server in background
code-server --bind-addr 0.0.0.0:8443 --auth none /home/navpro/workspace &

# Start Enterprise Learning Web Platform on port 8000
if [ -d "/home/navpro/workspace/lms/dist" ]; then
    echo "[Entrypoint] Starting NavPro Enterprise LMS on port 8000..."
    python3 -m http.server 8000 --directory /home/navpro/workspace/lms/dist &
elif [ -d "/home/navpro/workspace/web" ]; then
    echo "[Entrypoint] Starting NavPro Level 2 Learning Hub on port 8000..."
    python3 -m http.server 8000 --directory /home/navpro/workspace/web &
fi

if [ "$#" -gt 0 ] && [ "$1" != "bash" ]; then
    exec "$@"
else
    exec tail -f /dev/null
fi
