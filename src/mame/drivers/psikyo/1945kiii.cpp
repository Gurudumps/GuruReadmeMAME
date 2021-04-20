/********************************************************************

1945K-III, Oriental, 2000
Hardware info by Guru
Last updated: No changes
------------------------

This game is a straight rip-off of Psikyo's Strikers 1945 III.

OPCX2 PCB Layout
----------

ORIENTAL SOFT INC., -OPCX2-
|--------------------------------------------|
|    AD-65   SND-1.SU7            M16M-1.U62 |
|                     PAL                    |
|    AD-65   SND-2.SU4                       |
|                                 M16M-2.U63 |
|                                            |
|                    KM681000                |
|J                   KM681000     6116       |
|A                                           |
|M          62256    |-------|    6116       |
|M          62256    |SPR800E|               |
|A                   |OP-CX1 |    6116  6116 |
|    6116   PRG-1.U51|QFP208 |               |
|                    |-------|    6116  6116 |
|    6116   PRG-2.U52                        |
|                 |-----| |------|           |
|           PAL   |     | |QL2003| M16M-3.U61|
|           PAL   |68000| |PLCC84|           |
|DSW1 DSW2        |-----| |------| PAL       |
|             16MHz        27MHz             |
|--------------------------------------------|
Notes:
     68000 clock : 16.000MHz
    M6295 clocks : 1.000MHz (both), sample rate = 1000000 / 132
           VSync : 60Hz



Promat / ORIENTAL SOFT INC., -OPCX1-
|--------------------------------------------|
|    AD-65   SU5                     U5  U58 |
|VR1         SU10*    PAL            U6  U59 |
|    AD-65   SU11*                   U7  U60 |
|            SU4                     U8  U61 |
|                                            |
|J                                      6116 |
|A                                      6116 |
|M 4.000MHz  PAL  KM681000 |-------|    6116 |
|M                         |SPR800E|    6116 |
|A           PAL  KM681000 |OP-CX1 |    6116 |
|                          |QFP208 |    6116 |
|      6116 62256  U34     |-------|         |
|      6116 62256  U35    |------|           |
|                         |QL2003|      U102 |
|             MC68000P16  |PLCC84| PAL  U103 |
|DSW1 DSW2                |------|      U104 |
|RESET1       16.000MHz    27.000MHz    U105 |
|--------------------------------------------|

  CPU: MC86000P16
Sound: OKIM6295 x 2
  OSC: 27.000MHz, 16.000MHz & 4.000MHz
Other: QuickLogic QL2003-XPL84C, SPR800E
       RESET1 Reset button, VR1 volume pot
  DSW: 8 poistion x 2

* denotes unpopulated socket

********************************************************************/
