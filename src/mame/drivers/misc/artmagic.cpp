/***************************************************************************

Stone Ball, Art & Magic, 1994
Hardware info by Guru
Last updated: No changes
------------------------

PCB No: AM007B1094 0454
CPUs  : TMS34010FNL-40, MC68000P12
SND   : OKI M6295
OSC   : 40.000MHz, 32.000MHz, 25.000MHz
DIP SW: 8 position (x2)

RAM   : MCM54260 (x2, 40 pin SOJ)
        TMS44251 (x4, 28 pin ZIP)

OTHER :
        CSI CAT28C16 EEPROM (24 pin DIP)
        ADV476KN80E (28 pin DIP)
        8 PALs
        1 PIC 16C54
        Black Box - inside is....
                                 XILINX XC3030 (x2, 84 Pin PLCC)
                                 3V Battery (Suicidal?)
                                 74HC14 Logic Chip
                                 10 Pin header (probably for re-programming the XC3030's
                                               after it suicides....)


ROMs  :
                             Byte
Filename      Type           C'sum
---------------------------------------------------
u1801.bin     27C4001        344Eh     OKI Samples

u101.bin      27C2001        617Ah  \  Main Program
u102.bin      27C2001        8F04h  /

u1600.bin     32M Mask       1105h  \
u1601.bin     32M Mask       8642h  /  Gfx

***************************************************************************/
