# Embedded Status

Last Updated: 2026-08-29
Status: Active — Bounded Exploration

## Current Goal
Complete Embedded Exploration Sprint v1 and collect real evidence about MCU / hardware-software engineering fit without displacing the current Horizon main and structured lines.

## Current Stage
Phase 0 — Toolchain and board bring-up.

Target development loop:
`STM32CubeIDE → Build → Flash → Debug → onboard LED`

Platform:
- Authorized board: STMicroelectronics NUCLEO-G071RB
- Existing user hardware: generic STM32F407VET6 development/core board (reported 2026-08-29; exact board revision not yet verified)
- Toolchain: STM32CubeIDE

## Completed
- Embedded Exploration Sprint v1 authorized by Horizon Core.
- NUCLEO-G071RB selected as the first MCU board.
- STM32CubeIDE selected as the primary toolchain.
- Embedded Specialist Thread initialized under HZN-001 v0.5.

## In Progress
- Evaluate the existing STM32F407VET6 board against the authorized NUCLEO-G071RB bring-up path without silently changing the approved Sprint platform.
- Acquire / verify the authorized hardware if the existing board is not adopted as a substitute.
- Verify host toolchain and physical board bring-up prerequisites.
- Establish the first minimal STM32 project and complete the build / flash / debug / onboard-LED loop.

## Next Milestone
- Phase 0 complete: one approved STM32 board successfully builds, flashes, enters a debugger session, and controls an onboard LED on real hardware.

## Evidence
- `README.md` — Core-authorized Embedded Exploration Sprint v1 scope and NUCLEO-G071RB platform decision.
- `Project_Horizon/00_Project_Control/MASTER_STATUS.md` — Embedded marked Active — Bounded Exploration.
- User report and screenshot on 2026-08-29: an STM32F407VET6 development/core board is already available.
- Phase 0 hardware/project evidence: pending.

## Blockers
- Authorized NUCLEO-G071RB is not yet available.
- Existing STM32F407VET6 board may require an external SWD/ST-LINK probe for the required debug loop; exact board/debug capability is not yet verified.

## Needs Core Decision
No — unless replacing the authorized NUCLEO-G071RB with the existing STM32F407VET6 board is proposed.

## Migration Note
Physical STATUS ownership migrated from `Project_Horizon/04_Embedded/STATUS.md` to `Horizon_Learning/Embedded/STATUS.md` on 2026-09-04. Execution state is unchanged.
