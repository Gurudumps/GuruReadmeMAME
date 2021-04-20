/*****************************************************************************

Casio Loopy
Hardware info by Guru
Last updated: No changes
------------------------

PCB Layout
----------

JCM631-MA1M C
|---------------------------------------------------------|
|    CB    CC              CD         CE       CF      CG |
|--|                                                      |
   |                                        BA10339F      |
|--| 15218  |--|     CXA1645M                           CH|
|           |  |                A1603C                    |
|    15218  |  |                                          |
|           |  |                                          |
|BIOS.LSI352|  |                                          |
|           |  |                      21MHz               |
| |--------||  |   |------|                 SW1           |
| |NEC     ||  |   |SH7021|      |----------|             |
| |CDT109  ||CA|   |      |      |          |             |
| |        ||  |   |------|      |CASIO     |             |
| |--------||  |                 |RH-7500   |             |
|           |  |                 |5C315     |          |--|
| |-------| |  |                 |          |          |
| |CASIO  | |  |                 |----------|          |--|
| |RH-7501| |  |  HM514260                                |
| |5C350  | |  |                               HM62256    |
| |-------| |  |                                          |
| 6379      |--|    SW301                      HM62256    /
|--------|                        HM538123               /
         |                                              /
         |                                             /
         |--------------------------------------------/

Notes:
      Connectors
      ----------
      CA - Cartridge connector
      CB - Power Input connector
      CC - Composite Video and Audio Out connector
      CD - Printer Cassette Motor connector
      CE - Printer Data connector
      CF - Printer Head connector
      CG - Paper Sensor connector
      CH - Joystick connector
      Connectors on the back of the main unit include RCA audio (left/right), RCA composite video,
      24V DC power input and contrast knob.
      On top of the main unit, there is a reset button, on/off slide switch, a big eject button, a
      button to cut off stickers after they're printed, a button to open the hatch where the sticker
      cassette is located and a red LED for power.

      IC's
      ----
      BIOS2.LSI352- Hitachi HN62434 512k x8 (4MBit) maskROM (SOP40)
      CDT-109     - NEC CDT109 (QFP120). This is some kind of CPU, the package looks a bit
                    like a V60. The BIOS is tied directly to it.
      RH-7500     - Casio RH-7500 5C315 (QFP208). This is the graphics generator chip.
      RH-7501     - Casio RH-7501 5C350 (QFP64). This is probably the sound chip.
      SH7021      - Hitachi HD6437021TE20 SuperH RISC Engine SH-1 CPU with 32k internal maskROM (TQFP100)
                    The internal ROM (BIOS1) is not dumped.
      CXA1645M    - Sony CXA1645M RGB Encoder (RGB -> Composite Video) (SOIC24)
      A1603C      - NEC uPA1603C Compound Field Effect Power Transistor Array (DIP16)
      HM514260    - Hitachi HM514260 256k x 16 DRAM (SOJ40)
      HM538123    - Hitachi HM538123 128k x8 multi-port Video DRAM with 256-word x8 serial access memory (SOJ40)
      HM62256     - Hitachi HM62256 32k x8 SRAM (SOP28)
      BA10339F    - Rohm BA10339F Quad Comparitor (SOIC14)
      6379        - NEC uPD6379 2-channel 16-bit D/A convertor for digital audio signal demodulation (SOIC8)
      15218       - Rohm BA15218 Dual High Slew Rate, Low Noise Operational Amplifier (SOIC8)

      Other
      -----
      SW1        - Reset Switch
      SW301      - ON/OFF Slide Switch


Carts
-----
There are reports of 11 existing carts.
Only 6 are available so far.

XK-401: Anime Land
XK-402: HARIHARI Seal Paradise
XK-403: Dream Change
XK-404: Nigaoe Artist
XK-501: Wanwan Aijou Monogatari
XK-502: PC Collection

The rest are not dumped yet.....

Lupiton's Wonder Palette
Magical Shop
Chakra-kun no Omajinai Paradise
XK-503: Little Romance
XK-504: I want a room in Loopy Town


Inside the carts
----------------

Carts 401 - 404:
PCB 'JCM632-AN1M C'
1x 16M maskROM (SOP44)
1x 8k x8 SRAM (SOP28)
1x 3V coin battery (CR2032)

Cart 501:
PCB 'Z544-1 A240427-1'
1x 16M maskROM (SOP44)
1x 8k x8 SRAM (SOP28)
1x OKI MSM6653A Voice Synthesis IC with 544Kbits internal maskROM (SOP24)
1x Rohm BA15218 High Slew Rate, Low Noise, Dual Operational Amplifier (SOIC8)
1x 74HC273 logic chip
1x 3V coin battery (CR2032)

Cart 502:
PCB 'Z545-1 A240570-1'
1x 16M maskROM (SOP44)
1x 32k x8 SRAM (SOP28)
1x 74HC00 logic chip
1x 3V coin battery (CR2032)

******************************************************************************/
