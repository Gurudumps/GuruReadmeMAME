// license:BSD-3-Clause
// copyright-holders:Aaron Giles
/***************************************************************************

Badlands, Atari Games, 1989
Hardware info by Guru
Last updated: No changes
------------------------

PCB Layout
----------

A047193-01 BADLANDS
|-------------------------------------------------|
|TDA2030 LM324                ROM.2N ROM.2S ROM.2U|
|VOL     LM324                ROM.4N ROM.4S ROM.4U|
|6264    YM3012                                   |
|      YM2151          6116     PAL3              |
|   ROM.9C   PAL2                 ROM.10R  10T    |
|J    6502                        ROM.14R  ROM.14T|
|A                            MB87316             |
|M                     14.31818MHz    PAL4  VMA   |
|M                                                |
|A    VGC7205      ROM.17F          PAL5          |
|  TEST_SW   68000 ROM.20F      SOS               |
| NE556 PAL1       ROM.24F          PAL6     6264 |
|LED    DIP20      ROM.27F 2816                   |
|-------------------------------------------------|
Notes:
      68000  - clock 7.15909MHz [14.31818/2]
      6502   - clock 1.7897725 [14.31818/8]
      YM2151 - clock 3.579545MHz [14.31818/4]
      VGC7205- VLSI VGC7205A0672 ATARI 137304-2002
      2816   - 2k x8 EEPROM
      DIP20  - socket not populated
      SOS    - Motorola (rebadged) SOS-137550-001 ZKZKAA8946
      VMA    - Motorola (rebadged) VMA-137552-001 ZKZKAB8948
      MB87316- Fujitsu MB87316 137536-001 with clock input 7.15909MHz
               Listed in Jed Margolin's Atari Approved Vendor List
               (http://www.jmargolin.com/schem/atariavl.htm) as.....
               137536-001 IC,Line_Buffer(LB),CMOS,672B_RAM,500_Gate,40pin FUJITSU MB87316

      ROMs   -
               location  label
               ------------------------
               9C        136074-1018 E1FF
               17F       136074-1009 86DF
               20F       136074-1008 87FF
               24F       136074-1007 F2DE
               27F       136074-1006 98FE
               2N        136074-1013 A5A0
               2S        136074-1014 567B
               2U        136074-1017 BB88
               4N        136074-1012 6B70
               4S        136074-1014 4475
               4U        136074-1016 42A5
               10R       136074-1011 041C
               10T       not populated
               14R       136074-1010 5E67
               14T       136074-1019 D4C4

      PALs   -
               PAL1 - Lattice GAL16V8A-25LP labelled '136074-1001'
               PAL2 - Lattice GAL16V8A-25LP labelled '136074-1005'
               PAL3 - Lattice GAL16V8A-25LP labelled '136074-1004'
               PAL4 - Lattice GAL16V8A-25LP labelled '136074-1003'
               PAL5 - Lattice GAL16V8A-25LP labelled '136074-1002'
               PAL6 - Lattice GAL16V8A-25LP labelled '136074-2000'

Measurements -
              X1    - 14.31995MHz
              VSync - 59.9310Hz
              HSync - 15.4611kHz

****************************************************************************/
