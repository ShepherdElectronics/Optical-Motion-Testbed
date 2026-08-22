# Public Release Boundary

The Dual-Core Optical Motion Testbed public portfolio is designed to demonstrate engineering capability without distributing a reproducible implementation.

## Included

- Functional and performance requirements
- Dual-core architectural rationale and subsystem responsibilities
- Nominal 1 kHz encoder-supervisory control behavior
- Explicit distinction between supervisory cadence and high-rate hardware actuation timing
- Safety-state and fault-behavior requirements
- Shared-memory correctness requirements and verification intent
- Host/test workflow at a functional level
- Measured motion plots and physical verification evidence
- Requirements-to-evidence traceability
- Explicit control-path maturity and limitation statements

## Withheld

- Source code and generated code
- Simulink or other editable engineering models
- CAD/NX models and fabrication drawings
- Schematics, PCB layout, grounding implementation, BOM, pinouts, wiring, and switch settings
- Memory maps, linker placement, exact shared-buffer layout, cache/MPU configuration, barriers, and synchronization code
- Board-specific timer, ADC, current-sense, encoder, gate-drive, and power-stage mappings
- Controller tuning constants, calibration values, and energized commissioning details
- Build, flash, setup, commissioning, assembly, and reproduction instructions

The public FRDs may identify a required mechanism, timing boundary, or correctness property where that is necessary to explain system behavior. They do not disclose the private implementation method.


## Embedded figures

Selected schematic and PCB images may appear inside the Platform/Electrical FRD as fixed documentation figures. Their presence in the report does not place the editable schematic, PCB layout, fabrication package, CAD/EDA project, BOM, pin map, or setup instructions into the public release.
