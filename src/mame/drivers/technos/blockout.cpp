/***************************************************************************

Agress, Palco System Corp., 1991
Hardware info by Guru
Last updated: 21st April 2021
-----------------------------

This game runs on an original unmodified Technos 'Block Out' PCB.
All of the Technos identifications are hidden under 'Palco' or 'Agress' stickers.

PCB Layout (Applies to both Agress and Block Out)
----------

PS-05307 (sticker)
TA-0029-P1-02 (printed on Block Out PCB under the sticker)
There is a large 'BLOCK OUT' logo silk-screened onto the PCB.
|--------------------------------------------------------|
| M51516            YM2151                    3.579545MHz|
|           YM3012     6116                              |
|   MB3615  1.056MHz   PALCO3.73            20MHz        |
|           M6295                                        |
|   MB3615                            82S129PR.25  28MHz |
|           PALCO4.78                                    |
|                      Z80            |-------|          |
|                                     |TECHNOS|          |
|J         2018     6264              |TJ-001 |          |
|A                                    |(QFP80)|          |
|M         2018                       |-------|          |
|M                                                       |
|A                  6264                                 |
|                               MB81461-12               |
|                               MB81461-12               |
|                               MB81461-12               |
|                               MB81461-12               |
|                               MB81461-12               |
|  DSW1(8)                      MB81461-12               |
|                               MB81461-12               |
|  DSW2(8)                      MB81461-12               |
|         PALCO2.91                                      |
|                 PALCO1.81               68000          |
|--------------------------------------------------------|

Notes:
   68000 clock : 10.000MHz
   Z80 clock   : 3.579545MHz
   M6295 clock : 1.056MHz, sample rate = 1056000 / 132
   YM2151 clock: 3.579545MHz
   VSync       : 58Hz

   PROM is used for video timing etc, without it, no graphics are displayed,
   only 'Insert Coin' and the manufacturer text/year on the title screen.

   palco1.81 \ Main program   27C010
   palco2.91 /                  "
   palco3.73   OKI samples    27C256
   palco4.78   Z80 program    27C010

************************************************************************/
