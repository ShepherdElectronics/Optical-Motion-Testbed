# Dual-Core Optical Motion Testbed

A precision rotary and translation motion-control testbed built around an STM32H747 dual-core controller, differential encoder feedback, STEP/DIR motor control, custom interface electronics, live telemetry, automated testing, and measured system characterization.

## Engineering reports

- [Firmware, Host Software, and Results FRD v5.0](documentation/engineering-reports/DualCore_Optical_Motion_Firmware_Host_FRD_v5.0.pdf)
- [Mechanical Platform and Interface PCB FRD v5.0](documentation/engineering-reports/DualCore_Optical_Motion_Platform_Electrical_FRD_v5.0.pdf)

## Repository structure

- `01-dual-core-firmware` - embedded firmware, inter-core communication, telemetry, host tools, and measured results
- `02-platform-electrical` - mechanical platform, interface PCB, schematic, routed copper, ground plane, and verification evidence
- `documentation/engineering-reports` - controlled PDF and editable DOCX engineering reports

## System highlights

- STM32H747 Cortex-M7 and Cortex-M4 architecture
- OpenAMP/RPMsg command and status communication
- AXI-SRAM shared-memory telemetry path
- Differential encoder reception
- STEP/DIR motor control
- Live GUI visualization and CSV logging
- Automated motion characterization
- Custom interface PCB with a dedicated ground plane
- Rotary and translation test capability

See `NOTICE.md` and `RELEASE_NOTES.md` for distribution notes and revision history.