# Public Release Boundary

This package is intended to demonstrate engineering capability without providing a reproduction package.

## Included

- public functional requirements
- high-level architecture and subsystem boundaries
- selected photographs and non-sensitive system figures
- measured prototype results
- verification and traceability summaries
- explicit discussion of correctness risks such as shared-memory coherency, stale-data prevention, bounds enforcement, watchdog behavior, and fault-state control
- source-grounded maturity statements distinguishing implemented encoder-based control from uncommissioned current-sensed FOC integration

## Retained privately

- embedded source code and complete firmware trees
- host application source
- Simulink and other editable engineering models
- exact memory map and linker placement
- cache/MPU attributes and cache-maintenance policy
- memory-barrier and publication-order implementation
- producer/consumer synchronization logic
- interrupt, timer, scheduling, PWM, and board-specific configuration
- schematics, PCB artwork, BOMs, connector definitions, pinouts, DIP-switch settings, wiring, and grounding implementation
- CAD/NX geometry and manufacturing drawings
- assembly, commissioning, setup, build, and flashing instructions
- private test harnesses and reusable development tooling

The public FRDs state requirements and evidence at the system level. They should not be interpreted as source releases, manufacturing packages, setup manuals, or certification records.
