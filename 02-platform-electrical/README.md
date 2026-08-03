# 2. Platform and Electrical Integration

This section documents the physical motion platform and the interfaces that support the STM32H747 dual-core firmware.

## Included

- dual-axis mechanical platform
- differential encoder interface
- STEP/DIR motor-driver interface
- custom PCB with a solid-copper ground plane
- featured schematic and PCB renders
- system, load, and motion demonstration media
- configuration-specific motion scaling

## Read first

- [`docs/SCD2_Platform_Electrical_FRD.pdf`](docs/SCD2_Platform_Electrical_FRD.pdf)
- [`schematic/Encoder_STEP_Interface_Schematic.pdf`](schematic/Encoder_STEP_Interface_Schematic.pdf)
- [`media/system-assembly.png`](media/system-assembly.png)
- [`media/pcb-solid-ground-plane.png`](media/pcb-solid-ground-plane.png)

The hardware is presented as the plant and signal-integrity layer for the firmware architecture, not as an isolated mechanical project.
