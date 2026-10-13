# Lesson 13: Interactive Controls — Virtual Joysticks & 2D Nav Goals

In Lesson 12, we rendered the robot moving across the SLAM map. Now, we grant the operator the ability to control the robot directly from the browser: **The Interactive Control Layer (Layer 3)**.

In this lesson, you will build:
1. An on-screen **Virtual Touch Joystick** that translates finger or mouse drags into linear and angular velocity commands.
2. An interactive **Click-to-Navigate 2D Nav Goal Tool** that lets operators click any point on the map to dispatch autonomous Nav2 paths.
3. A safety-critical **Emergency Stop Button**.

---

## 1. Learning Objectives

By the end of this lesson, you will be able to:
1. Translate 2D joystick offsets into linear velocity ($v_x$) and angular velocity ($\omega_z$) setpoints.
2. Implement safety deadman mechanisms (automatically publishing zero velocity when released).
3. Transform mouse click coordinates from screen pixels back into ROS world meters.
4. Calculate target yaw angles $\theta$ by dragging orientation vectors.
5. Dispatch navigation and teleoperation requests via our Client SDK.

---

## 2. Virtual Joystick Kinematics: From Pixels to Velocities

A virtual joystick consists of a fixed circular base and a movable thumb knob. When the user drags the knob, we compute its polar coordinates:

```
                  +Y (Forward Linear Speed v_x)
                          ▲
                          │     (knobX, knobY)
                          │    ●  r (distance from center)
                          │   /
                          │  / θ (angle)
          ───────────────┼───────────────► +X (Turn Right)
         (Turn Left -ω_z) │
                          │
                          ▼ -Y (Reverse)
```

### Mathematical Conversion Equations:
Let the joystick base radius be $R$ (e.g. $60\,\text{pixels}$):
1. **Normalized Radial Deflection:** $\rho = \min\left(1.0, \frac{\sqrt{\Delta x^2 + \Delta y^2}}{R}\right)$
2. **Linear Velocity Setpoint ($v_x$):**
   $$v_x = -\left(\frac{\Delta y}{R}\right) \cdot v_{\text{max}} \quad (\text{bounded to } [-1.0, 1.0]\,\text{m/s})$$
3. **Angular Velocity Setpoint ($\omega_z$):**
   $$\omega_z = -\left(\frac{\Delta x}{R}\right) \cdot \omega_{\text{max}} \quad (\text{bounded to } [-2.0, 2.0]\,\text{rad/s})$$

---

## 3. Implementing the Virtual Joystick in JavaScript

