# Firmware test configuration

## Active signal mapping

| Signal | Board pin | MCU pin | Status |
|---|---|---|---|
| Encoder A | D2 | PA3 | Active |
| Encoder B | D3 | PA2 | Active |
| STEP | D10 | PK1 | Active |
| DIR | D13 | PH6 | Active |
| Encoder Z / Index | D4 | PJ8 | Physically wired; unused by current firmware |

## Characterized operating assumptions

- 256 microsteps/full step
- 24.65:1 gearbox
- 3,505.78 pulses/degree
- 115,200 baud host link
- 4 us STEP pulse high time
- 25,000 pulse/s software safety ceiling
- 2 s host-heartbeat deadman

See the companion platform/electrical configuration folder for the full R725 switch table and hardware power-up sequence.
