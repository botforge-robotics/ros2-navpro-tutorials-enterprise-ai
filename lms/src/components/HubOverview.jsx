import React from 'react';
import { 
  Rocket, 
  Code2, 
  Workflow, 
  CheckCircle2, 
  ArrowRight, 
  Globe, 
  Radio, 
  Layers, 
  ShieldCheck, 
  Cpu, 
  Bot
} from 'lucide-react';

const MODULE_ICONS = {
  1: Globe,
  2: Radio,
  3: Layers,
  4: ShieldCheck,
  5: Cpu,
  6: Workflow
};

export function HubOverview({
  modules,
  lessons,
  onSelectLesson,
  completedLessons,
  progressPercent,
  completedCount,
  totalLessons
}) {
  return (
    <div className="hub-overview-container fade-in">
      {/* Hero Welcome Banner */}
      <section className="hub-hero-banner">
        <div className="hero-content">
          <div className="hero-badge-row">
            <span className="badge-pill">
              Industrial AMR Fleet Systems
            </span>
            <span className="badge-pill jazzy">Level 2 Enterprise &amp; MCP AI</span>
            <span className="badge-pill success">FastAPI + DAG Engine</span>
          </div>

          <h1 className="hero-title">
            Level 2: Enterprise Robotics Architect &amp; AI Agent Integration
          </h1>

          <p className="hero-description">
            Bridge the gap between textbook ROS 2 theory and commercial autonomous fleet deployment. 
            Build high-concurrency <strong>FastAPI REST Gateways</strong>, low-latency <strong>20Hz Telemetry WebSockets</strong>, 
            interactive <strong>Canvas 2D Cockpits</strong>, standardized <strong>Model Context Protocol (MCP)</strong> servers for Claude &amp; Gemini, 
            and stateful <strong>Directed Acyclic Graph (DAG) Mission Engines</strong>.
          </p>

          <div className="hero-actions-row">
            <button
              onClick={() => onSelectLesson("lesson_01")}
              className="hero-primary-btn"
            >
              <Rocket size={17} />
              <span>{completedCount > 0 ? 'Resume Curriculum' : 'Start Lesson 01: Architecture'}</span>
              <ArrowRight size={16} />
            </button>

            <a
              href="http://localhost:8443/?folder=/home/navpro/workspace"
              target="_blank"
              rel="noopener noreferrer"
              className="hero-secondary-btn"
            >
              <Code2 size={17} />
              <span>Open VS Code IDE (:8443)</span>
            </a>

            <a
              href="http://localhost:8999"
              target="_blank"
              rel="noopener noreferrer"
              className="hero-secondary-btn"
            >
              <Workflow size={17} />
              <span>Launch Mission Engine (:8999)</span>
            </a>
          </div>
        </div>

        <div className="hero-graphic">
          <div className="hero-art-card" style={{ maxWidth: '380px', margin: '0 auto', textAlign: 'left' }}>
            <div className="art-card-header" style={{ display: 'flex', alignItems: 'center', gap: '6px', padding: '8px 12px', background: 'rgba(0,0,0,0.05)', borderBottom: '1px solid rgba(0,0,0,0.08)' }}>
              <span className="dot red" style={{ width: 8, height: 8, borderRadius: '50%', background: '#ef4444' }}></span>
              <span className="dot yellow" style={{ width: 8, height: 8, borderRadius: '50%', background: '#f59e0b' }}></span>
              <span className="dot green" style={{ width: 8, height: 8, borderRadius: '50%', background: '#10b981' }}></span>
              <span style={{ fontSize: '11px', fontWeight: 700, color: 'var(--text-secondary)', marginLeft: 6 }}>Architecture Dual-Plane</span>
            </div>
            <pre style={{ margin: 0, padding: '12px', fontSize: '11px', lineHeight: 1.45, fontFamily: 'var(--font-mono)' }}>
{`Dual-Plane System Design:
┌───────────────────────────┐
│ Real-Time ROS 2 Control   │
│ (100Hz Loops & Nav2 BT)   │
└─────────────┬─────────────┘
              │ MultiThreadedExecutor
┌─────────────▼─────────────┐
│ FastAPI ASGI Gateway      │
│ • 20Hz WS Telemetry Stream│
│ • HTTP 202 Non-Blocking Nav│
└─────────────┬─────────────┘
              │ JSON-RPC 2.0 (MCP)
┌─────────────▼─────────────┐
│ Frontier AI & DAG Engine  │
│ • Claude 3.7 / Gemini 2.0 │
│ • Stateful Mission Graph  │
└───────────────────────────┘`}
            </pre>
          </div>
        </div>
      </section>

      {/* KPI Stats Ribbon */}
      <section className="hub-stats-ribbon">
        <div className="stat-card">
          <div className="stat-number">{totalLessons}</div>
          <div className="stat-label">Hands-On Lessons</div>
          <div className="stat-sub">Across 6 Enterprise Modules</div>
        </div>
        <div className="stat-card">
          <div className="stat-number">6</div>
          <div className="stat-label">Core Modules</div>
          <div className="stat-sub">REST Bridge to DAG Engine</div>
        </div>
        <div className="stat-card">
          <div className="stat-number">3</div>
          <div className="stat-label">Capstone Days</div>
          <div className="stat-sub">Full Industrial Milestones</div>
        </div>
        <div className="stat-card highlight">
          <div className="stat-number">{progressPercent}%</div>
          <div className="stat-label">Your Progress</div>
          <div className="stat-sub">
            {completedCount} of {totalLessons} Completed
          </div>
        </div>
      </section>

      {/* 3-Day Capstone Milestones */}
      <section className="capstone-milestones-section">
        <div className="section-header-row">
          <div>
            <h2 className="section-title">🏆 3-Day Enterprise Capstone Roadmap</h2>
            <p className="section-subtitle">
              Progressive daily architectural milestones taking you from raw async middleware to frontier AI agent tool-calling:
            </p>
          </div>
        </div>
        
        <div className="capstone-grid">
          <div className="capstone-card">
            <div className="capstone-day-badge">Day 1 Capstone</div>
            <h3>NavPro REST &amp; WebSocket Gateway</h3>
            <p>
              Build an industrial async FastAPI gateway with Pydantic schemas, 
              ReentrantCallbackGroup MultiThreadedExecutors, non-blocking Nav2 action dispatching (HTTP 202), 
              and 20Hz full-duplex WebSocket telemetry streams.
            </p>
            <div className="capstone-target">
              <span>Target Lab:</span> <code>Exercise L2_D1_api_gateway</code>
            </div>
            <button className="capstone-jump-btn" onClick={() => onSelectLesson('lesson_08')}>
              <span>View Day 1 Capstone (Lesson 08)</span>
              <ArrowRight size={14} />
            </button>
          </div>

          <div className="capstone-card">
            <div className="capstone-day-badge">Day 2 Capstone</div>
            <h3>Interactive HTML5 Canvas Cockpit</h3>
            <p>
              Construct a high-performance 60FPS 2D AMR Cockpit rendering live SLAM occupancy grids, 
              robot pose trails, interactive click-to-navigate waypoint markers, virtual joystick teleoperation, 
              and JWT token authentication with rate-limiting guards.
            </p>
            <div className="capstone-target">
              <span>Target Lab:</span> <code>Exercise L2_D2_canvas_cockpit</code>
            </div>
            <button className="capstone-jump-btn" onClick={() => onSelectLesson('lesson_16')}>
              <span>View Day 2 Capstone (Lesson 16)</span>
              <ArrowRight size={14} />
            </button>
          </div>

          <div className="capstone-card">
            <div className="capstone-day-badge">Day 3 Grand Capstone</div>
            <h3>MCP AI Agent &amp; Mission DAG Pipeline</h3>
            <p>
              Deploy a Model Context Protocol (MCP) server for Claude &amp; Gemini tool-calling, 
              integrate deterministic safety preflight barriers, and execute stateful Directed Acyclic Graph 
              (DAG) mission trees with human-in-the-loop interaction gates.
            </p>
            <div className="capstone-target">
              <span>Target Lab:</span> <code>Exercise L2_D3_grand_capstone</code>
            </div>
            <button className="capstone-jump-btn" onClick={() => onSelectLesson('lesson_24')}>
              <span>View Grand Capstone (Lesson 24)</span>
              <ArrowRight size={14} />
            </button>
          </div>
        </div>
      </section>

      {/* Modules Roadmap Grid */}
      <section className="hub-modules-section">
        <div className="section-header-row">
          <div>
            <h2 className="section-title">
              Curriculum Modules &amp; Learning Track
            </h2>
            <p className="section-subtitle">
              Follow the pedagogical sequence or jump directly into specialized enterprise robotics domains:
            </p>
          </div>
        </div>

        <div className="modules-grid">
          {modules.map((mod) => {
            const modLessons = lessons.filter((l) => l.module_id === mod.id);
            const modCompleted = modLessons.filter((l) =>
              completedLessons.includes(l.id),
            ).length;
            const isCompleted =
              modCompleted === modLessons.length && modLessons.length > 0;
            const ModIcon = MODULE_ICONS[mod.id] || Layers;

            return (
              <div
                key={mod.id}
                className={`module-card ${isCompleted ? "completed" : ""}`}
              >
                <div className="module-card-header">
                  <div className="module-icon-wrap">
                    <ModIcon size={20} />
                  </div>
                  <div className="module-title-wrap">
                    <span className="module-meta">
                      Module 0{mod.id} &bull; Lessons{" "}
                      {String(mod.range[0]).padStart(2, "0")}-
                      {String(mod.range[1]).padStart(2, "0")}
                    </span>
                    <h3 className="module-heading">{mod.name}</h3>
                  </div>
                  <span
                    className={`module-status-tag ${isCompleted ? "done" : ""}`}
                  >
                    {modCompleted}/{modLessons.length}
                  </span>
                </div>

                <ul className="module-lessons-list">
                  {modLessons.map((l) => {
                    const isLessonDone = completedLessons.includes(l.id);
                    return (
                      <li key={l.id}>
                        <button
                          className={`module-lesson-link ${isLessonDone ? "done" : ""}`}
                          onClick={() => onSelectLesson(l.id)}
                        >
                          <span className="lesson-num-pill">{l.num_str}</span>
                          <span className="lesson-title-text">{l.title}</span>
                          {isLessonDone && (
                            <CheckCircle2
                              size={14}
                              className="lesson-done-check"
                            />
                          )}
                        </button>
                      </li>
                    );
                  })}
                </ul>
              </div>
            );
          })}
        </div>
      </section>

      {/* Student Hands-On Projects & Starter Templates Table */}
      <section className="hub-assignments-section">
        <div className="section-header-row">
          <div>
            <h2 className="section-title">
              💻 Hands-On Projects &amp; Reference Solutions
            </h2>
            <p className="section-subtitle">
              Starter templates with <code># TODO</code> exercises are mounted
              in your VS Code workspace (<code>/home/navpro/workspace/</code>):
            </p>
          </div>
        </div>

        <div className="table-wrapper">
          <table className="assignments-table">
            <thead>
              <tr>
                <th>Project / Milestone</th>
                <th>Focus Domain</th>
                <th>Student Task Template (To Fill In)</th>
                <th>Reference Solution</th>
              </tr>
            </thead>
            <tbody>
              <tr>
                <td>
                  <strong>Day 1: FastAPI Telemetry Gateway</strong>
                </td>
                <td>Async ASGI, WebSockets &amp; Nav2 Action HTTP 202</td>
                <td>
                  <code>exercises/day1_fastapi/task_telemetry_stream.py</code>
                </td>
                <td>
                  <code>exercises/day1_fastapi/solution_telemetry_stream.py</code>
                </td>
              </tr>
              <tr>
                <td>
                  <strong>Day 2: Canvas 2D AMR Radar &amp; Nav</strong>
                </td>
                <td>60FPS Canvas, SLAM Occupancy Grid &amp; Waypoints</td>
                <td>
                  <code>exercises/day2_canvas/task_radar_cockpit.js</code>
                </td>
                <td>
                  <code>exercises/day2_canvas/solution_radar_cockpit.js</code>
                </td>
              </tr>
              <tr>
                <td>
                  <strong>Day 3: Model Context Protocol (MCP)</strong>
                </td>
                <td>Claude 3.7 / Gemini 2.0 Tool-Calling &amp; Preflight</td>
                <td>
                  <code>exercises/day3_mcp/task_mcp_robotics_server.py</code>
                </td>
                <td>
                  <code>exercises/day3_mcp/solution_mcp_robotics_server.py</code>
                </td>
              </tr>
              <tr>
                <td>
                  <strong>Grand Capstone: Mission DAG Orchestrator</strong>
                </td>
                <td>Stateful Graph Runner, Dynamic Re-routing &amp; Safety</td>
                <td>
                  <code>exercises/capstone_dag/task_mission_orchestrator.py</code>
                </td>
                <td>
                  <code>exercises/capstone_dag/solution_mission_orchestrator.py</code>
                </td>
              </tr>
            </tbody>
          </table>
        </div>

        {/* Mock Telemetry Callout */}
        <div className="mock-callout-card">
          <div className="mock-callout-header">
            <Radio size={20} className="mock-icon" />
            <h4>Companion Mock Data Simulator Node</h4>
          </div>
          <p>
            When testing your FastAPI REST routes and Canvas Cockpit without full Gazebo physics,
            launch the lightweight mock telemetry engine in any VS Code terminal:
          </p>
          <div className="code-container" style={{ margin: "0.75rem 0" }}>
            <div className="code-header">
              <span className="code-lang-tag">BASH</span>
            </div>
            <pre>
              <code>python3 -m navpro_bridge.mock_amr_provider</code>
            </pre>
          </div>
          <span className="mock-detail">
            Streams realistic <code>20Hz /robot/pose</code>, <code>/sensor/scan</code>, <code>/power/battery</code>, and <code>/nav2/status</code>.
          </span>
        </div>
      </section>
    </div>
  );
}
