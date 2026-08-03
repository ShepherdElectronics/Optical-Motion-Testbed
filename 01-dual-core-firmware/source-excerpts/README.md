# Public firmware excerpts

These owned source excerpts define the public MotionIPC protocol, shared-memory record structure, and memory map. They are included to demonstrate the dual-core architecture without publishing the complete build environment or private development history.

Important review note: the configured 4,096 × 64-byte sample array consumes 256 KiB before `MotionSharedRing` metadata is counted. A production release should reduce capacity to 4,095 or enlarge the reserved AXI-SRAM region.
