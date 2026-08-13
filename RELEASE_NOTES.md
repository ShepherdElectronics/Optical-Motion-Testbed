# Release Notes

## v7.0 - 12 August 2026

- Rebuilt the public-facing documents against the private `STM32H747_MotionIPC_v0_3_encoder_safe` firmware archive.
- Preserved the established Herder engineering-report DOCX template.
- Reconciled public claims with the actual firmware maturity.
- Identified the implemented control path as encoder-based closed position/speed control rather than commissioned current-regulated FOC.
- Retained current-sensed FOC only as a future/integration capability, not a demonstrated public claim.
- Made shared-memory coherency, bounds safety, synchronization integrity, watchdog behavior, and output gating explicit system-level requirements.
- Kept exact memory, cache/MPU, barrier, synchronization, board, build, and setup implementation private.
- Removed all source code, models, schematics, PCB/CAD design files, pinouts, BOMs, DIP-switch data, and setup/reproduction instructions from the public package.
