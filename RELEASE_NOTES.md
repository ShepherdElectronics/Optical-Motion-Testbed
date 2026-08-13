# Release Notes - v7.1

Date: 13 August 2026

- Restored the established v5 Herder professional FRD template for both reports.
- Re-expanded technical detail after the v7.0 public package became too abbreviated.
- Reconciled firmware claims with the reviewed `STM32H747_MotionIPC_v0_3_encoder_safe` private archive.
- Added explicit architecture rationale distinguishing high-rate motion timing needs from the modest public telemetry workload.
- Added nominal 1 kHz encoder-control behavior, safety-state/fault requirements, and a clear current-sensed FOC maturity boundary.
- Expanded shared-memory correctness requirements covering coherency, publication ordering, buffer bounds, sequence continuity, versioning, and timestamp rollover without exposing the private implementation.
- Documented that a previously identified shared-buffer boundary defect was corrected and guarded by compile-time fit checks while withholding exact layout details.
- Expanded platform requirements, translation and load interpretation, interface responsibilities, acceptance criteria, and traceability.
- Removed orphaned embedded media from the DOCX packages so sensitive CAD/PCB/schematic figures are not present even as unused document resources.
- Preserved only public-safe GUI, measured-result, physical-platform, translation, load, and integrated-motion figures.
