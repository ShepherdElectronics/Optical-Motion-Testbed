# SCD2 Dual-Core Optical Motion Testbed

A firmware-led engineering case study built around a custom STM32H747 dual-core architecture. The system combines a 400 MHz Cortex-M7, a 200 MHz Cortex-M4, OpenAMP/RPMsg control messaging, a custom AXI-SRAM motion-record ring, target-side motor control, timestamped telemetry, a host GUI, interface electronics, and a physical dual-axis motion platform.

## Start here

### 1. Dual-core firmware and host software

[`01-dual-core-firmware/`](01-dual-core-firmware/) is the primary section. It documents:

- OpenAMP/RPMsg coordination between the Cortex-M7 and Cortex-M4
- 256 KiB AXI-SRAM producer/consumer ring
- 100 Hz transfer of 64-byte motion records at 6.4 kB/s
- 44-byte control/status messages
- sequence-gap, overflow, heartbeat, and fault monitoring
- target-side motion timing and safety supervision
- host GUI, logging, validation, and recovery behavior
- selected owned source excerpts

### 2. Platform and electrical integration

[`02-platform-electrical/`](02-platform-electrical/) documents the physical plant supporting the firmware:

- rotary and translational motion platform
- differential encoder and STEP/DIR interfaces
- firm-designed interface PCB with a solid-copper ground plane
- load, travel, and configuration-specific motion evidence
- mechanical and electrical demonstration media

## Verified headline specifications

| Item | Value |
|---|---:|
| MCU | STM32H747 |
| Cores | 400 MHz Cortex-M7 + 200 MHz Cortex-M4 |
| Inter-core control | OpenAMP / RPMsg |
| High-rate data path | AXI-SRAM shared ring |
| Ring allocation | 256 KiB |
| Record size / rate | 64 bytes at 100 Hz |
| Shared-memory throughput | 6.4 kB/s |
| RPMsg application message | 44 bytes |
| Host link | 115,200 baud |
| Safety supervision | 500 ms host heartbeat; 2 s target deadman |

## Scope and honesty

The source package verifies the dual-core communications architecture and also contains the motion-control and host-software modules. The reviewed evidence does not include one tagged release binary proving that every module was merged into a single final build. The repository therefore distinguishes verified modules from release qualification.

No third-party affiliation or endorsement is claimed.
