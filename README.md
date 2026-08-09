# Dual-Core Optical Motion Testbed

A precision rotary/translation motion-control testbed integrating STM32H747 dual-core control, differential encoder feedback, STEP/DIR actuation, custom interface electronics, live telemetry, automated testing, and measured characterization.

## Featured engineering reports

- [Firmware, Host Software & Results FRD v5.3](documentation/engineering-reports/DualCore_Optical_Motion_Firmware_Host_FRD_v5.3.pdf)
- [Mechanical Platform & Interface PCB FRD v5.1](documentation/engineering-reports/DualCore_Optical_Motion_Platform_Electrical_FRD_v5.1.pdf)

## Firmware implementation notes

- The dual-core split is motivated by STEP-frequency headroom at the 256-microstep setting, not by the 100 Hz validation telemetry workload.
- The public MotionIPC ring now contains 4,095 records so the metadata header and records fit the 256 KiB AXI-SRAM reservation exactly.
- Public compile-time tests guard the ring boundary and protocol wire representation.
- A published timestamp-wrap test verifies host-side reconstruction across the uint32 microsecond rollover.
- Full cache/MPU and producer-consumer synchronization logic remains in the private controlled implementation.

## Reproducible configuration

- [R725 microstep DIP-switch table](02-platform-electrical/configuration/r725-microstep-switch-table.csv)
- [Seven-pin interface map](02-platform-electrical/configuration/interface-pinout.csv)
- [Prototype electrical BOM and release corrections](02-platform-electrical/configuration/prototype-electrical-bom.md)
- [Hardware power-up and acceptance procedure](02-platform-electrical/configuration/power-up-and-acceptance.md)
- [Firmware signal mapping and characterized assumptions](01-dual-core-firmware/configuration/README.md)

## Repository structure

- `01-dual-core-firmware` - firmware architecture, host GUI, telemetry, automation, results, and software configuration
- `02-platform-electrical` - mechanics, PCB, schematic, grounding, driver configuration, pinout, BOM, assembly, and hardware verification
- `documentation/engineering-reports` - controlled PDF and editable DOCX FRDs
