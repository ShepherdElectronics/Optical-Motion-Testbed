# Public Release Boundary

The Dual-Core Optical Motion Testbed public portfolio is designed to prove engineering capability without distributing a reproducible implementation.

## Included

- Functional and performance requirements
- Architectural rationale and subsystem responsibilities
- Safety and fault-behavior requirements
- Shared-memory correctness requirements and verification intent
- Host/test workflow at a functional level
- Measured performance plots and physical verification evidence
- Requirements-to-evidence traceability
- Explicit maturity and limitation statements

## Withheld

- Source code and generated code
- Simulink or other editable engineering models
- CAD/NX models and fabrication drawings
- Schematics, PCB layout, grounding implementation, BOM, pinouts, wiring, and switch settings
- Memory maps, linker placement, exact shared-buffer layout, cache/MPU configuration, barriers, and synchronization code
- Board-specific peripheral mapping and power-stage integration
- Controller tuning constants and production calibration values
- Build, flash, setup, commissioning, assembly, and reproduction instructions

The public FRDs may state that these mechanisms exist or are required when that is necessary to explain system correctness. They do not disclose the private implementation method.
