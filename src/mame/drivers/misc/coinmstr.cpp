/*********************************************************************

Quizmaster, Coinmaster, 1985
Hardware info by Guru
Last updated: No changes
------------------------

PCB Layout
----------

PCB 001-POK                                            5MBYTE MEMORY EXPANSION
|--------------------------------------------------|   |------------------------------|
|   ULN2803      6821                              |   |                              |
|                                                  |   |                              |
|                                NPC_QM4_11.IC45   |   |GESCHICH2.IC19  GESCHICH1.IC20|
|   ULN2003      6821                              |   |                              |
|     ULN2003                    NPC_QM4_21.IC41   |   |      *         GESCHICH3.IC18|
|                                                  |   |                              |
|7               6821                              |   |POPMUSIK2.IC15  POPMUSIK1.IC16|
|2                               HD465055          |   |                              |
|W                                                 |   |      *               *       |
|A                                                 |   |                              |
|Y           AY3-8912                       6116   |   |SPORT2.IC11     SPORT1.IC12   |
|                                                  |   |                              |
|                                                  |   |SPORT4.IC9      SPORT3.IC10   |
|                BATTERY                    6116   |   |                              |
|     DSW1(8)              NM_QM4_11.IC9           |   |GEOGRAPH2.IC7   GEOGRAPH1.IC8 |
|                  NE555                           |   |                              |
|            VOL           NP_QM4_21.IC6    6116   |   |      *               *       |
| LM380                                  PAL       |   |                              |
|                                                  |   |ALLGEME2.IC3    ALLGEME1.IC4  |
|                                        PAL       |   |                              |
|                                                  |   |      *         ALLGEME3.IC2  |
|                                        PAL       |   |                              |
|                                            14MHz |   |                              |
|                              Z80       CN1       |   |                       CN2    |
|                                                  |   |     PAL                      |
|--------------------------------------------------|   |------------------------------|
CN1/2 is connector for top ROM board                    * - unpopulated socket

*********************************************************************/
