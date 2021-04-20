/***************************************************************************

Baraduke, Namco, 1985
Hardware info by Guru
Last updated: No changes
------------------------

PCB Layout
----------

 2248961100
(2248963100)
|---------------------------------------------------|
|           BD1_8.4P                6116            |
|       43                                          |
|PR1.1N     BD1_7.4N       42       BD1_12.8N  2148 |
|                                                   |
|  PR2.2M   BD1_6.4M                BD1_11.8M  2148 |
|                                                   |
|                                   BD1_10.8L  2148 |
|2  DSWA DSWB                                       |
|2  31                    27        BD1_9.8K   39   |
|W      BD1_5.3J   49.152MHz                        |
|A                        6116                      |
|Y                                                  |
|       2148                                   48   |
|       2148     30                6116             |
|                                  6116             |
|                                  6116             |
|       6116                       6116   BD1_3.9C  |
|                                                   |
|       BD1_4B.3B                         BD1_2.9B  |
|                                                   |
|LA4460     60A1         41        6809   BD1_1.9A  |
|---------------------------------------------------|
Notes:
      Clocks:
      6809 clock : 1.536MHz (49.152 / 32)
      63701 clock: 1.536MHz (49.152 / 32)
      VSync      : 60.606060Hz

      RAMs:
      6116: 2K x8 SRAM
      2148: 1K x4 SRAM

      Namco Customs:
      27   : DIP40, manufactured by Fujitsu)
      30   : (SDIP64)
      31   : (DIP48, also written on chip is '218' and '5201')
      39   : (DIP42, manufactured by Fujitsu)
      41   : (DIP40, also written on chip is '8512MAD' and 'PHILIPPINES')
      42   : (QFP80, the only chip on the PCB that is surface-mounted)
      60A1 : (DIP40, known 63701 MCU)
      43   : (SDIP64)
      48   : (SDIP64)

      ROMs:
      PR1.1N is a PROM type MB7138E
      PR2.2M is a PROM type MB7128E
      BD1_3.9C & BD1_5.3J are 2764 EPROMs. All other ROMs are 27128 EPROMs.

***************************************************************************/
