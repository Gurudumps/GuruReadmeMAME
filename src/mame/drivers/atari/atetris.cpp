/***************************************************************************

Tetris (Korean bootleg of atetrisa set)
Hardware info by Guru
Last updated: No changes
------------------------

PCB Layout
----------

RC-1108
|---------------------------------------------------|
|                                        14.31818MHz|
| PAL                                               |
|                                                   |
|     P8749H   6116                                 |
|J                                                  |
|A          10MHz                     27512         |
|M              PAL                                 |
|M                                62256             |
|A                                                  |
|                27512                              |
|                28C16                         PAL  |
|                                      PAL     PAL  |
|76489 76489  4MHz                  82S123          |
|76489              6502                            |
|VOL MB3713    PAL                                  |
|---------------------------------------------------|

A second PCB has been found with identical code, but with 1x additional SN76489AN, 1x additional DIP switch, a few more TTLs, and 6 PAL18l8ACN.
The MCU XTAL is 10.73835 MHz rather than 10 MHz on this PCB.

***************************************************************************/
