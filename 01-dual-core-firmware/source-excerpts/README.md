# Public firmware excerpts

Selected owned headers and tests defining the MotionIPC protocol, shared ring, memory map, and timestamp-wrap contract. The complete private firmware implementation remains withheld.

## Publicly verifiable contracts

- `MOTIONIPC_RING_CAPACITY` is 4095 records. With the 64-byte metadata header and 64-byte aligned records, `MotionSharedRing` exactly fits the reserved 256 KiB AXI-SRAM region.
- Compile-time assertions reject record-size, metadata-offset, or total-ring-size regressions.
- `MOTION_IPC_VERSION` is represented as `1U`, matching the published `uint16_t version` wire field.
- `timestamp_unwrap.py` and its test document modulo-2^32 handling for the 32-bit microsecond timebase.
- The headers expose data-layout contracts only. Producer/consumer ordering, cache/MPU configuration, barriers, and the complete OpenAMP service implementation remain part of the controlled private firmware.

## Local checks

```sh
gcc -std=c11 -Wall -Wextra -Werror tests/layout_contract_test.c -o layout_contract_test
./layout_contract_test
python tests/test_timestamp_wrap.py
```
