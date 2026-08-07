# Hardware configuration and reproduction

This folder contains the controlled switch and connector tables used by the demonstrated prototype.

## Tested low-speed configuration

- R725 microstep setting: **256 uSTEP**
- Switch notation from source workbook: **SW1 D, SW2 D, SW3 D, SW4 U**
- 51,200 pulses per motor revolution
- 24.65:1 gearbox
- 1,262,080 pulses per table revolution

Current-selection and standby-current positions must be recorded from the physical driver for each released configuration; the source evidence does not support asserting one universal current setting for all recorded tests.

## Files

- `r725-microstep-switch-table.csv` - complete microstep switch table from the source workbook
- `interface-pinout.csv` - seven-pin controller/interface mapping
- `prototype-electrical-bom.md` - actual prototype parts and recommended release corrections
- `power-up-and-acceptance.md` - concise setup, safety, and acceptance sequence
