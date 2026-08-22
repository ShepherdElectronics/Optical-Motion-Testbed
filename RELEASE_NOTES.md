# Release Notes

## v7.3.3

- Restored engineering figures to both FRDs while retaining the established professional document template.
- Restored public-safe GUI, architecture, characterization, mechanical, load, CAD-context, schematic, PCB-routing, ground-plane, and board-render evidence.
- Schematic and PCB figures are embedded only inside the Platform/Electrical FRD; editable EDA/fabrication files are not distributed.
- Preserved the public/private boundary for source code, models, setup instructions, BOMs, pin maps, detailed memory configuration, and reproduction-level implementation material.

 - v7.3.1

Date: 13 August 2026

- Preserved the established Herder professional FRD template for both reports.
- Reconciled public firmware claims against the latest reviewed v0.3 implementation evidence.
- Clarified that the active control path is encoder-only closed position/speed control producing a sensored rotating voltage-vector demand.
- Clarified that the nominal 1 kHz rate is the encoder/supervisory control cadence, not a PWM carrier or STEP-pulse frequency.
- Preserved the original dual-core rationale: timing-critical motion work is isolated from variable-latency command, telemetry, diagnostic, and test-service activity.
- Kept current-regulated d/q FOC as a future integration path rather than a commissioned public-performance claim.
- Retained shared-memory correctness requirements covering coherency, publication ordering, bounded storage, sequence continuity, version compatibility, and timestamp rollover without exposing private implementation details.
- Presented shared-buffer fit as a production invariant enforced by compile-time layout checks; no defect-history narrative is included.
- Preserved public-safe GUI, measured-result, physical-platform, translation, load, and integrated-motion evidence.
- No source code, models, schematics, PCB/CAD data, setup instructions, or reproduction-level implementation details are included.

- Corrected first-page typography and restored the established compact FRD cover hierarchy without altering technical content.

## v7.3.3

- Consolidated the FRD figure presentation so every displayed caption belongs to an embedded figure.
- Preserved the established production-document template and public-release boundary.
- Retained embedded platform schematic and PCB figures as documentation evidence without distributing editable design sources.
