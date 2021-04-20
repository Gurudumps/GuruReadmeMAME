/**************************************************************************

Konami System GX
Hardware info by Guru
Last updated: No changes
------------------------

Winning Spike (Version JAA)
Konami, 1997

System GX with Type 2 ROM board.

PCB No: PWB454204C

Not much on this PCB, 6 logic IC's, 1 unknown PLCC84 (stamped 0000032652)
and the ROMs, that's all. Main GX motherboard is standard (PWB300456A)

ROMs  :
        Filename       Type
        ----------------------------
        705JAA03.27B   27C4096
        705JAA02.31B   27C4096
        705A10.33G     (16M/32M)
        705A11.30G     (16M/32M)
        705A13.28G     (8M)     (Alternate read (13a) is 8M, initial read is 32M, since ROMCMP doesn't give a error about the 32M read)
        705A17.25G     (16M/32M)
        705A18.13G     (8M/16M/32M)
        705A19.10G     (8M/16M/32M)
        705A22.9G      (8M/16M/32M)
        705A08.9C      27C010
        705A09.7C      27C010


Versus Net Soccer (Version JAB) Konami, 1996
Hardware info by Guru
Last updated: No changes
------------------------

This game runs on Konami GX hardware.

PCB Layouts
-----------

Main Board

SYSTEM GX MOTHER PCB
PWB300456A
|----------------------------------------------|
|056602  058232                                |
|      514256  514256         8464  68EC000    |
|        TMS57002      056800            058141|
|S_OUT                 PAL1   8464             |
|         CY7C185                              |
|    CY7C185  CY7C185  PAL2                    |
|         058144              62256      056832|
|J                  48MHz           058143     |
|     056820        18.432MHz 62256            |
|A    056766        32MHz                      |
|  93C46                      62256      055555|
|M    056879        68EC020                    |
|          056879                              |
|M                                             |
|                                 8464         |
|A     62256     62256                   058142|
|           62256     62256       8464         |
|CN5                                           |
|   TEST_SW                                    |
|                 300A01.34K                   |
|CN6                                     055673|
|DIPSW  CN3   CN4                              |
|----------------------------------------------|
Notes:
      This version mother board has the game board connectors on top,
      meaning the game board plugs in above the mother board. A small
      cable feeds the RGB from the game board to the JAMMA connector via
      an adapter board for the 1st screen. Another small cable is used
      to connect the 2nd RGB output to the 'versus' cabinet/monitor.

      68020 clock: 24.000MHz (QFP100)
      68000 clock: 8.000MHz  (PLCC68)
      VSync      : 60Hz

      S_OUT: Connector for right speaker sound output.
      CN3  : Connector for 3rd player controls
      CN4  : Connector for 4th player controls
      CN5  : Connector for player 1 gun
      CN6  : Connector for player 2 gun

      RAM:
          CY7C185: 8K   x8 SRAM
          8464   : 8K   x8 SRAM
          62256  : 32K  x8 SRAM
          514256 : 256K x4 DRAM

      Konami Customs:
                     056602      - custom ceramic package near AMP, SIP38)
                     058232      - custom SIP14
                     056820      - custom SIP13
                     058144      - QFP160
                     056766      - QFP64
                     056879 (x2) - QFP120
                     058143      - QFP160
                     058142      - QFP120
                     058141      - QFP120
                     056832      - TQFP144
                     055555      - TQFP176
                     055673      - TQFP176


Game Board (This sits on top of the Mother PCB)

SYSTEM GX SUB PCB TYPE 4
PWB 301798A
     |-----------------------------------------|
     | MC44200  814260                         |
     |RGB2_OUT  814260                         |
     |           058146  627B07.7M  627A23.7R  |
     |     CY7C185                             |
     |     CY7C185       627B06.9M        *9R  |
|----|     CY7C185  PAL1                       |
|RGB1_OUT  CY7C185      627A20.11M  627A21.11R |
| MC44200  CY7C185                             |
|                   PAL2      *14M  627A19.14R |
|                   PAL3                       |
|               PAL4          *16M  627A17.16R |
|                                              |
|84256                        *18M  627A15.18R |
|84256          627A24.22H                     |
|                             *21M  627A13.21R |
|                                              |
| 053936                      *23M  627A11.23R |
|                PAL5                          |
|        8464  8464           *25M  627A09.25R |
|                                              |
|             003462  627JAB03.29M  627A05.29R |
|                     627JAB02.31M  627A04.31R |
|----------------------------------------------|
Notes:
      *: Unpopulated ROM positions.

      Konami Customs:
                     003462 - Xilinx PLCC84 FPGA stamped 003462
                     053936 - QFP80, also marked KS10011-PF PSAC2
                     058146 - TQFP176

      RAM:
          814260 : 256K x16 DRAM
          84256  : 32K  x8  SRAM
          8464   : 8K   x8  SRAM
          CY7C185: 8K   x8  SRAM

      PALs:
           PAL1: PALCE16V8 stamped 002207
           PAL2: PALCE16V8 stamped 000141
           PAL3: PALCE16V8 stamped 002205
           PAL4: PALCE16V8 stamped 002206
           PAL5: PALCE16V8 stamped 000143


Open Golf Championship - version EAE, Konami, 1994
Hardware info by Guru
Last updated: No changes
------------------------

This game runs on Konami GX hardware (Type 1 bottom board)

Top Board = Standard System GX CPU Board (PWB354192C)

PCB Layout (Bottom Board)

PWB354207B
--------------------------------------
A23
A22   A26
A21   A25       A07    M514256(x12)
A20   A24       A06
                                 A18
                                 A17
           41256                 A16
           41256 CXK5864 056540  A15
     053936      CXK5864         A14
           41256         CXK5864 A13
                                 A12
                                 A11
                   D03 A05       A10
    056230         D02 A04       A09
                                 A08
--------------------------------------

Note: Konami Custom 056230 is only specific to Racin' Force

**************************************************************************/
