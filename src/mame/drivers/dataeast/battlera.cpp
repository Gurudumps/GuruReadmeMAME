/*******************************************************************************

Battle Rangers / Bloody Wolf, Data East 1988
Hardware info by Guru
Last updated: No changes
------------------------

This game runs on custom Data East hardware using some of the ICs used in
the NEC PC Engine video game console made by NEC in 1987.
The PCB is NOT a modified PC Engine, it's a game-specific arcade PCB
manufactured by Data East.

PCB Layout
----------

DE-0314-2
  |-----------------------------------------------|
|-|                   |----|                      |
|                     |DEC-01           ET10-.L3  |
|J                    |----|              ET09-.L1|
|A     DSW2                                       |
|M        DSW1                                    |
|M RCDM-I1                        ET08-.J5        |
|A RCDM-I1                          ET07-.J4      |
|  RCDM-I1                             ET06-.J3   |
|  RCDM-I1                                ET05-.J1|
|-|RCDM-I1                                        |
  |         12MHz                 2063            |
|-|                       2018(1)         ET00-.E1|
|       21.4772MHz     ET11-.D10        ET01-.E3  |
|                                    ET02-.E4     |
|                           2018(2)               |
|  YM2203C                          62256   62256 |
|YM3014B              C1060C         62256   62256|
|UPC3403                                          |
| 384kHz              |----|         |----|       |
|VOL M5205            | 45 |         |6270|       |
|MB3730               |----|         |----|       |
|-------------------------------------------------|
Notes:
      DEC-01 - Hudson HuC6280 6502-based CPU with in-built Programmable Sound Generator
               used as the main CPU. Clock input is 21.4772MHz and is divided internally
               by 3 for the CPU (7.15906MHz) and by 6 for the PSG (3.579533MHz), although
               in this case the PSG isn't used. The Hudson markings have been scratch off
               and the IC is labelled 'DEC-01'
          45 - Hudson HuC6280 6502-based CPU with in-built PSG used as the sound CPU
               Clock input is 21.4772MHz and is divided internally by 3 for the CPU
               and by 6 for the PSG. The Hudson markings have been scratch off and the IC
               is labelled '45'
        6270 - Hudson HuC6270 Video Display Controller. The Hudson markings have been
               scratch off. The chip was labelled by Data East as something else but the
               sticker is no longer present on top of the chip. Note the HuC6260 is NOT
               present on the PCB, some logic and RAM handle the color encoding
     2018(1) - Toshiba TMM2018 2kx8 SRAM used for color RAM
     2018(2) - Toshiba TMM2018 2kx8 SRAM used for sound program RAM
        2063 - Toshiba TMM2063 8kx8 SRAM used for main work RAM
       62256 - Hitachi HM62256 32kx8 SRAM used for video RAM
         ET* - EPROMs/MaskROMs
     YM2203C - Yahama YM2203C FM Operator Type-N(OPN) 3-Channel Sound Chip. Clock input 1.5MHz [12/8]
     YM3014B - Yamaha YM3014B Serial Input Floating D/A Converter
       M5205 - Oki M5205 ADPCM Speech Synthesis LSI. Clock input is via a 384kHz resonator
      MB3730 - Fujitsu MB3730 14W BTL Audio Power Amplifier. Audio output is mono via the JAMMA connector
        DSW* - 8-position DIP switch
     uPC3403 - NEC uPC3403 High Performance Quad Operational Amplifier
      C1060C - NEC C1060C High Precision Reference Voltage Circuit
     RCDM-I1 - Custom Ceramic Resistor Array
       VSync - 59.12246Hz   \
       HSync - 15.60838kHz  / measured on pins 25/26 of the HuC6270

**********************************************************************/
