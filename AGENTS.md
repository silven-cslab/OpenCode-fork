# AGENTS

## SKILLS

### OpenCode Bug-Seeding Workflow
Use this workflow when adding challenge files to the OpenCode repository.

1. Select
- Pick C repositories from https://github.com/silven-mohan?tab=repositories&q=&type=&language=c&sort=
- Choose source files that are suitable for beginner debugging practice.

2. Copy
- Copy selected .c source files into C/.
- Use clear file names in C/ that match program intent.

3. Modify
- Intentionally introduce bugs before commit.
- Ensure each added file has 3 or more issues.
- Prefer a mix of issue types:
  - syntax errors
  - runtime errors
  - logical errors

4. Commit
- Commit each newly added C file separately.
- Follow commit style:
  - Added: Program for <feature>

5. Push
- Push committed changes to the remote repository before opening issues.
- Confirm the latest commits are available on origin/main.

6. Open an Issue
- Create one issue per newly added file.
- Use template style from issue #1.
- Title format:
  - Fix the bugs and maybe improve the logic #OpenCodeN
- Body format:
  - In the file [C/<FileName>.c](https://github.com/silven-mohan/OpenCode/blob/main/C/<FileName>.c) fix the bugs and maybe improve the logic.
- Add labels:
  - bug
  - good first issue
- Continue numbering sequentially (#OpenCode4, #OpenCode5, ...).

7. Walkthrough
- Update Walkthrough.md with:
  - files added
  - bug categories per file
  - issue mapping
  - commit mapping

## Notes For Agents
- Keep changes focused and minimal.
- Do not fix seeded bugs in this workflow.
- Never add inline bug-explanatory comments inside challenge code files (for example, comments like "# BUG", "FIXME", or text that reveals seeded issues).
- Seeded bugs must look natural and non-obvious. Avoid visibly intentional patterns such as direct crashes like `x = 1/0`, `crash = 1/0`, or similarly explicit giveaway code.
- No duplicate files are allowed. Before adding a new challenge file, verify that an equivalent file (same or very similar logic/purpose) does not already exist in the repository.
- Verify issue links and file names are correct before submission.
