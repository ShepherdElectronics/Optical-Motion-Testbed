# 1. Dual-Core Firmware and Host Software

This is the primary engineering section of the case study.

## Architecture

The STM32H747 uses a 400 MHz Cortex-M7 and a 200 MHz Cortex-M4. OpenAMP/RPMsg carries low-rate commands, heartbeats, faults, and ring-status messages. A custom 256 KiB AXI-SRAM ring carries 64-byte motion records at 100 Hz without sending every record through RPMsg.

The M7 owns boot sequencing, MPU/cache setup, record production, and control-plane requests. The M4 consumes records in bounded bursts of up to 128 samples and reports sequence gaps, dropped records, heartbeats, and status.

## Read first

- [`docs/SCD2_DualCore_Firmware_Host_FRD.pdf`](docs/SCD2_DualCore_Firmware_Host_FRD.pdf)
- [`architecture/dual_core_architecture.png`](architecture/dual_core_architecture.png)
- [`architecture/motionipc_memory_map.png`](architecture/motionipc_memory_map.png)
- [`source-excerpts/`](source-excerpts/)
- [`media/host-target-interface-demo.mp4`](media/host-target-interface-demo.mp4)

## Verified quantitative details

- 400 MHz M7 / 200 MHz M4
- 100 Hz shared-memory record production
- 64-byte records / 6.4 kB/s
- 44-byte RPMsg application messages
- 4 Hz ring-status requests
- 1 Hz per-core heartbeat cadence
- up to 128 records consumed per M4 service pass
- 4 µs STEP pulse high time
- 25 kHz step-rate cap
- 25 ms loop-overrun warning
- 500 ms host heartbeat / 2 s target deadman

## Engineering review finding

The configured 4,096-entry ring exceeds the reserved 256 KiB region once metadata is included. The report records the required correction rather than hiding it.
