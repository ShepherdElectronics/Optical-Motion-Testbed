# Dual-Core Optical Motion Testbed

Public engineering portfolio package for a dual-core STM32H747 motion-control testbed and its physical verification platform.

## Public scope

This repository documents system-level architecture, requirements, verification evidence, and measured prototype results. The private firmware archive was reviewed to align public claims with the implemented design, but the implementation itself is not distributed here.

The firmware architecture uses the STM32H747's two cores to separate fixed-rate motion/encoder control from variable-duration communications and telemetry activity. Shared-memory exchange is treated as a correctness-critical interface: bounded storage, coherency, synchronization, stale-data prevention, and publication integrity are explicit requirements. Exact memory placement, cache/MPU policy, barrier placement, synchronization logic, source code, and build configuration remain private.

The source-grounded control status is deliberately stated conservatively. The private archive contains an encoder-based closed position/speed control path that can produce a sensored rotating voltage vector. It also contains an integration path for current-sensed field-oriented control, but commissioned current-regulated FOC is not claimed by this public package because board-specific phase-current and power-stage integration are outside the demonstrated evidence.

## Engineering reports

- [Firmware, Host Software & Results FRD v7.0](documentation/engineering-reports/DualCore_Optical_Motion_Firmware_Host_FRD_v7.0.pdf)
- [Mechanical Platform & Physical Verification FRD v7.0](documentation/engineering-reports/DualCore_Optical_Motion_Platform_Electrical_FRD_v7.0.pdf)

## Demonstrated public evidence

- dual-core workload separation
- fixed-rate encoder-feedback control architecture
- host telemetry and automated characterization evidence
- measured low-speed, constant-speed, transient, and closed-loop response results
- completed rotary/translation platform
- greater-than-plus/minus-3-inch translation evidence
- 40 lb static offset-load demonstration
- shared-memory coherency and bounds treated as explicit correctness requirements

## Intentionally not published

No source code, Simulink/model files, CAD/NX files, schematics, PCB layout, BOM, pinout, DIP-switch table, memory map, linker placement, cache/MPU configuration, synchronization code, setup instructions, build/flash instructions, assembly procedure, or production configuration is included.

See `PUBLIC_RELEASE_BOUNDARY.md` for the publication boundary.
