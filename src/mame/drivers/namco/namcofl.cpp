// *************************************************************************************************

Namco System FL (Namco 1994)
Hardware Info by Guru
Last Updated: 21st July 2021

The Namco FL System runs Speed Racer and Final Lap R.

Analog controls (wheel/pedals) connect to the Namco 48-way connector.
Default EEPROMs are provided with calibrated controls.
However if you want to re-calibrate the controls do the following....

1) Delete the .nv file (it's located in the nvram directory where your MAME.EXE is located)
2) Start the game.
   Speed Racer will guide you through the calibration (the "jump button" is mapped to Space).
   For Final Lap R, hold down service (9) and tap test (F2).  If you do not get an
   "initializing" message followed by the input test, keep doing it until you do.
3) Exit MAME and restart the game, it's now calibrated.


PCB Layout
----------

SYSTEM-FL MAIN PCB 8636960100 (8636970100)
   |--------------------------------------------------------------------------------------------|
   |                                                                       |-----------------|  |
   |                                                                       |       4Z IC3 IC1| Z|
   |                21Y 20Y 19Y 18Y     16Y     14Y 13Y 12Y                |       4Y        | Y|
   |                    20X                                                |       4X        | X|
|--|                                                                       |          IC4 IC2| W|
|               22U 21U         18U     16U     14U 13U 12U                |    Sub Board    | U|
|               22T             18T                                        |-----------------| T|
|                                                                                               |
|J          23S                                         12S                        4S    2S    S|
|                                                                                               |
|A          23R                                     13R                                        R|
|                                                                                               |
|M                  21P 20P 19P 18P                             10P    8P 7P    5P             P|
|                       20N                                                               OSC1 N|
|M                                                                                    OSC2      |
|           23L     21L                             OSC3                              3L       L|
|A                                              14K         11K                                K|
|                                                                                               |
|                           19J 18J 17J 16J                                                    J|
|--|        23F     21F                                                                        F|
   |                                                                                            |
|--|        23E                                     13E                                        E|
|N          23D             19D                     13D                               3D       D|
|A                                                                                              |
|M          23C                                                                                C|
|C  25B             21B                                                                        B|
|O                                                                                              |
|4              22A 21A     19A 18A     16A 15A 14A 13A 12A 11A 10A 9A 8A 7A 6A 5A    3A       A|
|8                                                                                              |
|--|                                                                                            |
   |25  24  23  22  21  20  19  18  17  16  15  14  13  12  11  10  9  8  7  6  5  4  3  2  1   |
   |--------------------------------------------------------------------------------------------|
Note ALL major parts except logic shown.

RAM
---
4Y : CY7C199-25PC
4Z : CY7C199-25PC
5A : TC514256BZ-60
5P : LH528256N-70LL
6A : TC514256BZ-60
7A : TC514256BZ-60
7P : LH528256N-70LL
8A : TC514256BZ-60
8P : LH528256N-70LL
9A : TC514256BZ-60
10A: TC514256BZ-60
10P: LH528256N-70LL
11A: TC514256BZ-60
12A: TC514256BZ-60
12U: TC511632FL-70
12Y: TC511632FL-70
13U: TC511632FL-70
13Y: TC511632FL-70
14U: TC511632FL-70
14Y: TC511632FL-70
16U: TC511632FL-70
16Y: TC511632FL-70
19Y: M5M5178AFP-25
20Y: M5M5178AFP-25
21A: 65256BLFP-10T
21Y: M5M5178AFP-25
22A: 65256BLFP-10T
22T: LH528256N-70LL
22U: LH528256N-70LL
23E: M5M5256BFP-70LL
23F: M5M5256BFP-70LL

CUSTOM
------
4X : NAMCO C355 (sprite chip)
13R: NAMCO C169 (ROZ chip)
18Y: NAMCO 156
20X: NAMCO C116
21U: NAMCO 145
18T: NAMCO 123
23R: NAMCO C352
3D : NAMCO C380
4S : NAMCO 187
23L: NAMCO 75 (M37702 MCU)
11K: NAMCO 137
21B: NAMCO C345  9348EV  333791  VY06436A  NX25024K JAPAN
21F: NAMCO 195


ROMs on Main Board
-----------------
23S: mask ROM - SE1_VOI.23S (PCB LABEL 'VOICE'), mounted on a small plug-in PCB
     labelled MEMEXT 32M MROM PCB 8635909200 (8635909300). This chip is programmed in BYTE mode.
18U: MB834000 mask ROM - SE1_SSH.18U (PCB LABEL 'SSHAPE')
21P: MB838000 mask ROM - SE1_SCH0.21P (PCB LABEL 'SCHA0')
20P: MB838000 mask ROM - SE1_SCH1.20P (PCB LABEL 'SCHA1')
19P: MB838000 mask ROM - SE1_SCH2.19P (PCB LABEL 'SCHA2')
18P: MB838000 mask ROM - SE1_SCH3.18P (PCB LABEL 'SCHA3')
21L: M27C4002 EPROM - SE1_SPR.21L (PCB LABEL 'SPROG')
14K: MB834000 mask ROM - SE1_RSH.14K (PCB LABEL 'RSHAPE')
19J: MB838000 mask ROM - SE1_RCH0.19J (PCB LABEL 'RCHA0')
18J: MB838000 mask ROM - SE1_RCH1.18J (PCB LABEL 'RCHA1')
17J, 16J: RCH2, RCH3 but sockets not populated
19A: D27C4096 EPROM - SE2MPEA4.19A (PCB LABEL 'PROGE')
18A: D27C4096 EPROM - SE2MPOA4.18A (PCB LABEL 'PROGO')
16A: AM27C040 EPROM - SE1_DAT3.16A (PCB LABEL 'DATA3')
15A: AM27C040 EPROM - SE1_DAT2.15A (PCB LABEL 'DATA2')
14A: AM27C040 EPROM - SE1_DAT1.14A (PCB LABEL 'DATA1')
13A: AM27C040 EPROM - SE1_DAT0.13A (PCB LABEL 'DATA0')


ROMs on MEMEXT OBJ8 PCB 8635902201 (8635902301). Note this sub board contains only 4 mask ROMs and one logic chip. It is exactly the same sub board used on Point Blank.
-----------------------------------------------
IC1: MB8316200 SOP44 mask ROM - SE1OBJ0L.IC1 (PCB LABEL 'OBJ0L')
IC2: MB8316200 SOP44 mask ROM - SE1OBJ0U.IC2 (PCB LABEL 'OBJ0U')
IC3: MB8316200 SOP44 mask ROM - SE1OBJ1L.IC3 (PCB LABEL 'OBJ1L')
IC4: MB8316200 SOP44 mask ROM - SE1OBJ1U.IC4 (PCB LABEL 'OBJ1U')


PALs
----
2S : PAL16L8BCN (PCB LABEL 'SYSFL-1')
3L : PAL16L8BCN (PCB LABEL 'SYSFL-2')
12S: PALCE16V8H (PCB LABEL 'SYSFL-3')
20N: PAL20L8BCN (PCB LABEL 'SYSFL-4')
19D: PALCE16V8H (PCB LABEL 'SYSFL-5')


OTHER
-----
OSC1: 80.000MHz
OSC2: 27.800MHz
OSC3: 48.384MHz
13D : KEYCUS2 (not populated)
3A  : Intel NG80960KA-20 (i960 CPU)
25B : Sharp PC9D10
23C : IR2C24AN
23D : IR2C24AN
13E : HN58C65 EEPROM


*************************************************************************************************//
