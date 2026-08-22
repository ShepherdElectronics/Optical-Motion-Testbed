# Dual-Core Optical Motion Testbed

Public engineering portfolio package for a bench-scale optical motion platform and its STM32H747 dual-core control/test architecture.

## Featured engineering reports

- [Firmware, Host Software & Results FRD v7.3.3](DualCore_Optical_Motion_Firmware_Host_FRD_v7.3.3.pdf)  
  Dual-core architecture rationale, nominal 1 kHz encoder-supervisory control, host telemetry, shared-memory correctness requirements, state/fault behavior, measured characterization, control-path maturity, and verification traceability.

- [Mechanical Platform & Physical Verification FRD v7.3.3](DualCore_Optical_Motion_Platform_Electrical_FRD_v7.3.3.pdf)  
  Mechanical requirements, physical integration, translation verification, static-load evidence, representative integrated motion results, interface responsibilities, and verification traceability.

Both reports use the established Herder professional FRD template.

## Technical highlights

- STM32H747 heterogeneous dual-core architecture: Cortex-M7 at 400 MHz and Cortex-M4 at 200 MHz.
- Dual-core workload separation protects timing-critical motion work from variable-latency command, telemetry, diagnostics, and test activity.
- The reviewed v0.3 implementation evidence supports an encoder-only closed position/speed path with a nominal 1 kHz supervisory/control-law update.
- The 1 kHz update is not the PWM carrier or a STEP-pulse frequency; high-rate actuation timing remains an independent hardware-timed responsibility.
- The active encoder path produces a sensored rotating voltage-vector demand. Current-regulated d/q FOC is retained as a future integration path and is not presented as commissioned operation.
- Inter-core data integrity is treated as a system requirement: cache coherency, publication ordering, bounded shared storage, sequence continuity, version compatibility, and timestamp rollover must be verified.
- Shared-buffer capacity is defined so metadata and retained records fit within the reserved object, with compile-time layout checks enforcing the contract.
- Public evidence includes live host telemetry, low-speed tracking, constant-speed behavior, step response, sine-response characterization, translation travel, static loading, and integrated platform motion.

## Public release boundary

This repository is intentionally not a reproduction package. It contains no source code, Simulink/model files, CAD/NX models, schematics, PCB artwork, BOMs, pinouts, DIP-switch tables, wiring diagrams, memory maps, linker placement, cache/MPU settings, synchronization implementation, controller tuning values, build/flash instructions, commissioning procedures, assembly procedures, or setup instructions.

The public documents describe requirements, engineering rationale, observable behavior, verification methods, limitations, and measured evidence. Reproduction-level implementation details remain private.


## Embedded documentation figures

The platform FRD includes selected schematic, PCB routing, ground-plane, and board-render figures as non-editable engineering documentation evidence. Editable schematic/PCB source files, fabrication outputs, CAD/EDA databases, BOMs, pin maps, and reproduction instructions are not distributed in this public package.
