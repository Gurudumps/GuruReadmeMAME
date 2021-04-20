/***************************************************************************

SNK/Alpha 68000 N based board games
Hardware info by Guru
Last updated: No changes
------------------------


Kyros no Yakata
Alpha Denshi, 1986

PCB Layout
----------
Main Board

(no PCB number)
|----------------------------------------------------------|
|                                                          |
| 0.1T                                              24MHz  |
|                                                          |
| 15.3T                  5814                              |
|         PROMG.4R                             SW1  |   | 1|
| 16.5T   PROMR.5R PROMH.5P 5814                    |   | 8|
|         PROMB.6R PROML.6P                         |   | W|
| 17.7T                                        8511 |   | A|
|                             2016 2016             |   | Y|
| 18.9T   9.9S 8.9R           2016 2016             |   |  |
|                                                   |   |  |
| 19.11T                            68000 2016 2.10C 4.10A |
|              14.12R  12.12N             2016             |
| 20.13T           13.12P  11.12M              1.13C 3.13A |
|CN                                                        |
|----------------------------------------------------------|
Notes:
         68000 clock - 6.000MHz [24/4]
                2016 - 2kx8 SRAM
                5814 - 2kx8 SRAM
                  CN - 18-pin flat cable connector joining to sound PCB
                   | - ALPHA-INPUT84 custom ceramic module (x2)
                 SW1 - 8-position DIP Switch
               VSync - 60Hz
               HSync - 15.20kHz
                8511 - Alpha 8511 Microcontroller at location 7C. '8511' is silkscreened on the PCB.
                       Clock input 3.000MHz [24/8] (measured on pin 5).
                       The chip is pin-compatible with Motorola MC68705U3, Motorola MC6805U2
                       and Hitachi HD6805U1. The 4k MC68705U3 dump in MAME is from a bootleg PCB.

Note from Guru: The bootleg 4k MCU dump was written to a genuine
Motorola MC68705U3 microcontroller and tested on the original Alpha
Denshi Kyros no Yakata PCB and works. Since the bootleg PCB is
visually the same this suggests the bootleggers copied the PCB 1:1
including the HD6805U1 MCU data then adapted it for the 68705U3 with
minimal changes.
*******************************
romcmp -d *.bin
Comparing 2 files....
kyros_68705u3.bin [3/4]      kyros_mcu.bin [1/2]      99.902344%
kyros_68705u3.bin [4/4]      kyros_mcu.bin [2/2]      88.183594%
*******************************

Sound Board
-----------

SOUND BOARD NO.60MC01
|---------------------|
| 40174   324  UPC1181|
| 4013     VOL  VOL   |
| YM3014  324        6|
|                    W|
| YM2203  AY-3-8910  A|
|                    Y|
|         AY-3-8910   |
|                     |
| DIP28               |
|                     |
| 2.1F 2114           |
|      2114           |
| 1.1D          16MHz |
|                     |
|  Z80                |
|CN                   |
|---------------------|
Notes:
      Z80 clock - 4.000MHz [16/4]. The actual chip is a NEC D780C-1
AY-3-8910 clock - 2.000MHz [16/8]
   YM2203 clock - 2.000MHz [16/8]
         YM3014 - Yamaha YM3014 DAC. Clock input 1.33333MHz [16/12]
        UPC1181 - Power AMP IC
            324 - LM324 Quad Op Amp
           2114 - 1kx4 SRAM
           40xx - 4000-series logic chips
             CN - 18-pin flat cable connector joining to main PCB
          DIP28 - Empty socket

PCB Pinout
----------

       18-WAY Connector (Main)
           Parts   Solder
         -----------------
          +5V A1   B1 +5V
          +5V A2   B2 +5V
        1P UP A3   B3 2P DOWN
      1P DOWN A4   B4 2P RIGHT
     1P RIGHT A5   B5 2P LEFT
      1P LEFT A6   B6 2P BUTTON 1
  1P BUTTON 1 A7   B7 -
  1P BUTTON 2 A8   B8 -
           -  A9   B9 COIN 1
    1P START A10   B10 COIN 2
       2P UP A11   B11 2P BUTTON 2
       GREEN A12   B12 -
        BLUE A13   B13 2P START
         RED A14   B14 -
        SYNC A15   B15 -
         GND A16   B16 GND
         GND A17   B17 GND
         GND A18   B18 GND

6-WAY Connector (Sound)
    Parts   Solder
  -----------------
  +12V A1   B1 +12V
     - A2   B2 -
   +5V A3   B3 +5V
  SPK+ A4   B4 SPK+
  SPK- A5   B5 GND
   GND A6   B6 GND


***************************************************************************/
