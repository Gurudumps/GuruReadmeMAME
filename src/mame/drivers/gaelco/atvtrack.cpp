/***************************************************************************

ATV Track, Gaelco 2002
Hardware info by Guru
Last updated: No changes
------------------------

PCB Layout

GAELCO
REF. 020419
 |--------------------------------------------------------------|
 |                                                              |
 |   SW3                                               EPC1PC8  |
 |                                         K4S643232            |
 |    LC245A                                         7LB176    |-|
 |                        FLASH.IC14  FLASH.IC19     7LB176    | |
 |       |-----|                                     7LB176    | |DB9
 |       | SH4 |                                     7LB176    |-|
 |       |     |          FLASH.IC15  FLASH.IC20                |
 |       |-----|                                                |
 |                                                |----------|  |
|-|                            K4S643232          |ALTERA    |  |
| |  L4955                                        |FLEX      |  |
| |      |-----|               K4S643232          |EPF10K50  |  |
| |CN1   | SH4 |                                  |EQC240-3  |  |
| |      |     |                                  |----------|  |
| |      |-----|                                                |
|-|                                                             |
 |                                                              |
 |      33MHz                       K4S643232     |----------|  |
 |                                  K4S643232     | GFX      |  |
 |             LED                                |          | |-|
 |             LED                                |          | | |
 |                                  K4S643232     |          | | |DB9
 |                                  K4S643232     |----------| |-|
 | TL074C   TL074C                                     385-1    |
 |     TDA1387   TDA1387                          14.31818MHz   |
 |                                                              |
 |--------------------------------------------------------------|
Notes:
      SH4       - Hitachi HD6417750S SH4 CPU (BGA)
      K4S643232 - Samsung K4S643232E-TC70 64M x 32-bit SDRAM (TSSOP86)
      GFX       - NEC PowerVR Neon 250
      FLASH.IC* - Samsung K9F2808U0B 128MBit (16M + 512k Spare x 8-bit) FlashROM (TSOP48)
      EPF10K50  - Altera Flex EPF10K50EQC240-3 FPGA (QFP240)
      EPC1PC8   - Altera EPC1PC8 FPGA Configuration Device (DIP8)
      TL074C    - Texas Instruments TL074C Low Noise Quad JFet Operational Amplifier (SOIC14)
      TDA1387   - Philips TDA1387 Stereo Continuous Calibration DAC (SOIC8)
      L4955     - ST Microelectronics L4955 low-power, quad channel, 8-bit buffered voltage output DAC and amplifier
      7LB176    - Texas Instruments 7LB176 Differential Bus Tranceiver (SOIC8)
      385-1     - National LM385 Adjustable Micropower Voltage Reference Diode (SOIC8)
      CN1       - Multi-pin connector for filter board (input, video, power & controls connectors etc)
      DB9       - Probably used for cabinet linking
      SW3       - Push button switch


***************************************************************************

Smashing Drive, Gaelco 2000
Hardware info by Guru
Last updated: No changes
------------------------

PCB Layout
----------

REF 010131
|----------------------------------------------|
|                                              |
|                              K4S643232C      |
|        |------|SDRB.IC14                     |
|        |SH4   |                              |-|
|        |      |                              | |DB9
|        |      |SDRA.IC15  SDRC.IC20  PRG.IC23|-|
|        |------|             |----------|     |
|                             |ALTERA    |     |
|                             |FLEX0K50  |     |
|        |------|  K4S643232C |EPF10K50  |     |
|        |SH4   |  K4S643232C |EQC240-3  |     |
|        |      |             |          |     |
|        |      |             |          |     |
|        |------|             |----------|     |
|                                              |
|         33MHz                 |--------|     |
|                    K4S643232C |NEC     |     |
|                    K4S643232C |POWERVR |     |
|                               |250     |     |
|                    K4S643232C |        |     |-|
|                    K4S643232C |        |     | |DB9
|                               |--------|     |-|
|                                              |
|  TL074C   TL074C                14.31818MHz  |
|  TDA1543  TDA1543                            |
|----------------------------------------------|

 PRG ROM useful locations:
   0x64C44 Country: 0 - World, 1 - Spain, 2 - UK, 3 - Italy, 4 - USA
   0x727AC 1 - enable Develop/debug option in test mode

***************************************************************************/
