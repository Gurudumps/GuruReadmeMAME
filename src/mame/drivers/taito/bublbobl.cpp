/***************************************************************************

Tokio, 1986, Taito (Romstar license)
Hardware info by Guru
Last updated: No changes
------------------------

PCB Layout                                                                   G Pinout
----------                                                                   --------
                                                                   Component Side  Solder Side
Top Board                                                         ----------------|----------------
                                                                       Ground   1 | A  Ground
J1100069A CPU BOARD                                                 Video Red   2 | B  Video Ground
K1100157A                                                         Video Green   3 | C  Video Blue
M4300053A (sticker)                                                Video Sync   4 | D
  |------------------------------------------------------|          Speaker +   5 | E  Speaker -
  |   VOL      TL074          YM2203              Z80A   |                Key   6 | F  Key
|-|                                                      |                      7 | H
|     MB3731  PC010SA                      A71_07.IC10   |            Coin Sw   8 | J
|H                                                       |         Coin Meter   9 | K
|     TL7700                                      2016   |                     10 | L
|-|                                                      |            Service  11 | M  Slam Switch
  |   MC68705P5                           A71_06-1.IC8  |-|          1P Start  12 | N  2P Start
|-| (A71_24.IC57)                                       | |                    13 | P
|                                           A71_05.IC7  | |                    14 | R
|                                                       | |          1P Right  15 | S  2P Right
|                                           A71_04.IC6  | |          1P Left   16 | T  2P Left
|   PC030CM                   PAL                       | |                    17 | U
|                                         A71_28-1.IC5  | |                    18 | V
|G                                                      | |                    19 | W
|                                         A71_27-1.IC4  | |                    20 | X
|                                                       | |           1P Fire  21 | Y  2P Fire
|                                                       | |                    22 | Z
|                                                 Z80B  | |
|-|                                                     |-|
  |                                                      |                   H Pinout
  |                    2016                       Z80B   |                   --------
  |                                                      |                   1   Ground
  |                    2016                              |                   2   Ground
  |                                         A71_01.IC1   |                   3   Ground
  |   DSWB(8) DSWA(8)  2016                              |                   4   Ground
  |------------------------------------------------------|                   5   +5VDC
Notes:                                                                       6   +5VDC
        H - 12-pin Connector for Power Input                                 7   +5VDC
        G - 22-Way Edge Connector                                            8   -5VDC
      PAL - MMI PAL16L8B stamped 'A71-26' (DIP20)                            9   +12VDC
  PC030CM - Taito Custom Ceramic IC, possibly contains a smt logic IC,       10  Key
            smt resistors and smt capacitors (SIP20)                         11  +12VDC
  PC010SA - Taito Custom Ceramic IC, possibly contains                       12  +12VDC
            smt resistors and smt capacitors, sound DAC (SIP14)
   MB3731 - Fujitsu MB3731 18W Power Amplifier (SIP12)
   TL7700 - Texas Instruments TL7700 Supply-Voltage Supervisor/Power-On Reset IC (DIP8)
MC68705P5 - Motorola MC68705P5 Microcontroller with 2K Internal EPROM,
            clock input 3.000MHz [24/8] (DIP28)
     2016 - Toshiba TMM2016BP-10 2K x8 SRAM (DIP24)
     Z80A - Zilog Z8400APS Z80A CPU, clock input 3.000MHz [24/8] (DIP40)
     Z80B - Zilog Z8400BPS Z80B CPU, clock input 6.000MHz [24/4] (DIP40)
   YM2203 - Yamaha YM2203 Sound Chip, clock input 3.000MHz [24/8] (DIP40)
    VSync - 60Hz

     ROMs - (All EPROMs are 27C256)
            A71_07.IC10    Sound CPU Program

            A71_06-1.IC8 \
            A71_05.IC7   |
            A71_04.IC6   | Main CPU Program
            A71_28-1.IC5 |
            A71_27-1.IC4 /

            A71_01.IC1     Sub CPU Program

            A71_24.IC57    68705 Microcontroller Program



Bottom Board

J1100070A VIDEO BOARD
K1100158A
K1100172A (sticker)
  |------------------------------------------------------|                   T Pinout
  |                                     24MHz            |                   --------
  |                                                      |         Component Side  Solder Side
  |                                     2018             |        ----------------|-----------
  |                                     2018             |             Ground   1 | A  Ground
  |                     A71_25.IC41                      |             Ground   2 | B  Ground
  |                                     2018             |             Ground   3 | C  Ground
  |                                     2018            |-|            Ground   4 | D  Ground
  |                                                     | |                     5 | E
|-|                                                     | |                     6 | F
|                                                       | |                     7 | H
|    A71_08.IC12  A71_16.IC30                           | |                     8 | J
|                                                       | |                     9 | K
|T   A71_09.IC13  A71_17.IC31                           | |                    10 | L
|                                                       | |                    11 | M
|    A71_10.IC14  A71_18.IC32                           | |                    12 | N
|                                                       | |                    13 | P
|    A71_11.IC15  A71_19.IC33                           | |                    14 | R
|-|                                     2018            | |               +5V  15 | S  +5V
  |  A71_12.IC16  A71_20.IC34           2018            |-|               +5V  16 | T  +5V
  |                                                      |                +5V  17 | U  +5V
  |  A71_13.IC17  A71_21.IC35           2018             |                +5V  18 | V  +5V
  |                                     2018             |
  |  A71_14.IC18  A71_22.IC36           PC040DA          |
  |                                     PC040DA          |
  |  A71_15.IC19  A71_23.IC37           PC040DA          |
  |------------------------------------------------------|
Notes:
        T - 36-Way Edge Connector
  PC040DA - Taito Custom Ceramic IC, Video DAC (SIP19)
     2018 - Toshiba TMM2018D-45 2K x8 SRAM (DIP24)

     ROMs -
            A71_25.IC41 - MMI 63S141 Bipolar PROM (DIP16)
            All EPROMs are 27C256

***************************************************************************/

