/***************************************************************************

Konami 'NWK-TR' Hardware, Konami, 1998-1999
Hardware info by Guru
Last updated: 21st April 2021
-----------------------------

Known games on this hardware include....

Game                      (C)      Year
---------------------------------------
Racing Jam                Konami   1998
Racing Jam : Chapter 2    Konami   1998
Thrill Drive              Konami   1998


PCB Layouts
-----------

Note, the top board is virtually identical to GN715 used on Hornet.
Some extra RCA connectors have been added (for dual sound output), the LED and
DIPSW are present on the main board (instead of on the filter board) and the
SOIC8 chip (an XICOR X76F041 Secure SerialFlash) is not populated (the solder pads are there though).
There's an extra sound IC AN7395S (not populated on Hornet).
The PALs/PLDs are the same on both NWK-TR and Hornet.
Both Racing JAM/Chapter 2 and Thrill Drive use two video boards.
The top video board is set to MASTER/TWIN, lower video board is set to SLAVE
They are otherwise identical.


Top Board (CPU PCB)
GN676 PWB(A)B
Konami 1997
|--------------------------------------------------------------|
| SP485CS CN10       CN11  7805  CN9          JP8 JP9 JP10 JP11|
|CN19  7809                                              PAL1  |
|CN21       JP13 PAL2             68EC000          EPROM.7S    |
|   NE5532       PAL3                                      CN12|
|           JP12  JP16    DRM1M4SJ8                        CN13|
|   NE5532    AN7395S                 MASKROM.9P    MASKROM.9T |
|     SM5877 JP15         RF5C400                              |
|CN18                                 MASKROM.12P   MASKROM.12T|
|     SM5877     16.9344MHz                                 CN7|
|CN14            SRAM256K             MASKROM.14P   MASKROM.14T|
|                                                              |
|CN16            SRAM256K             MASKROM.16P   MASKROM.16T|
|  ADC12138                                                    |
|CN15         056800            JP5                            |
|                               JP4                            |
|CN17                  MACH111  JP3                |---------| |
|   TEST_SW                         EPROM.22P      |         | |
|CN1                   DRAM16X16                   |PPC403GA | |
|                                   EPROM.25P      |         | |
|                                                  |         | |
|                      DRAM16X16    EPROM.27P      |---------| |
| 4AK16                                                     JP6|
|                                                              |
|CN3                                                           |
|          PAL4                     CN5               7.3728MHz|
|          058232                                              |
|                                                     50.000MHz|
|CN2  RESET_SW                                     JP1  JP2    |
|M48T58Y-70PC1  CN4          DSW(8) CN6               64.000MHz|
|--------------------------------------------------------------|
Notes:
      DRM1M4SJ8 - Fujitsu 81C4256 256kx4 DRAM (SOJ24)
       SRAM256K - Cypress CY7C199 32kx8 SRAM (SOJ28)
      DRAM16X16 - Fujitsu 8118160A-60 16megx16 DRAM (SOJ42)
  M48T58Y-70PC1 - ST Timekeeper RAM
        RF5C400 - Ricoh RF5C400 PCM 32Ch, 44.1 kHz Stereo, 3D Effect Spatializer, clock input 16.9344MHz
         056800 - Konami Custom (QFP80)
         058232 - Konami Custom Ceramic Package (SIL14)
       ADC12138 - National Semiconductor ADC12138 A/D Converter, 12-bit + Serial I/O With MUX (SOP28)
        MACH111 - AMD MACH111 CPLD (Stamped 'N676A1', PLCC44)
        68EC000 - Motorola MC68EC000, running at 16.0MHz (64/4)
       PPC403GA - IBM PowerPC 403GA CPU, clock input 32.0MHz (64/2) (QFP160)
       SM5877AM - Nippon Precision Circuits 3rd Order 2-Channel D/A Converter (SOIC24)
          4AK16 - Hitachi 4AK16 Silicon N-Channel Power MOS FET Array (SIL10)
       NE5532AN - Philips, Dual Low-Noise High-Speed Audio OP Amp (DIP8)
        SP485CS - Sipex SP485CS Low Power Half Duplex RS485 Transceiver (DIP8)
        AN7395S - Panasonic AM7395S Spatializer Audio Processor IC for 3D surround (SOIC20)
           PAL1 - AMD PALCE16V8 (stamped 'N676A4', DIP20)
           PAL2 - AMD PALCE16V8 (stamped 'N676A2', DIP20)
           PAL3 - AMD PALCE16V8 (stamped 'N676A3', DIP20)
           PAL4 - AMD PALCE16V8 (stamped 'N676A5', DIP20)
            JP1 -       25M O O-O 32M
            JP2 -       25M O O-O 32M
            JP3 -        RW O O O RO
            JP4 - PROG  32M O O-O 16M
            JP5 - DATA  32M O-O O 16M
            JP6 - BOOT   16 O-O O 32
            JP7 - SRC DOUT2 O O-O 0
            JP8 -   64M&32M O-O O 16M
            JP9 -       64M O O-O 32M&16M
           JP10 -   64M&32M O-O O 16M
           JP11 -       64M O O-O 32M&16M
           JP12 -   through O-O O SP
           JP13 -   through O-O O SP
           JP14 -       WDT O O
           JP15 -      MONO O-O O SURR
           JP16 -      HIGH O O O MID (N/C LOW)
    CN1 to  CN3 - D-SUB Connectors
            CN4 - Multi-pin Connector for Network PCB
            CN5 - DIN96 connector (pads only, not used)
            CN6 - DIN96 joining connector to lower PCB
            CN7 - Multi-pin connector (pads only, not used)
    CN9 to CN13 - Power Connectors
   CN14 to CN17 - RCA Stereo Audio OUT
           CN18 - RCA Mono Audio OUT
           CN19 - USB Connector


ROM Usage
---------
          |------------------------------- ROM Locations -------------------------------------|
Game         27P     25P  22P   16P     14P     12P     9P      16T     14T     12T     9T  7S
--------------------------------------------------------------------------------------------------
Racing Jam   676NC01 -    -     676A09  676A10  -       -       676A04  676A05  -       -   676A08
Racing Jam 2 888A01  -    -     888A09  888A10  -       -       676A04  676A05  888A06  -   888A08
Thrill Drive 713BE01 -    -     713A09  713A10  -       -       713A04  713A05  -       -   713A08


Network PCB (Racing Jam 2 and Thrill Drive)
-----------
GN676-PWB(H)A
MADE IN JAPAN
(C)1998 KONAMI
|------------------------|
|  CY7C199       N676H1  |
|                        |
|CN3                     |
|  HYC2485S              |
|   XC5204        XC5210 |
|CN2                     |
|         CN1            |
|------------------------|
Notes:
           CN1 - Connector joining to CPU board CN4
         CN2/3 - RCA jacks for network cable
      HYC2485S - Hybrid ceramic module for RS485
       CY7C199 - 32k x8 SRAM
        XC5204 - Xilinx XC5204 FPGA
        XC5210 - Xilink XC5210 FPGA
        N676H1 - PALCE16V8Q-15 stamped 'N676H1'

Network PCB (Racing Jam 2 and Thrill Drive)
-----------
GN676-PWB(H)B
MADE IN JAPAN
(C)1998 KONAMI
|------------------------|
|  CY7C199       N676H1  |
|                      2G|
|CN3                     |
|  HYC2485S              |
|   XC5204        XC5210 |
|CN2                     |
|         CN1            |
|------------------------|
Notes:
      This PCB is the same as revision A with one chip added.
      2G - XICOR X76F041 Secure SerialFlash (SOIC8)

      Note: This chip is also present on *some* Hornet games on the GN715 CPU board at location
      30C. The chip refreshes game and region specific serial data to the Timekeeper RAM if the
      region ID matches the timekeeper. Because Racing Jam 2 and Thrill Drive came in a conversion
      kit for Racing Jam, the two former games will first boot with a "backup data error" because
      of the timekeeper used for the incorrect game. Pressing the test switch then sets the
      timekeeper back to factory settings for the new kitted game installed. 
      If the region ID in serialflash and timekeeper do not match, the game boots with a 
      "hardware error" message. However, because the serialflash sets the data in the NVRAM there
      won't be any errors. It is unclear what happens when the NVRAM battery dies whether the NVRAM
      data is refreshed again. On Hornet games that have this chip, they will work even with a dead
      NVRAM because the data is refreshed by the chip automatically at power-on.

Bottom Board (VIDEO PCB)
GN676 PWB(B)B
|-------------------------------------------------------------------------------------------|
|CN4          CN2      CN8               CN6                                             CN5|
|JP1                        |---------|          4M_EDO   4M_EDO                            |
|                           |         |     |----------|                                    |
|  4M_EDO   4M_EDO          | TEXELFX |     |          |       4M_EDO    MASKROM.8X         |
|CN3                        |         |     | PIXELFX  |                        MASKROM.8Y  |
|  4M_EDO   4M_EDO          |         |     |          |                                    |
|                           |---------|     |          |       4M_EDO                       |
|  4M_EDO   4M_EDO                          |----------|                                    |
|                           |---------|    50MHz         |--------|                         |
|  4M_EDO   4M_EDO          |         |                  |KONAMI  |                         |
|                           | TEXELFX |                  |33906   |      MASKROM.16X        |
|                           |         |                  |        |            MASKROM.16Y  |
|                           |         |  PLCC44_SOCKET   |--------| AM7201                  |
| MC44200                   |---------|                                                     |
|                                                                                           |
|                                                                                           |
|                             PAL3       256KSRAM                         36MHz             |
|                                        256KSRAM    AM7201   AM7201    |-------------|     |
|                                        256KSRAM                       |ANALOG       |     |
|         256KSRAM         MACH111       256KSRAM    AM7201   AM7201    |DEVICES      |     |
|         256KSRAM  AV9170                                              |ADSP-21062   |     |
|                                                                       |SHARC        |     |
|         |--------|                                                    |KS-160       |     |
|         |KONAMI  |                                                    |-------------|     |
|         |001604  |                        1MSRAM  1MSRAM  1MSRAM  1MSRAM                  |
|1MSRAM   |        |                                        1MSRAM  1MSRAM  1MSRAM  1MSRAM  |
|         |--------|                                                                        |
|1MSRAM       256KSRAM                                               PAL1                   |
|         256KSRAM 256KSRAM              JP2   CN1                   PAL2                   |
|-------------------------------------------------------------------------------------------|
Notes:
       4M_EDO - Silicon Magic SM81C256K16CJ-35 EDO DRAM 66MHz (SOJ40)
       1MSRAM - Cypress CY7C109-25VC 1Meg SRAM (SOJ32)
     256KSRAM - Winbond W24257AJ-15 256k SRAM (SOJ28)
      TEXELFX - 3DFX 500-0004-02 BD0665.1 TMU (QFP208)
      PIXELFX - 3DFX 500-0003-03 F001701.1 FBI (QFP240)
       001604 - Konami Custom (QFP208)
    MC44200FT - Motorola MC44200FT 3 Channel Video D/A Converter (QFP44)
      MACH111 - AMD MACH111 CPLD (Stamped '03161A', PLCC44)
PLCC44_SOCKET - empty PLCC44 socket
       AV9170 - Integrated Circuit Systems Inc. Clock Multiplier (SOIC8)
       AM7201 - AMD AM7201 FIFO (PLCC32)
         PAL1 - AMD PALCE16V8 (stamped 'N676B4', DIP20)
         PAL2 - AMD PALCE16V8 (stamped 'N676B5', DIP20)
         PAL3 - AMD PALCE16V8 (stamped 'N676B2', DIP20)
          JP1 - SLV O O-O MST,TWN (sets board to MASTER TWIN or SLAVE)
          JP2 - SLV O O-O MST (sets board to MASTER or SLAVE)
          CN1 - 96 Pin joining connector to upper PCB
          CN2 - 8-Pin 24kHz RGB OUT
          CN3 - 15-Pin DSUB VGA Video MAIN OUT
          CN4 - 6-Pin Power Connector
          CN5 - 4-Pin Power Connector
          CN6 - 2-Pin Connector (Not Used)
          CN7 - 6-Pin Connector


ROM Usage
---------
          |------ ROM Locations -------|
Game         8X      8Y      16X     16Y
-------------------------------------------
Racing Jam   676A13  -       676A14  -
Racing Jam 2 888A13  -       888A14  -
Thrill Drive 713A13  -       713A14  -

***************************************************************************/
