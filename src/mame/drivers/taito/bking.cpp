/***************************************************************************

Birdie King 3, Taito, 1984
Hardware info by Guru
Last update: 20th April 2021
----------------------------

A golf game using a trackball. Uses same harness/pinout as
Elevator Action, Victorious Nine, Jolly Jogger (etc)

PCB Layouts
(Note! There are no PALs on ANY of the PCBs)

Top PCB
-------
DMO70003A
K1000173B (sticker)
 |------------------------|
 |                        |
|-|                       |
| |  Z80        2114      |
| |             2114      |
| |N                      |
| |  A24_18.4F            |
| |      A24_19.4D        |
|-|           A24_20.4B   |
 |                        |
 |  AY3-8910              |
 |                        |
 |      AY3-8910          |
 |                        |
 |                        |
 |                   6MHz |
 |                        |
 |                        |
 |                        |
 | LM3900  LM3900  LM3900 |
 |------------------------|
Notes:
      Z80      - Clock 3.000MHz [6/2]
      AY3-8910 - Clock 1.500MHz [6/4]
      2114     - 1kx4 SRAM (DIP18)
      N        - Flat cable connector, joins to main board
      LM3900   - National LM3900 Quad, dual-input amplifier IC (DIP14)
      plus many resistors/capacitors below the AY3-8910's


Sub PCB (below Top PCB)
-----------------------
SUB PCB J910 0010 A
        K910 0018 A
|------------------------|
|           *            |
|                        |
|                        |
|                        |
|                        |
|                        |
|                        |
|                        |
|                        |
|                        |
|                        |
|                        |
|                        |
|A24_21.IC25             |
|                        |
|                   S2   |
|                        |
|         3MHz         S1|
|T    A24_22.IC17        |
|------------------------|
Notes:
      A24_22.IC17 - Motorola 68705P5 Microcontroller, clock 3.000MHz
      A24_21.IC25 - 2732 EPROM
      *           - DIP24 socket with flat cable below PCB, joins to main board
      T           - 4-pin power connector (5 volts) coming from main board
      S1          - Flat cable connector, joins to main PCB to connector S
      S2          - Flat cable connector, joins to bottom PCB to connector S



Main PCB
--------
J1100001A
K1100001A
M4300001D (sticker)
K1100032A (sticker)
|--------------------------------------------------------------|
|      M3712    VOL             A24_03.2D             M53354   |
|H                                        DM-04.2C            |-|
|                     N                                  *    | |
|           MC14584                                          R| |
|                                                             | |
|                                                             | |
|                                                             | |
|                                                             |-|
|                                                              |
|G          LM3900                                             |
|    MC14093                                                   |
|                   A24_01.7E                                 |-|
|                                                             | |
|                   A24_01.9E                                 | |
|    MC14584                                                 S| |
|                   A24_02.10E                                | |
|    MC14584                    MC1455                        | |
|                                                             |-|
|    DSWC   DSWB   DSWA                                        |
|--------------------------------------------------------------|
Notes:
      M53354    - Mitsubishi M53354, maybe compatible with 74LS154? (DIP24)
      MC1455    - Motorola MC1455 Monolithic Timing Circuit (NE555 compatible)
      A24_01/02 - 2716 EPROMs
      A24_03    - Signetics 82S141 PROM (DIP24)
      DM-04     - Signetics 82S123 PROM (DIP8)
      *         - DIP24 socket with flat cable, joins to SUB PCB DIP24 socket
      R/S       - Flat cable connector, R joins to main board, S joins to SUB PCB
      G         - 22-way Edge Connector
      N         - Flat cable connector, joins to TOP PCB
      H         - 12-pin power connector
      VSync     - 60Hz
      HSync     - 15.67kHz


Bottom PCB
----------
DMO70002A
DMN00002A
K1000172B (sticker)
|--------------------------------------------------------------|
|   A24_17.13A         2114    Z80             A24_04.13F      |
|                                                             |-|
|   A24_16.11A         2114                    A24_05.11F     | |
|                                                            S| |
|   A24_15.10A                                 A24_06.10F     | |
|                                                             | |
|   A24_14.8A                                  A24_07.8F      | |
|                                                             |-|
|T  A24_13.7A                                  A24_08.7F       |
|                                                              |
|   A24_12.5A                                  A24_09.5F       |
|                                                             |-|
|                                              A24_10.4F      | |
|            2114                                             | |
|                                              A24_11.2F     R| |
|            2114                                             | |
|                                                             | |
|            2114                                             |-|
|                                                    12MHz     |
|--------------------------------------------------------------|
Notes:
      R/S   - Flat cable connector, R joins to main board, S joins to SUB PCB
      T     - 18-Way Edge Connector (for +5V/GND only)
      A24_* - 2732 EPROMs
      Z80   - Clock 3.000MHz [12/4]
      2114  - 1kx4 SRAM (DIP18)
***************************************************************************/
