# Prototype electrical BOM and release corrections

## Prototype implementation

| Function | Part | Quantity |
|---|---|---:|
| Differential encoder receiver | TI AM26LS32ACN, PDIP-16 | 1 |
| STEP/DIR transistor stages | onsemi 2N3904BU, TO-92 | 2 |
| Temporary interconnect | Breadboard jumper wiring | 1 set |
| Temporary platform | Solderless breadboard | 1 |
| Harness distribution | WAGO 221-2401 or equivalent | As required |

## Recommended corrections before a controlled release

1. Add a 0.1 uF bypass capacitor directly at the AM26LS32 supply pins.
2. Add series base resistors between D10/D13 and the 2N3904 bases.
3. Add 120 ohm differential termination where required across A+/A-, B+/B-, and Z+/Z-.
4. Replace temporary breadboard wiring with a controlled PCB/harness and continuity-test record.
