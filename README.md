# SCD2 Dual-Core Optical Motion Testbed

A complete customer-facing case study presented in two immediately visible reports:

- **[Dual-Core Firmware, Host Software & Results FRD](SCD2_DualCore_Firmware_Host_FRD_v2.4.pdf)** — STM32H747 Cortex-M7/M4 architecture, OpenAMP/RPMsg, AXI-SRAM shared-memory IPC, target motion firmware, live GUI, telemetry, logging, recovery behavior, and measured results.
- **[Mechanical Platform & Electrical Integration FRD](SCD2_Platform_Electrical_FRD_v2.4.pdf)** — exploded mechanical assembly, rotary and translation systems, load path, encoder/STEP-DIR interface, PCB, solid ground plane, wiring, and physical verification.

## Firmware and software highlights

- 400 MHz Cortex-M7 + 200 MHz Cortex-M4
- OpenAMP/RPMsg control plane with 44-byte application messages
- 256 KiB AXI-SRAM producer/consumer ring
- 64-byte motion records at 100 Hz / 6.4 kB/s
- sequence-gap, overflow, heartbeat, and fault monitoring
- 4 µs STEP pulse, 25 kHz pulse cap, 25 ms overrun warning
- 500 ms host heartbeat and 2 s target deadman
- live GUI with command/measured plots, encoder position/rate, test status, and logging
- structured CSV + metadata capture, malformed-row detection, completion markers, and partial-run recovery
- retained low-speed, constant-speed, step-response, and closed-loop frequency-response evidence

## Repository sections

- [`01-dual-core-firmware/`](01-dual-core-firmware/) — architecture graphics, source excerpts, GUI/video, and measured results.
- [`02-platform-electrical/`](02-platform-electrical/) — mechanical/electrical media, schematic, PCB evidence, and physical-system video.

No third-party affiliation or endorsement is claimed.
