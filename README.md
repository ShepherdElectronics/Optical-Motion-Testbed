# Dual-Core Optical Motion Testbed

Public engineering portfolio package for a bench-scale optical motion platform and its STM32H747 dual-core control/test architecture.

## Featured engineering reports

- `DualCore_Optical_Motion_Firmware_Host_FRD_v7.1.pdf` - dual-core architecture rationale, 1 kHz encoder-control behavior, host telemetry, shared-memory correctness requirements, fault/state behavior, measured characterization, maturity boundaries, and verification traceability.
- `DualCore_Optical_Motion_Platform_Electrical_FRD_v7.1.pdf` - mechanical platform requirements, physical integration, translation verification, static-load evidence, representative integrated motion results, interface responsibilities, and verification traceability.

Both reports use the established Herder professional FRD template.

## Technical highlights

- STM32H747 heterogeneous dual-core architecture: Cortex-M7 at 400 MHz and Cortex-M4 at 200 MHz.
- Dual-core workload separation selected to protect timing-critical motion work from variable-latency communication and telemetry activity; the public 100 Hz telemetry workload is not presented as the reason two cores are required.
- Reviewed private v0.3 firmware includes an encoder-based closed position/speed control path with a nominal 1 kHz control cadence.
- Current-sensed d/q FOC is treated as an integration path, not as commissioned platform operation in the public claims.
- Inter-core data integrity is treated as a system requirement: cache coherency, publication ordering, buffer bounds, sequence continuity, version compatibility, and timestamp rollover must be verified.
- A previously identified shared-buffer boundary defect was corrected in the private implementation and guarded by compile-time fit checks.
- Public measured evidence includes low-speed tracking, constant-speed behavior, step response, sine-response characterization, translation travel, static loading, and integrated platform motion.

## Public release boundary

This repository is intentionally not a reproduction package. It contains no source code, Simulink/model files, CAD/NX models, schematics, PCB artwork, BOMs, pinouts, DIP-switch tables, wiring diagrams, memory maps, linker placement, cache/MPU settings, synchronization implementation, build/flash instructions, assembly procedures, or setup instructions.

The public documents describe requirements, engineering rationale, observable behavior, verification methods, limitations, and measured evidence. Implementation-level intellectual property remains private.
