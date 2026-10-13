# Lesson 15: Enterprise Fleet Security — Authentication & Rate Limiting

In Lessons 09 through 14, we built an interactive, browser-based robotics cockpit.

However, leaving an open, unauthenticated API on a factory Wi-Fi network is a severe safety hazard. Anyone on the local network could connect to the gateway and drive the robot or trigger emergency stops.

In this lesson, you will implement **enterprise-grade security**: Bearer token authentication, Role-Based Access Control (RBAC), token-bucket rate limiting, and emergency stop overrides.

---

## 1. Learning Objectives

By the end of this lesson, you will be able to:
1. Identify the primary cybersecurity threats facing connected mobile robots on shared Wi-Fi networks.
2. Implement **Bearer Token Authentication** in FastAPI using `HTTPBearer`.
3. Enforce **Role-Based Access Control (RBAC)** separating `Viewer`, `Operator`, and `Admin` permissions.
4. Implement token-bucket rate limiting to protect the robot CPU from Denial of Service (DoS) attacks.
5. Guarantee that Emergency Stop endpoints bypass rate limiters and execute unconditionally.

---

## 2. Robotics Attack Vectors & Security Architecture

When mobile robots connect to Wi-Fi networks, they face three primary attack vectors:
1. **Unauthorized Actuation:** An unauthenticated device on the LAN sends `/teleop` or `/navigation/goal` commands.
2. **Denial of Service (DoS):** A faulty frontend script spams 5,000 HTTP requests per second, exhausting CPU cycles required for LiDAR obstacle avoidance.
3. **Telemetry Snooping:** Eavesdropping on camera feeds and facility floor plans.

```mermaid
graph TD
    Request["Incoming Client Request"]
    AuthGate{"Auth Dependency (Bearer Token)"}
    RBAC{"Role-Based Access Control"}
    RateLimit{"Token Bucket Rate Limiter"}
    Priority{"Is Emergency Stop?"}
    Handler["Target Endpoint Handler"]
    Reject["HTTP 401 / 403 / 429 Rejection"]

    Request --> AuthGate
    AuthGate -->|Invalid Token| Reject
    AuthGate -->|Valid Token| Priority
    
    Priority -->|Yes: E-Stop!| Handler
    Priority -->|No: Standard API| RBAC

    RBAC -->|Insufficient Permissions| Reject
    RBAC -->|Authorized| RateLimit

    RateLimit -->|Exceeded Limit (>30 req/s)| Reject
    RateLimit -->|Within Budget| Handler
```

---

## 3. Implementing Bearer Token Authentication

```python
from fastapi import Security, HTTPException, status
from fastapi.security import HTTPBearer, HTTPAuthorizationCredentials
from enum import Enum
from typing import Dict, Set

security = HTTPBearer()


class Role(str, Enum):
    VIEWER = "VIEWER"        # Read telemetry, maps, waypoints
    OPERATOR = "OPERATOR"    # Dispatch missions, navigate to waypoints
    ADMIN = "ADMIN"          # Manual teleop, change configs, save waypoints


VALID_API_KEYS: Dict[str, Role] = {
    "navpro_viewer_token_789": Role.VIEWER,
    "navpro_operator_token_456": Role.OPERATOR,
    "navpro_admin_secret_123": Role.ADMIN,
}


async def verify_auth_token(credentials: HTTPAuthorizationCredentials = Security(security)) -> Role:
    """Validates token and extracts user role."""
    token = credentials.credentials
    if token not in VALID_API_KEYS:
        raise HTTPException(
            status_code=status.HTTP_401_UNAUTHORIZED,
            detail="Invalid or expired Bearer Token.",
            headers={"WWW-Authenticate": "Bearer"},
        )
    return VALID_API_KEYS[token]


def require_role(allowed_roles: Set[Role]):
    """Role-Based Access Control dependency."""
    def role_checker(user_role: Role = Security(verify_auth_token)):
        if user_role not in allowed_roles:
            raise HTTPException(
                status_code=status.HTTP_403_FORBIDDEN,
                detail=f"Access denied. Required roles: {[r.value for r in allowed_roles]}. Your role: {user_role.value}"
            )
        return user_role
    return role_checker
```

---

## 4. Attaching Roles to Endpoints

```python
# 1. Telemetry can be viewed by all roles
@app.get("/api/v1/telemetry", dependencies=[Security(require_role({Role.VIEWER, Role.OPERATOR, Role.ADMIN}))])
async def get_secured_telemetry():
    return robot_state.get_snapshot()


# 2. Autonomous Navigation requires OPERATOR or ADMIN role
@app.post("/api/v1/navigation/goal", dependencies=[Security(require_role({Role.OPERATOR, Role.ADMIN}))])
async def dispatch_secured_goal(payload: NavigationGoalPayload):
    # Dispatch logic...
    return {"status": "ACCEPTED"}


# 3. Direct Manual Joystick Teleop is strictly restricted to ADMINS
@app.post("/api/v1/teleop", dependencies=[Security(require_role({Role.ADMIN}))])
async def secured_teleop(cmd: TeleopPayload):
    # Manual teleop logic...
    return {"status": "COMMAND_ACCEPTED"}
```

---

## 5. Token-Bucket Rate Limiting for Teleoperation

To prevent network flooding from rapid virtual joystick touch events:

```python
import time
from fastapi import Request

class TokenBucketRateLimiter:
    def __init__(self, capacity: int = 30, refill_rate: float = 20.0):
        self.capacity = capacity
        self.refill_rate = refill_rate
        self.tokens = capacity
        self.last_update = time.time()

    def allow_request(self) -> bool:
        now = time.time()
        elapsed = now - self.last_update
        self.last_update = now
        self.tokens = min(self.capacity, self.tokens + elapsed * self.refill_rate)
        
        if self.tokens >= 1.0:
            self.tokens -= 1.0
            return True
        return False

rate_limiter = TokenBucketRateLimiter(capacity=30, refill_rate=20.0)


@app.middleware("http")
async def rate_limiting_middleware(request: Request, call_next):
    # CRITICAL: Emergency Stop must NEVER be throttled!
    if request.url.path.endswith("/emergency_stop"):
        return await call_next(request)

    if request.url.path.endswith("/teleop"):
        if not rate_limiter.allow_request():
            raise HTTPException(
                status_code=status.HTTP_429_TOO_MANY_REQUESTS,
                detail="Rate limit exceeded. Maximum 30 teleop commands per second."
            )

    return await call_next(request)
```

---

## 6. Summary & Next Steps

In this lesson, you secured the robotics platform:
- Implemented **Bearer Token Authentication** using FastAPI security dependencies.
- Enforced **Role-Based Access Control** (`Viewer`, `Operator`, `Admin`).
- Added a **Token-Bucket Rate Limiter** to protect the network from flooding.
- Upheld the golden safety rule: **Emergency Stop requests bypass rate limits**.

In **Lesson 16**, you will deploy the complete frontend in our **Day 2 Capstone: The Full Interactive Web Cockpit**!
