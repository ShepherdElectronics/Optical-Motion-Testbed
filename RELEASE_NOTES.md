# Release notes

## Revision 5.3 - 6 August 2026

- Added a public host-side uint32 microsecond timestamp unwrapping helper and rollover-crossing test.
- Clarified the evidence boundary for cache coherency: public headers expose alignment and placement contracts, while MPU/cache policy, barriers, and producer/consumer publication logic remain private.
- Updated the firmware FRD to revision 5.3 with the corrected memory contract and verification evidence while retaining the high-STEP-frequency rationale for the dual-core split.

## Revision 5.1 - 5 August 2026

- Added the complete R725 microstep DIP-switch table and explicitly identified the tested 256-uSTEP switch state.
- Added the complete seven-pin controller/interface map and documented the physically wired but unused encoder index channel.
- Added the prototype electrical BOM and recommended bypass, base-resistor, termination, and controlled-harness corrections.
- Added configuration, power-up, shutdown, safety, acceptance, and reproducible test procedures.
- Added original requirement-versus-demonstrated-result disposition, including the 25 lb requirement, 40 lb static demonstration, and +/-3 13/32 in measured offset.
- Added firmware-side timing, signal mapping, fault response, and acceptance tests.
- Preserved the v5 professional report template and all existing technical imagery.
