#!/usr/bin/env python3
"""
NavPro Learning Hub - Level 2: Day 3
Student Hands-on Task: Build a Directed Acyclic Graph (DAG) Mission Runner

=============================================================================
TASK DESCRIPTION:
=============================================================================
Your objective is to implement the execution logic of an enterprise
autonomous mission runner named `DagMissionRunner`.

Mission Graph Nodes to support:
1. `NavigateToWaypoint`:
   - Params: `{"target": str, "x": float, "y": float}`
   - Action: Print navigation dispatch and advance to next step.
2. `RestApiTrigger`:
   - Params: `{"url": str, "method": str, "data": dict}`
   - Action: Validate url starts with "http" (raise ValueError if not).
   - Simulate HTTP call, log success, advance to next step.
3. `HumanApprovalGate`:
   - Params: `{"question": str, "choices": list}`
   - Action: Halts mission with status "WAITING_APPROVAL".
   - Saves active question into self.current_prompt.
4. `LoopBranch`:
   - Params: `{"return_to_step": int, "iterations": int}`
   - Action: Maintains a loop counter in self.loop_memory.
   - If current loop < iterations: jumps back to return_to_step.
   - If complete: advances to next step.
5. `submit_operator_response(choice: str)`:
   - Resumes mission if choice is "yes" or "proceed".
   - Aborts mission if choice is "no" or "abort".

Follow the TODOs below to complete the implementation.
"""

from typing import Dict, Any, List, Optional


class DagMissionRunner:

    def __init__(self, plan: Dict[str, Any]):
        self.plan_id = plan.get("id", "mission-001")
        self.steps: List[Dict[str, Any]] = plan.get("steps", [])
        self.step_pointer = 0

        self.is_completed = False
        self.is_aborted = False
        self.waiting_for_operator = False

        self.current_prompt: Optional[Dict[str, Any]] = None
        self.loop_memory: Dict[str, int] = {}

    def run_next_step(self):
        """Processes the next step in the workflow graph."""
        if self.step_pointer >= len(self.steps):
            self.is_completed = True
            print(f"\n[Mission Runner] All {len(self.steps)} steps COMPLETED successfully!")
            return

        step = self.steps[self.step_pointer]
        action_type = step.get("type")
        params = step.get("params", {})

        print(f"\n-> Step {self.step_pointer + 1}/{len(self.steps)}: [{action_type}]")

        # -------------------------------------------------------------------
        # TODO 1: Handle 'NavigateToWaypoint'
        # - Extract 'target', 'x', 'y' from params
        # - Print navigation progress message
        # - Increment self.step_pointer by 1
        # - Call self.run_next_step()
        # -------------------------------------------------------------------
        if action_type == "NavigateToWaypoint":
            # TODO: FILL IN CODE HERE
            pass

        # -------------------------------------------------------------------
        # TODO 2: Handle 'RestApiTrigger'
        # - Extract 'url', 'method', 'data' from params
        # - Validate: if not url.startswith("http"): raise ValueError("Invalid URL scheme")
        # - Print simulated API call message
        # - Increment self.step_pointer by 1
        # - Call self.run_next_step()
        # -------------------------------------------------------------------
        elif action_type == "RestApiTrigger":
            # TODO: FILL IN CODE HERE
            pass

        # -------------------------------------------------------------------
        # TODO 3: Handle 'HumanApprovalGate'
        # - Extract 'question' and 'choices' from params
        # - Set self.waiting_for_operator = True
        # - Store self.current_prompt = {"question": question, "choices": choices}
        # - Print prompt notice and RETURN (do not advance pointer yet!)
        # -------------------------------------------------------------------
        elif action_type == "HumanApprovalGate":
            # TODO: FILL IN CODE HERE
            pass

        # -------------------------------------------------------------------
        # TODO 4: Handle 'LoopBranch'
        # - Extract 'return_to_step' (0-indexed integer) and 'iterations' from params
        # - Check self.loop_memory for this step's ID: count = self.loop_memory.get(step_id, 0)
        # - If count < iterations:
        #     self.loop_memory[step_id] = count + 1
        #     self.step_pointer = return_to_step
        # - Else:
        #     self.step_pointer += 1
        # - Call self.run_next_step()
        # -------------------------------------------------------------------
        elif action_type == "LoopBranch":
            # TODO: FILL IN CODE HERE
            pass

        else:
            print(f"[Mission Runner] ERROR: Unhandled step type: {action_type}")
            self.is_aborted = True

    def submit_operator_response(self, choice: str):
        """
        TODO 5: Resumes the paused workflow when human operator clicks a decision:
        - Check if self.waiting_for_operator is True. If not, return.
        - Set self.waiting_for_operator = False
        - Set self.current_prompt = None
        - If choice.lower() in ["no", "abort", "reject"]:
            Set self.is_aborted = True
            Print "[Mission Runner] Mission ABORTED by human operator."
            Return.
        - Else:
            Increment self.step_pointer += 1
            Call self.run_next_step()
        """
        # TODO: FILL IN CODE HERE
        pass


# ---------------------------------------------------------------------------
# Test Runner
# ---------------------------------------------------------------------------

SAMPLE_WORKFLOW = {
    "id": "production-patrol-01",
    "steps": [
        {"id": "s1", "type": "NavigateToWaypoint", "params": {"target": "Bay 1", "x": 5.0, "y": 2.0}},
        {"id": "s2", "type": "RestApiTrigger", "params": {"url": "http://api.factory.io/status", "method": "POST", "data": {"scan": "ok"}}},
        {"id": "s3", "type": "HumanApprovalGate", "params": {"question": "Pallet loaded. Safe to drive to Bay 2?", "choices": ["Proceed", "Abort"]}},
        {"id": "s4", "type": "NavigateToWaypoint", "params": {"target": "Bay 2", "x": 10.0, "y": 0.0}}
    ]
}


def main():
    print("Testing DagMissionRunner...")
    runner = DagMissionRunner(SAMPLE_WORKFLOW)
    runner.run_next_step()

    if runner.waiting_for_operator:
        print(f"\nSimulated UI Prompt: {runner.current_prompt['question']}")
        print("Simulated operator clicking 'Proceed'...")
        runner.submit_operator_response("Proceed")


if __name__ == '__main__':
    main()
