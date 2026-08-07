# 1. Dual-Core Firmware, Host Software & Results

Primary report: [`docs/DualCore_Optical_Motion_Firmware_Host_FRD.pdf`](docs/DualCore_Optical_Motion_Firmware_Host_FRD.pdf)

This section covers the STM32H747 Cortex-M7/M4 architecture, high-frequency STEP generation rationale, OpenAMP/RPMsg command/status exchange, AXI-SRAM motion records, target-side I/O, GUI telemetry, logging, recovery behavior, and measured results.

## Why the dual-core split exists

The split is driven by motion timing rather than the modest validation telemetry rate. At 256 microsteps and a 24.65:1 gearbox, the table requires about 3,505.78 STEP pulses per output degree; 15 deg/s therefore corresponds to about 52.6 kHz. Separating variable-latency communications and telemetry from the pulse-critical motion path preserves execution margin and pulse regularity while retaining fine microstepping at higher mechanical speed.

## Public source-contract checks

The [`source-excerpts`](source-excerpts/) folder now includes directly reviewable guards for the published interface definitions:

- 4,095-record ring capacity: 64-byte metadata + 4,095 x 64-byte records = exactly 256 KiB.
- compile-time assertions for sample size, metadata offset, total ring size, protocol version fit, and 44-byte message size.
- protocol version `1U`, consistent with the `uint16_t version` wire field.
- a host-side uint32 microsecond timestamp-wrap helper and executable wrap-crossing test.

The complete MPU/cache setup, memory barriers, producer/consumer publication ordering, and full OpenAMP implementation remain controlled private source and are not claimed to be independently verifiable from the public excerpts.

## Audit boundary

This public release is an evidence-rich engineering case study, not a complete source audit of the controlled firmware. The published material supports review of the architecture, memory/protocol contracts, compile-time guards, timestamp-wrap behavior, interfaces, and measured results. Full OpenAMP/RPMsg runtime integration, MPU/cache policy, barriers, and producer/consumer publication ordering remain private and must not be represented as fully source-auditable from this repository.
