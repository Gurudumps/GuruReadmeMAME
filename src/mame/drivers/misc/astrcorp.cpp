/*************************************************************************************************************

-----------------------------------------------------------------------------------------------------------------------
Year + Game          PCB ID         CPU                Video           Chips                                   Notes
-----------------------------------------------------------------------------------------------------------------------
00  Show Hand        CHE-B50-4002A  68000              ASTRO V01       pLSI1016-60LJ, ASTRO 0001B   (28 pins)
00  Wang Pai Dui J.  CHE-B50-4002A  68000              ASTRO V01       pLSI1016,      MDT2020AP MCU (28 pins)
01  Magic Bomb       None           ASTRO V03          ASTRO V02 0022  pLSI1016                                Encrypted
02  Skill Drop GA    None           JX-1689F1028N      ASTRO V02       pLSI1016-60LJ
02? Keno 21          ?              ASTRO V102?        ASTRO V05       ASTRO F02?                              not dumped
03  Speed Drop       None           JX-1689HP          ASTRO V05       pLSI1016-60LJ
03? Dino Dino        T-3802A        ASTRO V102PX-010?  ASTRO V05       ASTRO F02 2003-03-12                    Encrypted
04? Stone Age        L1             ASTRO V102PX-012?  ASTRO V05x2     ASTRO F02 2004-09-04                    Encrypted
05? Zoo              M1.1           ASTRO V102PX-005?  ASTRO V06       ASTRO F02 2005-02-18                    Encrypted
05? Win Win Bingo    M1.2           ASTRO V102PX-006?  ASTRO V06       ASTRO F02 2005-09-17                    Encrypted
05? Hacher (hack)    M1.2           ?                  ?               ASTRO F02 2005-02-18                    Encrypted
07? Western Venture  CS350P032      ASTRO V102?        ASTRO V07       ASTRO F01 2007-06-03                    Encrypted
-----------------------------------------------------------------------------------------------------------------------



Show Hand, Astro Corp, 2000
Hardware info by Guru

PCB Layout
----------
CHE-B50-4002A
|----------------------------------------|
|     LATTICE    JAMMA   SW   VOL UPC1242|
|     PLSI1016           U26             |
|                6264                 U43|
|                        U25    M6295    |
|     68000                              |
|                U17    |-----|          |
|                       |ASTRO|          |
|                U16    |V01  |          |
|                       |-----|MDT2020AP/3V
|                6264           20MHz    |
|DSW(2)                      26.601712MHz|
|93C46           6116  6116    KM681000  |
|BATTERY         6116  6116    KM681000  |
|----------------------------------------|
Notes:
      68000 clock - 10.000MHz [20/2]
      M6295 clock - 1.000MHz [20/20], pin 7 HIGH
      VSync - 58.846Hz
      HSync - 15.354kHz


***************************************************************************

Dino Dino, Astro Corp.
Hardware info by Guru
Last updated: No changes
------------------------

PCB Layout
----------

ASTRO T-3802A PCB with ASTRO F02 2003-03-12
|--------------------------------------------|
|        |------|                    TDA2003 |
|ULN2003 |ASTRO |   V62C51864            VOL |
|        |F02   |            ROM4            |
|        |------|   ROM2                     |
|ULN2003                     ROM3      M6295 |
|        |-------|                           |
|8       |ASTRO  |                           |
|L       |V102PX |                       ROM5|
|I       |-010   |                           |
|N       |-------|            |------|       |
|E                            |ASTRO |       |
|R                  ROM1      |V05   |       |
|                             |------|       |
|                   V62C51864                |
|                                       24MHz|
|        93C46      6116 6116    HM628128    |
|        SW1        6116 6116    HM628128    |
|--------------------------------------------|

***************************************************************************/
