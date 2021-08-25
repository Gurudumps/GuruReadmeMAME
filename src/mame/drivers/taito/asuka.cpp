/***************************************************************************
Bonze Adventure, Taito, 1988
Hardware info by Guru
Last Update: 25th August 2021


PCB Layout
----------

MAIN BOARD J1100144A K1100330A
Sticker: K1100330B JIGOKU MEGURI
|-------------------------------------------------------------------|
|MB3735    YM2610                         Z0840004PSC     B41-03.IC1|
|VOL       B41-04.IC48                    B41_13.IC20               |
|                          |-------|      CXK5864                   |
|   4556  TL074  YM3016F   |TAITO  |          |-------|             |
|Y                         |TC0140SYT   16MHz | TAITO |             |
|              TMM2063     |-------|          |TC0100SCN   CXK58256 |
|      TL074   TMM2063                        |-------|             |
|                         TC0110PCR                        CXK58256 |
|       TC0070RGB                                 26.868MHz         |
|J                2018       |---------|                  B41-02.IC6|
|A                2018       | TAITO   |                            |
|M                2018       | PC0900J |                            |
|M       PC050CM  2018       |         |                            |
|A                           |---------|                            |
|            |-------------|                                        |
|            | B41_05.IC43 |                                        |
|            |-------------|          12MHz          B41-01.IC15    |
|  48CR-1(x6)                                                       |
|       |------------------|          B41_12.IC25    B41_10.IC15    |
|       |       68000      |                                  MB3771|
|       |------------------|          B41_11-1.IC26  B41_09-1.IC17  |
|                 B41-08.IC45  B41-06.IC34                          |
|      SWB  SWA   B41-07.IC46            TMM2064        TMM2064     |
|-------------------------------------------------------------------|
Notes:
        MB3735 - Fujitsu MB3735 20W BTL mono power amplifier
        MB3771 - Fujitsu MB3771 power supply monitor IC. This is used to provide the power-on reset.
       SWA/SWB - 8-position DIP switch
          4556 - 4556 dual operational amplifier
         TL074 - Texas Instruments TL074 JFET Low-Noise Quad OP Amp
           VOL - 5k volume pot
      CXK58256 - Sony CXK58256 32k x8-bit static RAM
       CXK5864 - Sony CXK5864 8k x8-bit static RAM
       TMM2064 - Toshiba TMM2064 8k x8-bit static RAM
          2018 - Toshiba TMM2018 2k x8-bit static RAM or equivalent Motorola MCM2016 or HM3-65728 or Sony CXK5816
         68000 - Motorola MC68000P12 CPU. Clock input 8.000MHz [16/2]
   Z0840004PSC - Zilog Z0840006PSC Z80 CPU. Clock input 4.000MHz [16/4]
        YM2610 - Yamaha YM2610 sound chip. Clock input 8.000MHz [16/2]
      YM3016-F - Yamaha Y3016-F 2-Channel Serial & Binary Input Floating D/A Converter (SOIC16)
                 Clock input 2.66666MHz (16/2/3, source = pin 64 of YM2610)
     TC0070RGB - 5-bit RGB Video Mixer/RGB DAC (Ceramic Flat Pack SIL25)
       PC050CM - Taito PC050CM custom SIL28 ceramic module for coins, coin lockout and coin counters
     TC0140SYT - Taito custom TC0140SYT sound communication IC
     TC0110PCR - Taito custom palette generator IC
     TC0100SCN - Taito custom tilemap generator IC
       PC0900J - Taito custom sprite generator IC
        48CR-1 - Custom resistor array used for inputs
             Y - 3 pin connector for 2nd speaker output (mono only)
         HSync - 15.55385kHz
         VSync - 60.054Hz
   B41-01.IC15 - MN234000 mask ROM (main program)
    B41-02.IC6 - MN234000 mask ROM (sprites)
    B41-03.IC1 - MN234000 mask ROM (tiles)
   B41-04.IC48 - MN234000 mask ROM (ADPCM samples)
   B41_05.IC43 - Taito TC0030CMD hybrid custom IC containing uPD78C11 MCU with 4k x8-bit mask ROM, uPD27C64 8k x8-bit EPROM, uPD4464 8k x8-bit static RAM & logic glue.
                 Clock input 12.000MHz. This chip is known as a 'C-Chip'. Only the EPROM differs between different games.
   B41-06.IC34 - MMI PAL16L8 marked 'B41-06'
   B41-07.IC46 - MMI PAL16L8 marked 'B41-07'
   B41-08.IC45 - MMI PAL20L8 marked 'B41-08'
 B41_09-1.IC17 - Toshiba TMM27512 64k x8-bit EPROM (main program)
   B41_10.IC15 - Toshiba TMM27512 64k x8-bit EPROM (main program)
 B41_11-1.IC26 - Toshiba TMM27512 64k x8-bit EPROM (main program)
   B41_12.IC25 - Toshiba TMM27512 64k x8-bit EPROM (main program)
   B41_13.IC20 - Toshiba TMM27512 64k x8-bit EPROM (sound program)

***************************************************************************/