```javascript
class VirtualJoystick {
    constructor(containerId, client, maxV = 0.5, maxW = 1.0) {
        this.container = document.getElementById(containerId);
        this.client = client;
        this.maxV = maxV;
        this.maxW = maxW;

        this.radius = 50; // pixels
        this.active = false;
        this.currentV = 0.0;
        this.currentW = 0.0;
        this.intervalId = null;

        this._setupDOM();
        this._attachEvents();
    }

    _setupDOM() {
        this.container.style.position = "relative";
        this.container.style.width = `${this.radius * 2}px`;
        this.container.style.height = `${this.radius * 2}px`;
        this.container.style.borderRadius = "50%";
        this.container.style.background = "rgba(15, 23, 42, 0.1)";
        this.container.style.border = "2px solid #0284c7";

        this.knob = document.createElement("div");
        this.knob.style.position = "absolute";
        this.knob.style.width = "40px";
        this.knob.style.height = "40px";
        this.knob.style.borderRadius = "50%";
        this.knob.style.background = "#0284c7";
        this.knob.style.top = "30px";
        this.knob.style.left = "30px";
        this.knob.style.transform = "translate(-50%, -50%)";
        this.container.appendChild(this.knob);
    }

    _attachEvents() {
        const onStart = (e) => {
            this.active = true;
            // 10Hz command broadcast loop
            this.intervalId = setInterval(() => {
                if (this.active) {
                    this.client.sendVelocity(this.currentV, this.currentW);
                }
            }, 100);
        };

        const onMove = (e) => {
            if (!this.active) return;
            const rect = this.container.getBoundingClientRect();
            const clientX = e.touches ? e.touches[0].clientX : e.clientX;
            const clientY = e.touches ? e.touches[0].clientY : e.clientY;

            const dx = clientX - (rect.left + this.radius);
            const dy = clientY - (rect.top + this.radius);

            const dist = Math.min(this.radius, Math.sqrt(dx * dx + dy * dy));
            const angle = Math.atan2(dy, dx);

            const knobX = Math.cos(angle) * dist;
            const knobY = Math.sin(angle) * dist;

            this.knob.style.transform = `translate(calc(-50% + ${knobX}px), calc(-50% + ${knobY}px))`;

            // Calculate velocities
            this.currentV = -(knobY / this.radius) * this.maxV;
            this.currentW = -(knobX / this.radius) * this.maxW;
        };

        const onEnd = () => {
            this.active = false;
            clearInterval(this.intervalId);
            this.currentV = 0.0;
            this.currentW = 0.0;
            this.knob.style.transform = "translate(-50%, -50%)";
            // Deadman Safety: Publish zero velocity immediately on release!
            this.client.sendVelocity(0.0, 0.0);
        };

        this.container.addEventListener("mousedown", onStart);
        window.addEventListener("mousemove", onMove);
        window.addEventListener("mouseup", onEnd);

        this.container.addEventListener("touchstart", onStart);
        window.addEventListener("touchmove", onMove);
        window.addEventListener("touchend", onEnd);
    }
}
```

---

## 4. Click-to-Navigate 2D Nav Goal Tool

Operators can set target destinations by clicking on the map canvas:

```javascript
class NavGoalInteractionTool {
    constructor(canvas, transformer, client) {
        this.canvas = canvas;
        this.transformer = transformer;
        this.client = client;
        this.isDragging = false;
        this.goalStart = null;

        this._attachEvents();
    }

    _attachEvents() {
        this.canvas.addEventListener("mousedown", (e) => {
            const rect = this.canvas.getBoundingClientRect();
            const clickX = e.clientX - rect.left;
            const clickY = e.clientY - rect.top;

            // Transform pixel click to ROS World Coordinates (Meters)
            this.goalStart = this.transformer.screenToWorld(clickX, clickY);
            this.isDragging = true;
        });

        this.canvas.addEventListener("mouseup", async (e) => {
            if (!this.isDragging) return;
            this.isDragging = false;

            const rect = this.canvas.getBoundingClientRect();
            const releaseX = e.clientX - rect.left;
            const releaseY = e.clientY - rect.top;
            const goalEnd = this.transformer.screenToWorld(releaseX, releaseY);

            // Compute target yaw angle from drag vector
            const dx = goalEnd.x - this.goalStart.x;
            const dy = goalEnd.y - this.goalStart.y;
            const yaw = (Math.sqrt(dx * dx + dy * dy) > 0.1) ? Math.atan2(dy, dx) : 0.0;

            console.log(`Dispatching Nav Goal: (${this.goalStart.x.toFixed(2)}, ${this.goalStart.y.toFixed(2)}), Yaw: ${yaw.toFixed(2)}`);
            
            // Dispatch goal via Client SDK
            const goalId = await this.client.navigate(this.goalStart.x, this.goalStart.y, yaw);
            alert(`Navigation Dispatched! Goal ID: ${goalId}`);
        });
    }
}
```

---

## 5. Summary & Next Steps

In this lesson, you implemented interactive robot controls:
- Built a **Virtual Touch Joystick** with deadman zero-velocity cutoff on release.
- Converted user click-and-drag interactions into metric **Nav2 2D Nav Goals**.
- Integrated the controls directly through the **Client SDK**.

In **Lesson 14**, we will add **Waypoint Management**: saving landmark locations, editing landmark names, and displaying pins on the map!
