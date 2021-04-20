/**********************************************************************

Tatakae! Big Fighter (c)1989 Nichibutsu
Hardware info by Guru
Last updated: No changes
------------------------

This is a horizontal shoot'em-up similar to R-Type.
It appears this PCB is re-used from an older Nichibutsu game.
A sticker on the main board says the PCB number is 1706 and (C) 1989
On the PCB under the sticker is written 1605 and (C) 1988
There is an extra sub-board with PCB number '1706-3' that plugs
into the 68000 socket and the 68000 CPU, program ROMs and an i8751
MCU are located on the sub-board. There are 4 unused sockets
on the main board where the program ROMs would be located for a
different game when the sub-board is not be present.
No good reference pics are available for Armed Formation but the
original game on this hardware is probably Armed Formation as
the top PCB looks identical. The bottom PCB is identified as
matching Terra Force and possibly also used with Armed Formation.


PCB Layout
----------

1605A-1 (1706-1)
|-----------------------------------------------------------------|
| J       H        F        E        D        C        B         A|
|                         2018                                  17|
|                         2018                                  16|
|                                                                 |
|               6.15F                                           15|
|                                                                 |
|                                           5814                14|
|     PROM.13H  5.13F                       5814                13|
|VOLUME                                                           |
|                        5814                                   12|
|                        5814               7.11C               11|
|                   |--------------------|                        |
|                   |1706-3              |                      10|
|                   |                    |                       9|
|                   | PAL       8751.IC13|                       8|
|                   |                PAL |                        |
|                   |     6264      6264 |                       7|
|                   |                    |                        |
|                   |     6264      6264 |            PAL.6B     6|
|                   |    DIP32.5E   DIP32.5D                     5|
|                   |   2.IC4     4.IC5  |                        |
|                   |   1.IC2     3.IC3  |                       4|
|                   |                    |                        |
|                   |    DIP32.3E   DIP32.3D          PAL.3B     3|
| DSW2              |                    |                       2|
|                   |        68000       16MHz                    |
| DSW1              |--------------------|            PAL.1B     1|
|-----------------------------------------------------------------|
Notes:
      68000     - Clock 8.000MHz [16/2], located at IC1 on the sub-board
      8751      - Clock 8.000MHz [16/2], located at IC13 on the sub-board
      HSync     - 15.0735kHz
      VSync     - 59.1358Hz
      2018/5814 - 2kx8 SRAM
      6264      - 8kx8 SRAM (all located on main board underneath the sub-board)
      DIP32     - Empty DIP32 sockets (all located on main board underneath the sub-board)
      PROM      - 82S129 Bipolar PROM


1605B (1706-2)
|-----------------------------------------------------------------|
|K     J      H       F       E        D       C       B        A |
| 8.17K         Z80A                  2018                      17|
|                                     2018                      16|
| YM3812        2018                  2018                      15|
| YM3014B                                                         |
|                                                               14|
|                                                                 |
| LM324                                                         13|
|                                                               12|
|                                                                 |
| LM324                                                         11|
|                                            2018               10|
|                                                                 |
| MB3730                        10.9ED       2018                9|
|                               9.8ED                      12.8A 8|
|                           PAL                                  7|
|  2018    2018                                            11.6A 6|
|  2018    2018                                                  5|
|                                                                 |
|                                                                4|
|                                                                 |
|                                                                3|
|                                                                 |
|                     24MHz                                      2|
|                                                                1|
|-----------------------------------------------------------------|
Notes:
      Z80A    - Clock 4.000MHz [24/6]
      YM3812  - Yamaha YM3812 FM Operator TYPE L2 (OPL2) sound chip. Clock 4.000MHz [24/6]
      YM3014B - Yamaha YM3014B Serial Input Floating D/A Converter
      2018    - 2kx8 SRAM
      LM324   - Texas Instruments LM324 Quad Operational Amplifier with True Differential Inputs
      MB3730  - Fujitsi MB3730 12W BTL Single Channel Amplifier


***********************************************************************/
