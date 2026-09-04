# Embedded

## Embedded Exploration Sprint v1

Status: **Core-authorized bounded exploration**  
Authorized: 2026-08-29  
Decision owner: Horizon Core

## Purpose

Use a small, project-first STM32 sprint to test whether embedded systems deserves a larger long-term role in Project Horizon.

This is **not** a new main technical line. Python remains the main technical line and Algorithm remains the active structured line. Embedded may not materially displace either without a separate Horizon Core decision.

## Sprint Question

Does real MCU / hardware-software work produce enough sustained interest and engineering value to justify a formal Embedded Specialist route?

The sprint should collect evidence from actual building and debugging rather than from tutorials alone.

## Platform Decision

First MCU board: **STMicroelectronics NUCLEO-G071RB**.

Primary toolchain: **STM32CubeIDE** using the current official ST release available at setup time.

Do not add ESP32, 51, FPGA, FreeRTOS, Embedded Linux, CAN or ROS 2 during Sprint v1 unless Horizon Core explicitly expands the scope.

## Sprint Scope

### Phase 0 — Toolchain and board bring-up

- install / verify STM32CubeIDE;
- connect NUCLEO-G071RB through ST-LINK;
- create, build, flash and debug one minimal project;
- verify onboard LED control.

### Phase 1 — Essential MCU interaction

- GPIO output;
- button / GPIO input;
- external interrupt (EXTI);
- timer;
- PWM;
- UART.

Embedded-C concepts are patched only when the current hardware task requires them.

### Phase 2 — First integrated project

**STM32 Interactive Controller v1**

Minimum project evidence:

- button input;
- interrupt handling;
- timer / PWM output;
- UART command or telemetry path;
- simple state-machine behavior;
- runnable source;
- concise README;
- wiring / board-pin explanation;
- demo evidence;
- meaningful Git commit history.

## Sprint Exit Gate

After the first integrated project, Horizon Core reviews interest, capability, opportunity cost and evidence quality.

Possible decisions: **Promote / Continue bounded exploration / Pause**.

## Governance / Ownership

- Horizon Core owns activation, capacity limits, promotion / pause decisions and cross-thread priority.
- Embedded Specialist owns `Embedded/STATUS.md` and Embedded execution evidence in `Horizon_Learning`.
- Horizon Core must not write that Specialist STATUS on its behalf.

## Immediate Next Step

Continue **Phase 0 — Toolchain and board bring-up**.

Do not begin Phase 1 until the board, toolchain, build, flash and debug loop are verified.

## Migration Note

Workspace migrated from `Project_Horizon/04_Embedded/` to `Horizon_Learning/Embedded/` on 2026-09-04. The original project-first sprint scope is preserved.
