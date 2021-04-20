/***************************************************************************

Super Bishi Bashi Champ (Korean version), Konami, 1998
Bishi Bashi Champ (Korean version), Konami, 1996
Hardware info by Guru
Last updated: No changes
------------------------

PCB Layout                     ROM
----------              Daughterboard (on top)
                                ||
GS562 PWB(A)400625A             \/
|----------------------|-------------------|
|   VOL SM5875 675KAA01|24MHz  MB3790  CN4 |
|16.9344MHz            |                   |
|   YMZ280B    675KAA02|  6264             |
|  056232              |                CN3|
|              675KAA03|  6264    68000    |
|                      |                   |
|              675KAA04|            62256  |
|            PAL       |                   |
|CN1         DSW1(8)   |  058143    62256  |
|  056879    DSW2(8)   |--------------------
|                                   62256  |
|                                675KAA07  |
|                         056832           |
|                                675KAA09  |
|         6264                             |
|                                675KAA08  |
|         6264            055555           |
|  056766                        675KAA10  |
|056820   6264                             |
|                                          |
|------------------------------------------|
Notes:
      68000  - clock 12.000MHz (24/2)
      YMZ280 - clock 16.9344MHz
      CN3/4  - connector for ROM daughterboard
      CN1    - large flat cable connector for power/controls
      675KAA01 to 04 - 27C040 EPROMs
      675KAA07 to 10 - 27C240 EPROMs

      Konami Custom ICs -
                          056143 (QFP160)
                          056832 (QFP144)
                          055555 (QFP240)
                          056879 (QFP144)
                          056232 (ceramic SIL14)
                          056820 (ceramic SIL13)


Daughterboard
-------------
PWB 402005(B) ROM BOARD
|-------------------|
|CN7 4AK16     CN8  |
|              PAL  |
|                   |
|CN5 4AK16          |
|                   |
|         675KAA05  |
|    4AK16          |
|CN6      675KAA06  |
|-------------------|
Notes:
      CN5/6 - 15 pin connector for lights maybe?
      CN7/8 - 8 pin connector for power
      4AK16 - power amp IC tied to CN5/6
      675*  - 27C240 EPROMs

***************************************************************************/
