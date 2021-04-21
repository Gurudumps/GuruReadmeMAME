/***************************************************************************

Konami M2 Hardware Overview, Konami, 1997-1998
Hardware info by Guru
Last updated: 22nd April 2021
-----------------------------

This hardware is 3DO-based with two IBM Power PC CPUs.

There were only 5 known games on this hardware. They include....

Game                                                 Year    CD Codes                                  Konami Part#
-------------------------------------------------------------------------------------------------------------------
Battle Tryst                                         1998    636JAC02
Evil Night                                           1998    810UBA02
Hell Night (alt. Region title, same as Evil Night)   1998    810EAA02
Heat Of Eleven '98                                   1998    703EAA02
Tobe! Polystars                                      1997    623JAA02                                  003894
Total Vice                                           1997    639UAC01, 639EAD01, 639JAD01, 639AAB01


PCB Layouts
-----------

Top Board

[M]DFUP0882ZAM1
FZ-20B1AK 7BKSA03500 (sticker)
|---------------------------------------------------|
|            |--------------------|    |----------| |
|            |--------------------|    |----------| |
|    2902             |---|  |--------|             |
| AK4309 CY2292S|---| |*2 |  |  3DO   |  |-------|  |
|               |*1 | |---|  |        |  |IBM    |  |
|        18MHz  |---|        |        |  |POWERPC|  |
|                            |        |  |602    |  |
|                            |--------|  |-------|  |
|    D4516161  D4516161                             |
|                                 |---|  |-------|  |
|DSW                    |-------| |*3 |  |IBM    |  |
|                       |       | |---|  |POWERPC|  |
|    D4516161  D4516161 |  *4   |        |602    |  |
|                       |       |        |-------|  |
|                       |-------|                   |
|---------------------------------------------------|
Notes:
      AK4309  - Asahi Kasei Microsystems AK4309-VM Digital to Analog Converter (SOIC24)
      2902    - Japan Radio Co. JRC2902 Quad Operational Amplifier (SOIC14)
      CY2292S - Cypress CY2292S Three-PLL General-Purpose EPROM Programmable Clock Generator (SOIC16)
                XTALIN - 18.000MHz, XTALOUT - 18.000MHz, XBUF - 18.000MHz, CPUCLK - 25.2000MHz
                CLKA - , CLKB -  , CLKC - 16.9345MHz, CLKD -
      3DO     - 9701 B861131 VY21118- CDE2 3DO 02473-001-0F (QFP208)
      *1      - [M] JAPAN ASUKA 9651HX001 044 (QFP44)
      *2      - Motorola MC44200FT
      *3      - [M] BIG BODY 2 BU6244KS 704 157 (QFP56)
      *4      - Unknown BGA chip (Graphics Engine, with heatsink attached)
      DSW     - 2 position DIP switch


Bottom Board

PWB403045B (C) 1997 KONAMI CO., LTD.
|----------------------------------------------------------|
|           CN16    |--------------------|    |----------| |
|LA4705             |--------------------|    |----------| |
|       NJM5532D                    9.83MHz                |
|                                   19.66MHz               |
|J                |--------|   93C46.7K                    |-|
|A                | 058232 |                BOOTROM.8Q     | |
|M                |--------|   |------|                    | |
|M       |------|              |003461|                    | |
|A       |056879|              |      |                    | |CN15
|        |      |              |------|                    | |
| TEST   |------|                                          | |
|                                                          | |
|   DSW                                                    | |
|                                                          |-|
|                                                          |
|----------------------------------------------------------|
Notes:
      056879     - Konami custom IC, location 10E (QFP120)
      058232     - Konami custom ceramic flat pack IC, DAC?
      003461     - Konami custom IC, location 11K (QFP100)
      CN16       - 4 pin connector for CD-DA in from CDROM
      CN15       - Standard (PC-compatible) 40 pin IDE CDROM flat cable connector and 4 pin power plug connector,
                   connected to Panasonic CR-583 8-speed CDROM drive.
      LA4705     - LA4705 Power Amplifier
      DSW        - 8 position dip switch
      BOOTROM.8Q - 16MBit MASKROM. Location 8Q (DIP42)
                   Battle Tryst       - 636A01.8Q
                   Evil Night         - 636A01.8Q
                   Heat Of Eleven '98 - 636A01.8Q
                   Polystars          - 623B01.8Q
                   Total Vice         - 623B01.8Q
      93C46.7K   - 128bytes x8bit Serial EEPROM. Location 7K (DIP8)
                   NOTE! There is very mild protection to stop game-swapping. It is based on the information in the EEPROM
                   being the same as the Time Keeper NVRAM.
                   For example, in Evil Night, the first line of the NVRAM in hex is 474E38313000000019984541410002A601FEFE01
                   Looking at it in ascii:  GN810.....EAA.......
                   Hex 474E383130 = GN810
                   1998 = the year of the game
                   Hex 454141 = EAA (the version = europe english)
                   The numbers after this appear to be unimportant (at least with regards to swapping games anyway).
                   All the other data after the first line is used for high scores tables etc.
                   The important part is that the data in the EEPROM should be the same as the NVRAM, but the EEPROM data
                   is byte-swapped! If the two don't match, the check on 7K or the NVRAM will fail and the PCB will reboot
                   forever.

Some lower boards have two connectors underneath for a protection sub-board or sound board. These are detailed below....

GX636-PWB(A) (C) 1997 KONAMI CO., LTD.
|-------------------------|
| CN4 CN3  |---------|    |
|          |---------|CN2 |
|          PAL            |
|                         |
|             NVRAM       |
|                         |
|          |---------|    |
|          |---------|CN1 |
|-------------------------|
Notes:
      NVRAM  - With Heat of Eleven '98, uses Dallas DS1643 NonVolatile TimeKeeping RAM
               With Battle Tryst, uses ST M48T58Y-70PC1 NonVolatile TimeKeeping RAM
               With Poly Stars, a sub board is not used at all
      PAL    - PALCE16V8Q, stamped 'X636A1'
      CN3    - 4-pin sound cable tied to CN16 (CD-DA Input) on main lower board
      CN4    - 4-pin sound cable tied to CDROM analog audio output connector

GQ639 PWB 403327(A)
|-----------------------------------------|
|       639JAA02.xx                       |
|                                         |
|                                         |
|                   |---------|           |
|                   |---------|           |
|                                         |
|                                         |
|               PAL                       |
|                                         |
|                                         |
|                                         |
|                                         |
|                   |---------|           |
|      YMZ280B      |---------|           |
|                                         |
|      16.9344MHz                         |
|                                         |
|                                         |
|-----------------------------------------|
Notes:
      This PCB is used on Total Vice only.
      639JAA02.xx - 8MBit Sound data ROM (DIP42)
      PAL         - PAL16V8H stampd '       '


PWB0000047043 (C) 1998 KONAMI CO., LTD.
|-----------------------------------------|
| CN4     CN3                             |
|                                         |
|                                         |
|                   |---------|           |
|                   |---------|           |
|        16.9344MHz              M48T58Y  |
|                      PAL                |
|          YMZ280B                        |
|                                         |
|                                         |
|                                         |
|                                         |
|                   |---------|           |
|                   |---------|           |
|                                         |
|                                         |
|                                         |
|              810A03.16H                 |
|-----------------------------------------|
Notes:
      This PCB is used on Evil Night/Hell Night only.
      810A03.16H - 16MBit Sound data ROM (DIP42, byte mode)
      PAL        - PAL16V8H stamped 'N810B1'
      M48T58Y    - ST M48T58Y-70PC1 NonVolatile TimeKeeping RAM
      CN3        - 4-pin sound cable tied to CN16 (CD-DA Input) on main lower board
      CN4        - 4-pin sound cable tied to CDROM analog audio output connector

***************************************************************************/
