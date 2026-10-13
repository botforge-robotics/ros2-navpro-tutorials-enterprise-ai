# =============================================================================
# NavPro Learning Hub - Level 2 Dockerfile
# Production Web APIs, MCP AI Agent Servers & Mission Graph Orchestration
# =============================================================================
FROM ros:jazzy-ros-base

ENV DEBIAN_FRONTEND=noninteractive
ENV SHELL=/bin/bash

# Install system dependencies, curl, git, net-tools, tmux
RUN apt-get update && apt-get install -y --no-install-recommends \
    curl \
    wget \
    git \
    sudo \
    nano \
    tmux \
    procps \
    net-tools \
    python3-pip \
    python3-dev \
    build-essential \
    && rm -rf /var/lib/apt/lists/*

# Install code-server (In-browser VS Code)
RUN curl -fsSL https://code-server.dev/install.sh | sh

# Install Python requirements for Level 2 (FastAPI, WebSockets, MCP, Pydantic, AsyncIO)
RUN pip3 install --break-system-packages --ignore-installed --no-cache-dir \
    fastapi \
    "uvicorn[standard]" \
    websockets \
    pydantic \
    aiohttp \
    requests \
    pyyaml \
    pytest \
    httpx

# Create workshop student user (remove default Ubuntu 24.04 'ubuntu' user with UID 1000 first)
ARG USERNAME=navpro
ARG USER_UID=1000
ARG USER_GID=1000

RUN touch /var/mail/ubuntu 2>/dev/null || true && \
    userdel -r ubuntu 2>/dev/null || true && \
    groupdel ubuntu 2>/dev/null || true && \
    groupadd --gid $USER_GID $USERNAME \
    && useradd --uid $USER_UID --gid $USER_GID -m -s /bin/bash $USERNAME \
    && mkdir -p /etc/sudoers.d \
    && echo "$USERNAME ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers.d/nopasswd

# Setup workspace directories
WORKDIR /home/$USERNAME/workspace
RUN chown -R $USERNAME:$USERNAME /home/$USERNAME

USER $USERNAME

# Configure code-server settings (disable telemetry, dark theme)
RUN mkdir -p /home/$USERNAME/.local/share/code-server/User && \
    echo '{"workbench.colorTheme": "Default Dark Modern", "telemetry.telemetryLevel": "off"}' > \
    /home/$USERNAME/.local/share/code-server/User/settings.json

COPY docker/entrypoint.sh /usr/local/bin/entrypoint.sh
USER root
RUN chmod +x /usr/local/bin/entrypoint.sh
USER $USERNAME

EXPOSE 8000 8443 8999

ENTRYPOINT ["/usr/local/bin/entrypoint.sh"]
