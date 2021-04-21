/***************************************************************************

China Gate, Technos, 1988
Hardware info by Guru
Last updated: 21st April 2021
-----------------------------

PCB Layout
----------

TA-0023-P1-03 (Main Board)
         |--------------|     |--------------|
|--------|--------------|-----|--------------|--------|
|                                                     |
|                                                     |
| 3.579545MHz                                         |
|                                                     |
|                                                     |
|    LH0080A                                          |
|                                                     |
|                                                     |
|                HD68B09EP    HD68B09EP               |
|     23J0-0                                  23J6-0  |
|                                                     |
|  YM2151                              23J5-0         |
|     23J1-0 23J2-0 23J3-0      23J4-0                |
|                                                     |
|                                                     |
|                                                     |
|   YM3012  M6295                                     |
|                                                     |
|                                                     |
|            1.056MHz                                 |
|                                                     |
|                                             SW2 SW1 |
|                                                     |
|                                                     |
|  VR1                                                |
|                        JAMMA                        |
|-----------------------------------------------------|
Notes:
      HD68B09EP - Hitachi HD6809E. Clock input 1.5MHz [12/8]
      HD68B09EP - Hitachi HD6809E. Clock input 1.5MHz [12/8]
        LH0080A - Sharp Z80A. Clock input 3.579545MHz
         YM2151 - Yamaha FM sound chip. Clock input 3.579545MHz
         YM3012 - Yamaha YM3012 DAC
          M6295 - OKI ADPCM sound chip. clock input 1.056MHz
            VR1 - Speaker volume pot
        SW1/SW2 - 8-position DIP switch
           RAMs - FIXIT FELIX!
           ROMs - FIXIT FELIX!
                  23J5-0 - Biploar PROM type 82S129
                  23J0-0 - soundcpu EPROM
                  23J1-0 - oki mask ROM
                  23J2-0 - oki mask ROM
                  23J3-0 - maincpu EPROM
                  23J4-0 - sub EPROM
                  23J6-0 - gfx1 mask ROM


TA-0023-P2-03 (Video Board)
         |--------------|     |--------------|
|--------|--------------|-----|--------------|--------|
|                                                     |
|                                                     |
|                                                     |
|                                                     |
|        23JB-0                   IC7                 |
|                                                     |
|                                                     |
| 12MHz                                               |
|                                                     |
|                                                     |
|                                           IC40      |
|                                                     |
|                                        |------------|
|      IC70                              |1           |
|                                        |            |
|                                        |            |
|                         IC78   IC75    |  TRJ-100   |
|                                        |            |
|                                        |            |
|                                        |32          |
|                                        |------------|
|                                                     |
|   IC106     23J7-0  23J8-0  23J9-0  23JA-0          |
|                                                     |
|                                                     |
|                                                     |
|-----------------------------------------------------|
Notes:
      ROMs -
            23JB-0 - bipolar PROM type 82S131
            23J7-0 - gfx2 mask ROM
            23J8-0 - gfx2 mask ROM
            23J9-0 - gfx2 mask ROM
            23JA-0 - gfx2 mask ROM
           TJR-100 - gfx3 ROM in custom ceramic module (undumped)

FIXIT FELIX!
SRAMs (2KBx8bits) Motorola MCM2016HN55, SANYO LC3517?
    IC7       - ?
    IC40      - bgvideoram
    IC70      - ?
    IC75      - ?
    IC78      - ?
    IC106     - ?


TRJ-100 pin assigns
-------------------
Following assignments are estimated based on the circuit around the TRJ-100 in
comparison with one for Double Dragon.
/M2H2 clock is special for this PCB, and M2H is used in Double Dragon instead.
This signal is created by NAND with M2H (1.5MHz) and MH (3MHz).

Following pictures show each clock timing. '%' is the timing to latch AT[7:0]
by these clocks.
        _    ________
/M2H2 - _\__/%  _____\  duty 1:3, 1.5MHz
/M2H  -  \_____/%    \  duty 1:1, 1.5MHz, inverted
          _____
M2H   -  /%    \_____/  duty 1:1, 1.5MHz

 1 - VCC
 2 I /M2H  - inverted 1.5MHz, used to latch AT[7:0] for A[13:6]
 3 I AT0   - connected with bgvideoram d0, used as A6 and A14
 4 I AT1   - connected with bgvideoram d1, used as A7 and A15
 5 I AT2   - connected with bgvideoram d2, used as A8 and A16
 6 I AT3   - connected with bgvideoram d3, used as A9 and BPL0
 7 I AT4   - connected with bgvideoram d4, used as A10 and BPL1
 8 I AT5   - connected with bgvideoram d5, used as A11 and BPL2
 9 I AT6   - connected with bgvideoram d6, used as A12 and BINV
10 I AT7   - connected with bgvideoram d7, used as A13 and BPA
11 I /M2H2 - /(M2H & MH), used to latch AT[7:0] for A[16:14], BPL, BIN, and BPA
12 O BPAL0 - connected with J2 26pin
13 O BPAL1 - connected with J2 24pin
14 O BPAL2 - connected with J2 22pin
15 O BPRT  - connected with J2 20pin
16 I /CE?  - connected with J1 17pin, always LOW as far as it's observed
17 I BHP3  - back horizontal (y) position 0, used to select output
18 I /1P   - screen flip
19 I BHP0  - back horizontal (y) position 1, used to select output
20 I BHP1  - back horizontal (y) position 2, used as A5
21 I BHP2  - back horizontal (y) position 3, used as A6
22 I /HCLK - inverted 6MHZ clock, used as a pixel clock to shift output
23 I BVP0  - back vertical (x) position 0, used as A0
24 I BVP1  - back vertical (x) position 1, used as A1
25 I BVP2  - back vertical (x) position 2, used as A2
26 I BVP3  - back vertical (x) position 3, used as A3
27 O BCOL0 - connected with J2 34pin
28 O BCOL1 - connected with J2 32pin
29 O BCOL2 - connected with J2 30pin
30 O BCOL3 - connected with J2 28pin
31 GND
32 GND

***************************************************************************/
