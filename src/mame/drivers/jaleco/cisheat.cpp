/******************************************************************************

F1 GrandPrix Star II, Jaleco 1991
Hardware info by Guru
Last updated: No changes
------------------------

This game uses the same bottom and middle boards as Grand Prix Star, however the top board
(sound + I/O) is different (though I guess it has the same purpose.)
The game is mostly a simple ROM swap on a F1 Grand Prix Star board.
The swapped ROMs have been factory socketed. Some ROMs are soldered-in and match some in the
F1 Grand Prix Star archive (i.e. they are not swapped).

Top Board
---------
PCB No: WP-92116 EB92020-20053
CPUs  : MC68000P10, TMP68000P-12
SOUND : OKI M6295 (x2), YM2151, YM3012
XTALs : 4.000MHz, 7.000MHz, 24.000MHz
DIPs  : 8 position (x3)
RAM   : MCM2018AN45 (x4, 2kx8 SRAM), LH5168D-10L (x2, 8kx8 SRAM), HM62256ALSP-10 (x2, 32kx8 SRAM)
CUSTOM: GS90015-12 (QFP80)
        GS90015-03 (QFP80)
ROMs  :
        (extension = IC location on PCB)
        92116-1.4     27c040   \
        92116-2.18    27c040   |
        92116-3.37    27c010   |  Near MC68000P10 and YM2151
        92116-4.38    27c010   /

        92116-5.116   27c2001  \
        92116-6.117   27c2001  /  Near TMP68000P-12

Notes : Labels on all these ROMs say Ver 1.0



Middle Board
------------
PCB No: GP-9189 EB90015-90038
RAM   : HM62256ALSP-12 (x8, 32kx8 SRAM), MCM2018AN45 (x2, 2kx8 SRAM)
CUSTOM: GS90015-11 (QFP100)
        GS90015-08 (QFP64)
        GS90015-07 (QFP64)
        GS90015-10 (QFP64)
        GS90015-09 (QFP64)
        GS90015-03 (x2, QFP80)
        GS90015-06 (x2, QFP100)
ROMs  :
        (extension = IC location on PCB)
        92021-11.1    4M MASK   \
        92021-12.2       "      |
        92021-13.11      "      |  Socketed + Swapped
        92021-14.12      "      |
        92021-15.21      "      |
        92021-16.22      "      /

        90015-35.54   4M MASK   \  Matches 90015-20.R45 from f1gpstar archive! Mis-labelled filename?)
        90015-35.67      "      /  Soldered-in, not swapped. Both are identical, near GS90015-08

PROMs :
        (extension = IC location on PCB)
        CH9072_4.39 \
        CH9072_5.33 |  unusual type ICT 27CX322 with a clear window (re-programmable!), purpose = ?
        CH9072_6.35 |
        CH9072_8.59 /

        PR88004W.66    type 82s135, near 90015-35


Bottom Board
------------
PCB No: GP-9188A  EB90015-20037-1
CPU   : TMP68000P-12 (x3)
XTAL  : 24.000MHz
RAM   : HM62256ALSP-10 (x2, 32kx8 SRAM), LH5168D-10L (x10, 8kx8 SRAM)
        MCM2018AN45 (x8, 2kx8 SRAM), PDM41256SA20P (x2, 32kx8 SRAM)
CUSTOM: GS90015-03 (QFP80)
        GS9000406  (x3, QFP80)
        GS90015-02 (x3, QFP100)
        GS90015-01 (QFP44)
        GS90015-05 (x2, QFP100)
        GS90015-04 (x2, QFP64)

ROMs  :
        (extension = IC location on PCB)
        92021-01.14   4M MASK   \                                       \
        92021-02.15      "      |                                       |
        92021-03.16      "      |  Socketed + Swapped                   |
        92021-04.17      "      /                                       |
        90015-01.37   4M MASK   \                                       |
        90015-02.38      "      |   Soldered-in, not swapped, matches   |
        90015-03.39      "      |   same ROMs in F1 Grand Prix archive  |
        90015-04.40      "      /                                       | All these are
        92021-05.61   4M MASK   \                                       | grouped together
        92021-06.62      "      |                                       |
        92021-07.63      "      |  Socketed + Swapped                   |
        92021-08.64      "      /                                       |
        90015-01.79   4M MASK   \                                       |
        90015-02.80      "      |  Soldered-in, not swapped, matches    |
        90015-03.81      "      |  same ROMs in F1 Grand Prix archive   |
        90015-04.82      "      /                                       /

        9188A-25.123  27c040    Label says Ver 1.0   \
        9188A-28.152     "      Label says Ver 4.0   |  Near GS90015-02
        9188A-30.174  27c1001   Label says Ver 1.0   /

        9188A-21.91   27c2001   Label says Ver 4.0   \
        9188A-22.92      "      Label says Ver 4.0   |  Near a 68000
        9188A-26.124     "      Label says Ver 4.0   |
        9188A-27.125     "      Label says Ver 4.0   /

        9188A-11.46   27c1001   Label says Ver 1.0   \  Near a 68000
        9188A-16.70      "      Label says Ver 1.0   /

        9188A-1.2     27c1001   Label says Ver 1.0   \  Near a 68000
        9188A-6.27       "      Label says Ver 1.0   /

PROMs :
        (extension = IC location on PCB)
        PR90015A.117   type 82s185, near GS9000406
        PR90015B.153   type 82s135, near 9188A-26.124
        PR88004Q.105   type 82s147, near GS90015-01

***************************************************************************

Arm Champs II, Jaleco, 1992
Hardware info by Guru
Last updated: 21st April 2021
-----------------------------

An arm wrestling game from Jaleco. Game is part mechanical, part video. The video part
is shown on a vertical screen, being your opponent you are wrestling. The mechanical
part is an arm you force against to pin your opponent's 'arm'. The mechanical arm is powered
by a motor. The arm has a 5k potentiometer connected to it to give feedback to the
hardware about the position of the mechanical arm.
The opponents get progressively harder and harder, it's almost impossible to beat the final
few opponents unless you have a few friends handy to swing on the arm ;-))
Arm Champs II appears to be a simple ROM upgrade on Arm Champs hardware.
The hardware appears to be similar to Jaleco's 'Grand Prix Star' etc, using many of
the same custom IC's, and even some of the same ROMs.

The Arm Champs II start-up arm movement info
--------------------------------------------
At power-on, the arm moves left, then right then to center and stops.
The center position is 0000.
Note when the arm is at 0000 (center) the center limit switch is not
on. It comes on when the arm is moved just off center (+-0002 or greater
away from center) and stays on as long as the arm is not on
0001-0000-FFFF (both left and right side). When the arm hits the
left/right limit, both center and that left or right limit switch is on.

Full movement to left limit switch is 0000-0040 (0x41h) and full right
limit switch movement is 0000-FFC2 (0x3eh). Obviously the pot and arm
are not 100% accurate and there's a small amount of slop between the
arm shaft / motor mechanism and the pot.
The limit switches are triggered just before the full movement.
For the purpose of MAME emulation it can be rounded off so both sides
move +- 0x40h.
A video is available on request that shows the screen and arm movement
at power-on.


PCB Layouts
-----------

(top board)
EB91042-20048-3
AC-91106B
|---------------------------------------------------------------------------|
| uPC1318                                         GS9001501   TL7705        |
|          |-------------|                                                  |
|POWER     |   68000-12  |                                  PR88004Q_8.IC102|
|          |-------------|                                                  |
|                         24MHz                        AC91106_VER1.2_7.IC99|
|                                                                           |
|                                                 GS9000406    GS90015-02   |
|                                                                          |-|
|                                                   6264          6264     | |
|                                     AC91106_VER1.7_4.IC63                | |
|C                                                                         | |
|U                                    AC91106_VER1.7_3.IC62                | |
|S                                                                         | |
|T                                                    MR91042-07-R66_6.IC95| |
|O                                       62256                             |-|
|M                                                                          |
|7                                       62256    GS9000406    GS90015-02   |
|2                     ADC0804                                              |
|P                                                               6264       |
|I                                                                         |-|
|N                                                GS90015-03     6264      | |
|                                                                          | |
|                                 M6295                     PR91042_5.IC91 | |
|                                      MR91042-08_2.IC57                   | |
|                                                                          | |
|                                 M6295                                    | |
|                PMI_PM7528            AC91106_VER1.2_1.IC56               | |
|                                                     62256                | |
|                                                     62256                | |
| POWER     DSW1   DSW2            4MHz                                    |-|
|---------------------------------------------------------------------------|
Notes:
      68000 clock       - 12.0MHz [24/2]
      Jaleco Custom ICs -
                         GS9001501 (QFP44)
                         GS9000406 (QFP80, x2)
                         GS90015-02 (QFP100, x2)
                         GS90015-03 (QFP80)

      ROMs -
            PR88004Q_8.IC102      - 82S147 PROM
            AC91106_VER1.2_7.IC99 - 27C010 EPROM
            MR91042007-R66_6.IC95 - 4M mask ROM
            AC91106_VER1.7_4.IC63 - 27C010 EPROM
            AC91106_VER1.7_3.IC62 - 27C010 EPROM
            MR91042-08_2.IC57     - 4M mask ROM
            AC91106_VER1.2_1.IC56 - 27C4001 EPROM
            PR91042_5.IC91        - 82S129 PROM


(lower board)
GP-9189
EB91015-20038
|---------------------------------------------------------------------------|
|MR91042-01-R60_1.IC1                                                       |
|        MR91042-02-R61_2.IC2    62256                             62256    |
|                                       GS90015-06    GS90015-06            |
|MR91042-03-R62_3.IC5                                                       |
|        MR91042-04-R63_4.IC6    62256                             62256    |
|                                                                           |
|MR91042-05-R64_5.IC11                                                      |
|        MR91042-06-R65_6.IC12   62256                             62256   |-|
|                                       GS90015-03    GS90015-03           | |
|                                                                          | |
|                                62256                             62256   | |
|                                                                          | |
|                                                                          | |
|                        GS90015-08                                        | |
|                                               GS90015-07   GS90015-10    |-|
|                                                                           |
|                                                                           |
| CH9072-5_11.IC33                                                          |
|              GS90015-11              CH9072-6_12.IC35                     |
|                                      CH9072-4_13.IC39                    |-|
|                                                                          | |
|                                                                          | |
|                          MR90015-35-W33_14.IC54                          | |
|                                                                          | |
|      CH9072-8_15.IC59    MR90015-35-W33_17.IC67                          | |
|                                                    GS90015-09            | |
|              PR88004W_16.IC66                                            | |
|                                                                          | |
|                                                      6116                | |
| POWER                                                6116                |-|
|---------------------------------------------------------------------------|
Notes:
      Jaleco Custom ICs -
                         GS90015-03 (QFP80, x2)
                         GS90015-06 (QFP100, x2)
                         GS90015-07 (QFP64)
                         GS90015-08 (QFP64)
                         GS90015-09 (QFP64)
                         GS90015-10 (QFP64)
                         GS90015-11 (QFP100)

      ROMs -
            PR88004W_16.IC66      - 82S135 PROM
            CH9072-4_13.IC39      - Atmel AT27HC642R
            CH9072-5_11.IC33      - Atmel AT27HC642R
            CH9072-6_12.IC35      - Atmel AT27HC642R
            CH9072-8_15.IC59      - Atmel AT27HC642R
            MR90015-35-W33_14.IC54- 4M mask ROM  \
            MR90015-35-W33_17.IC67- 4M mask ROM  / Contain same data
            MR91042-01-R60_1.IC1  - 4M mask ROM
            MR91042-02-R61_2.IC2  - 4M mask ROM
            MR91042-03-R62_3.IC5  - 4M mask ROM
            MR91042-04-R63_4.IC6  - 4M mask ROM
            MR91042-05-R64_5.IC11 - 4M mask ROM
            MR91042-06-R65_6.IC12 - 4M mask ROM

***************************************************************************/
