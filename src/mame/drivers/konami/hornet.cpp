/***************************************************************************

Konami 'Hornet' Hardware, Konami, 1997-2000
Hardware info by Guru
Last updated: 22nd April 2021
-----------------------------

Known games on this hardware include....

Game                             (C)      Year
----------------------------------------------
Gradius 4 : Fukkatsu             Konami   1998
NBA Play by Play                 Konami   1998
Teraburst                        Konami   1998
Thrill Drive                     Konami   1999
Silent Scope                     Konami   1999
Silent Scope 2                   Konami   2000


Quick hardware overview:

GN715 CPU Board:
----------------
IBM PowerPC 403GA at 32MHz (main CPU)
Motorola MC68EC000 at 16MHz (sound CPU)
Konami K056800 (MIRAC), sound system interface
Ricoh RF5c400 sound chip

GN715 GFX Board:
----------------
Analog Devices ADSP-21062 SHARC DSP at 36MHz
Konami 0000037122 (2D Tilemap)
Konami 0000033906 (PCI bridge)
3DFX 500-0003-03 (Voodoo) FBI with 2MB RAM
3DFX 500-0004-02 (Voodoo) TMU with 4MB RAM

GQ871 GFX Board:
----------------
Analog Devices ADSP-21062 SHARC DSP at 36MHz
Konami 0000037122 (2D Tilemap)
Konami 0000033906 (PCI bridge)
3DFX 500-0009-01 (Voodoo 2) FBI with 2MB RAM
3DFX 500-0010-01 (Voodoo 2) TMU with 4MB RAM


Specific game hardware configurations:
-------------------------------------

Game              KONAMI ID  CPU PCB    GFX Board(s)  notes
----------------------------------------------------------------------
Gradius 4         GX837      GN715(A)   GN715(B)
NBA Play By Play  GX778      GN715(A)   GN715(B)
Teraburst         GX715      GN715(A)   GN715(B)      GN680(E) I/O board
Thrill Drive      GE713UF    GN715(A)   GN715(B)      GN676-PWB(H)A LAN PCB
Silent Scope      GQ830      GN715(A)   2x GN715(B)
Silent Scope 2    GQ931      GN715(A)   2x GQ871(B)   GQ931(H) LAN PCB


PCB Layouts
-----------

Top Board
GN715 PWB(A)A
|--------------------------------------------------------------|
| SP485CS CN10       CN11        CN9          JP8 JP9 JP10 JP11|
|CN19                                                    PAL1  |
|CN21       JP13 PAL2             68EC000          EPROM.7S    |
|   NE5532       PAL3                                      CN12|
|           JP12  JP16    DRM1M4SJ8                        CN13|
|   NE5532                            MASKROM.9P    MASKROM.9T |
|     SM5877 JP15         RF5C400                              |
|CN18                                 MASKROM.12P   MASKROM.12T|
|     SM5877     16.9344MHz                                    |
|CN14            SRAM256K             MASKROM.14P   MASKROM.14T|
|                                                              |
|CN16            SRAM256K             MASKROM.16P   MASKROM.16T|
|  ADC12138                                                    |
|             056800            JP5                            |
|                               JP4                            |
|                      MACH111  JP3                |---------| |
|   TEST_SW                         EPROM.22P      |         | |
|CN1                   DRAM16X16                   |PPC403GA | |
|                                   EPROM.25P      |         | |
|                                                  |         | |
|                      DRAM16X16    EPROM.27P      |---------| |
| 4AK16                                                     JP6|
|                                                              |
|CN3                                                           |
| 0038323  PAL4                                       7.3728MHz|
| E9825    058232           CN2                                |
|                                                     50.000MHz|
|    RESET_SW               CN5                    JP1  JP2    |
|M48T58Y-70PC1  CN4                 CN6               64.000MHz|
|--------------------------------------------------------------|
Notes:
      DRM1M4SJ8 - Fujitsu 81C4256 256Kx4 DRAM (SOJ24)
       SRAM256K - Cypress CY7C199 32kx8 SRAM (SOJ28)
      DRAM16X16 - Fujitsu 8118160A-60 16megx16 DRAM (SOJ42)
  0038323 E9825 - SOIC8 (Secured PIC?). I've seen a similar chip in the security cart of System573
  M48T58Y-70PC1 - ST Timekeeper RAM
        RF5C400 - Ricoh RF5C400 PCM 32Ch, 44.1 kHz Stereo, 3D Effect Spatializer, clock input 16.9344MHz
         056800 - Konami Custom (QFP80)
         058232 - Konami Custom Ceramic Package (SIL14)
       ADC12138 - National Semiconductor ADC12138 A/D Converter, 12-bit + Serial I/O With MUX (SOP28)
        MACH111 - AMD MACH111 CPLD (Stamped 'N676A1', PLCC44)
        68EC000 - Motorola MC68EC000, running at 16.0MHz (64/4)
       PPC403GA - IBM PowerPC 403GA CPU, clock input 32.0MHz (QFP160)
       SM5877AM - Nippon Precision Circuits 3rd Order 2-Channel D/A Converter (SOIC24)
          4AK16 - Hitachi 4AK16 Silicon N-Channel Power MOS FET Array (SIL10)
       NE5532AN - Philips, Dual Low-Noise High-Speed Audio OP Amp (DIP8)
        SP485CS - Sipex SP485CS Low Power Half Duplex RS485 Transceiver (DIP8)
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
           JP14 - WDT       O O
           JP15 -      MONO O-O O SURR
           JP16 -      HIGH O O O MID (N/C LOW)
    CN1 to  CN3 - Multi-pin Flat Cable Connector
            CN4 - Multi-pin Connector for Network PCB
            CN5 - Multi-pin Flat Cable Connector
            CN6 - 96-Pin To Lower PCB, Joining Connector
    CN7 to  CN8 - Not used
    CN9 to CN11 - 6-Pin Power Connectors
           CN19 - USB Connector
           CN21 - 5-Pin Analog Controls Connector (Tied to USB Connector via the Filter Board)
           CN18 - RCA Mono Audio OUT
    CN14 & CN16 - RCA Stereo Audio OUT


ROM Usage
---------
             |------------------------------- ROM Locations ---------------------------------------|
Game         27P     25P     22P     16P     14P     12P     9P      16T     14T     12T  9T  7S
----------------------------------------------------------------------------------------------------
Gradius 4    837C01  -       -       837A09  837A10  -       778A12  837A04  837A05  -    -   837A08
NBA P/Play   778A01  -       -       778A09  778A10  778A11  778A12  778A04  778A05  -    -   778A08
Teraburst    -       715l02  715l03  715A09  715A10  -       778A12  715A04  715A05  -    -   715A08
Thrill Drive 713AB01 -       -       713A09  713A10  -       -       713A04  713A05  -    -   713A08
S/Scope      830B01  -       -       830A09  830A10  -       -       -       -       -    -   830A08
S/Scope 2    931D01  -       -       931A09  931A10  931A11  -       931A04  -       -    -   931A08


Bottom Board
GN715 PWB(B)A
|--------------------------------------------------------------|
|CN4        CN2    CN8               CN6                    CN5|
|JP1                 |---------|              4M_EDO   4M_EDO  |
|                    |         |     |----------|              |
|  4M_EDO 4M_EDO     | TEXELFX |     |          |              |
|                    |         |     | PIXELFX  |       4M_EDO |
|  4M_EDO 4M_EDO     |         |     |          |       4M_EDO |
|                    |---------|     |          | |--------|   |
|  4M_EDO 4M_EDO                     |----------| |KONAMI  |   |
|CN3                                50MHz JP7     |33906   |   |
|  4M_EDO 4M_EDO                          JP6     |        |   |
|                       256KSRAM 256KSRAM         |--------|   |
|CN7                                                           |
|         AV9170                     1MSRAM 1MSRAM             |
| MC44200                                                      |
|                       256KSRAM 256KSRAM                      |
|                                    1MSRAM 1MSRAM             |
|  |-------|                                    MASKROM.24U    |
|  |KONAMI |  MACH111  |-------------|              MASKROM.24V|
|  |37122  |           |ANALOG       |   1MSRAM 1MSRAM         |
|  |       |           |DEVICES      |                         |
|  |-------|       JP5 |ADSP-21062   |   36.00MHz              |
|1MSRAM                |SHARC        |   1MSRAM 1MSRAM         |
|                      |             |                         |
|1MSRAM                |             |                         |
|           256KSRAM   |-------------|          MASKROM.32U    |
|1MSRAM     256KSRAM                                MASKROM.32V|
|           256KSRAM     PAL1  PAL2            JP4             |
|1MSRAM                                                        |
|           JP2                 CN1            JP3             |
|--------------------------------------------------------------|
Notes:
      4M_EDO - Silicon Magic SM81C256K16CJ-35 EDO DRAM 66MHz (SOJ40)
      1MSRAM - Cypress CY7C109-25VC 1Meg SRAM (SOJ32)
    256KSRAM - Winbond W24257AJ-15 256K SRAM (SOJ28)
     TEXELFX - 3DFX 500-0004-02 BD0665.1 TMU (QFP208)
     PIXELFX - 3DFX 500-0003-03 F001701.1 FBI (QFP240)
  0000037122 - Konami Custom (QFP208)
   MC44200FT - Motorola MC44200FT 3 Channel Video D/A Converter (QFP44)
     MACH111 - AMD MACH111 CPLD (Stamped 'N715B1', PLCC44)
      AV9170 - Integrated Circuit Systems Inc. Clock Multiplier (SOIC8)
        PAL1 - AMD PALCE16V8 (stamped 'N676B4', DIP20)
        PAL2 - AMD PALCE16V8 (stamped 'N676B5', DIP20)
         JP1 -    SCR O O-O TWN
         JP2 - MASTER O-O O SLAVE
         JP3 -    16M O O-O 32M
         JP4 -    32M O-O O 16M
         JP5 -  ASYNC O O-O SYNC
         JP6 -    DSP O O-O ADCK
         JP7 -    MCK O-O O SCK
         CN1 - 96 Pin To Lower PCB, Joining Connector
         CN2 - 8-Pin RGB OUT
         CN3 - 15-Pin DSUB VGA Video MAIN OUT
         CN4 - 6-Pin Power Connector
         CN5 - 4-Pin Power Connector
         CN6 - 2-Pin Connector (Not Used)
         CN7 - 15-Pin DSUB VGA Video MAIN OUT
         CN8 - 6-Pin Connector (Not Used)

ROM Usage
---------
             |------ ROM Locations -------|
Game         24U     24V     32U     32V
-------------------------------------------
Gradius 4    837A13  837A15  837A14  837A16
NBA P/Play   778A13  778A15  778A14  778A16
Teraburst    715A13  715A15  778A14  715A16
Thrill Drive 713A13  -       713A14  -
S/Scope      830A13  -       830A14  -
S/Scope 2    -       -       -       -      (no ROMs, not used)


Teraburst uses a different variation of the I/O board used in Operation: Thunder Hurricane (see gticlub.cpp). Analog inputs are controlled by
two CCD cameras, one from each gun. This specific variation uses a K056800 which normally acts as a sound interface controller. Perhaps this
either sends analog inputs to the main pcb or isn't used at all. No network connection is involved in this setup as this board directly connects
to the main pcb via joining connector.

GN680 PWB(E)403381B
|------------------------------------------|
|CN11  CN12    CN8      CN9    CN10  DSW(4)|
|                 NRPS11     NRPS11        |
|                                          |
|                        LM1881   LM1881   |
|                                          |
|LED(x4)                                   |
|                                          |
|           68EC000FN16  8464              |
|    RESET_SW            8464              |
|32MHz                           715A17.20K|
|8464                 PAL(002962)          |
|      056800         PAL(002961)          |
|   PAL(056787A)      PAL(002960)          |
|   CN1                                    |
|------------------------------------------|
Notes:
  68EC000 @ 16MHz (32/2)
  CN11/12 - Power connectors
  CN8/9   - 6-pin analog control connectors (to CCD cameras)
  CN1     - Lower joining connector to main pcb
  NRPS11  - Idec NRPS11 PC Board circuit protector
  LM1881  - Video sync separator (DIP8)
  056800  - Konami Custom (QFP80)


LAN PCB: GQ931 PWB(H)      (C) 1999 Konami
------------------------------------------

2 x LAN ports, LANC(1) & LANC(2)
1 x 32.0000MHz Oscillator

     HYC2485S  SMC ARCNET Media Transceiver, RS485 5Mbps-2.5Mbps
8E   931A19    Konami 32meg masked ROM, ROM0 (compressed GFX data)
6E   931A20    Konami 32meg masked ROM, ROM1 (compressed GFX data)
12F  XC9536    Xilinx  CPLD,  44 pin PLCC, Konami no. Q931H1
12C  XCS10XL   Xilinx  FPGA, 100 pin PQFP, Konami no. 4C
12B  CY7C199   Cypress 32kx8 SRAM
8B   AT93C46   Atmel 1K serial EEPROM, 8 pin SOP
16G  DS2401    Dallas Silicon Serial Number IC, 6 pin SOP

Note: This PCB does more than just networking. The serial eeprom is used as a means to prevent region change.
The timekeeper region has to match the serial eeprom. The two mask roms serve as GFX roms as the game "downloads"
the data from those two roms.


GFX PCB: GQ871 PWB(B)A (C) 1999 Konami
--------------------------------------

There are no ROMs on the two GFX PCBs, all sockets are empty. They are located on the LAN PCB.
Prior to the game starting there is a message saying downloading data.

Jumpers set on GFX PCB to main monitor:
4A   set to TWN (twin GFX PCBs)
37D  set to Master

Jumpers set on GFX PCB to scope monitor:
4A   set to TWN (twin GFX PCBs)
37D  set to Slave

1x 64.0000MHz
1x 36.0000MHz  (to 27L, ADSP)

21E  AV9170           ICS, Clock synchroniser and multiplier
27L  ADSP-21062       Analog Devices SHARC ADSP, 512k flash, Konami no. 022M16C
15T  0000033906       Konami Custom, 160 pin PQFP
19R  W241024AI-20     Winbond, 1Meg SRAM
22R  W241024AI-20     Winbond, 1Meg SRAM
25R  W241024AI-20     Winbond, 1Meg SRAM
29R  W241024AI-20     Winbond, 1Meg SRAM
19P  W241024AI-20     Winbond, 1Meg SRAM
22P  W241024AI-20     Winbond, 1Meg SRAM
25P  W241024AI-20     Winbond, 1Meg SRAM
29P  W241024AI-20     Winbond, 1Meg SRAM
18N  W24257AJ-15      Winbond, 256K SRAM
14N  W24257AJ-15      Winbond, 256K SRAM
18M  W24257AJ-15      Winbond, 256K SRAM
14M  W24257AJ-15      Winbond, 256K SRAM
28D  000037122        Konami Custom, 208 pin PQFP
33E  W24257AJ-15      Winbond, 256K SRAM
33D  W24257AJ-15      Winbond, 256K SRAM
33C  W24257AJ-15      Winbond, 256K SRAM
27A  W241024AI-20     Winbond, 1Meg SRAM
30A  W241024AI-20     Winbond, 1Meg SRAM
32A  W241024AI-20     Winbond, 1Meg SRAM
35A  W241024AI-20     Winbond, 1Meg SRAM
7K   500-0010-01      3DFX, Texture processor
16F  SM81C256K16CJ-25 Silicon Magic 100MHz EDO RAM, 4Meg
13F  SM81C256K16CJ-25 Silicon Magic 100MHz EDO RAM, 4Meg
9F   SM81C256K16CJ-25 Silicon Magic 100MHz EDO RAM, 4Meg
5F   SM81C256K16CJ-25 Silicon Magic 100MHz EDO RAM, 4Meg
16D  SM81C256K16CJ-25 Silicon Magic 100MHz EDO RAM, 4Meg
13D  SM81C256K16CJ-25 Silicon Magic 100MHz EDO RAM, 4Meg
9D   SM81C256K16CJ-25 Silicon Magic 100MHz EDO RAM, 4Meg
5D   SM81C256K16CJ-25 Silicon Magic 100MHz EDO RAM, 4Meg
9P   500-0009-01      3DFX, Pixel processor
10U  SM81C256K16CJ-25 Silicon Magic 100MHz EDO RAM, 4Meg
7U   SM81C256K16CJ-25 Silicon Magic 100MHz EDO RAM, 4Meg
3S   SM81C256K16CJ-25 Silicon Magic 100MHz EDO RAM, 4Meg
3R   SM81C256K16CJ-25 Silicon Magic 100MHz EDO RAM, 4Meg
27G  XC9536           Xilinx, CPLD, Konami no. Q830B1
21C  MC44200FT        Motorola, 3 Channel video D/A converter

***************************************************************************/
