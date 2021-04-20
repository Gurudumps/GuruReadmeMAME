/***************************************************************************

Championship Bowling, Romstar Inc., 1989
Hardware info by Guru
Last updated: No changes
------------------------

This game runs on Seta Hardware.

PCB Layout
----------

P0-052A
|---------------------------------------------------------|
| MB3712     SW1        AB001009  AB001007  AB001005      |
|                 X1-007                                  |
|        VOL                          AB001006  AB001004  |
|                                                         |
|                       AB001008                          |
|                                                         |
|        4050                                             |
|                                                         |
|      CN1                             X1-002A            |
|                                                         |
|J                                                3V_BATT |
|A                        2063         X1-001A            |
|M                                                        |
|M                                                  SW2   |
|A         16MHz                                          |
|                            4520                         |
|                                                         |
|                                                  6116   |
|       X1-010                                            |
|                                                         |
|      |---------------ROM-Sub-Board----------------|     |
|  3404|                                            |     |
|      |    DIP32                                   |     |
|      |                                          AB001001|
|      |          6116                       Z80    |     |
|      |                                            |     |
|      |                                            |     |
|------|--------------------------------------------|-----|


ROM Sub Board (plugs into DIP32 socket on main board)
-------------

P0-047A
|--------------------------------------------|
|                                            |
|     AB003003           AB002003            |
|                                            |
|              AB003002            AB002002  |
|                                            |
| 74HC139                                    |
|--------------------------------------------|

Notes:
      Z80 clock     - 4.000MHz [16/4]
      X1-010 clocks - pin1 16.000MHz, pin2 8.000MHz, pin79 4.000MHz, pin80 2.000MHz
      VSync         - 57.5Hz
      2063          - Toshiba TMM2063AP-10 8K x8 SRAM (DIP28)
      6116          - Hitachi 6116LP-2 2K x8 SRAM (DIP24)
      MB3712        - Fujitsu MB3712 5.7 Watt Power AMP (SIP8)
      4050          - Toshiba TC4050BP Non-Inverting Hex Buffer / Converter (DIP16)
      4520          - Hitachi HD14520 Dual Up Counter (DIP16)
      3404          - Japan Radio Co. JRC3404 Low Power Quad Op AMP (DIP8)
      SW1           - Reset Switch
      SW2           - 2-Position Switch (when ON, powers 6116 RAM near it)
      3V_BATT       - Sony CR2032 3V Lithium Coin Battery
      DIP32         - Empty DIP32 socket for connection of ROM Sub Board
      CN1           - 4-pin Connector

      Custom IC's -
                    X1-001A (SDIP64) \ Sprite Generators
                    X1-002A (SDIP64) /
                    X1-007  (SDIP42)   Video DAC? (connected to RGB output)
                    X1-010  (QFP80)    Sound Chip, 16Bit PCM

      ROMs -
            Filename        Type                Use
            -----------------------------------------------
            AB001001.U1    27C1000 (DIP32)      Z80 Program

            AB001004.U7    512K MaskROM (DIP28) \
            AB001005.U9    512K MaskROM (DIP28) | GFX
            AB001006.U15   512K MaskROM (DIP28) |
            AB001007.U22   512K MaskROM (DIP28) /

            AB001008.U26   82S147 PROM (DIP20)
            AB001009.U27   82S147 PROM (DIP20)

            AB002002.2-2   2M MaskROM (DIP32)   \
            AB002003.2-3   2M MaskROM (DIP32)   | PCM Samples (Connected to X1-010 via a sub-board)
            AB003002.3-2   2M MaskROM (DIP32)   |
            AB003003.3-3   2M MaskROM (DIP32)   /



                          Main Jamma Connector
          Solder Side            |             Parts Side
------------------------------------------------------------------
             GND             | A | 1 |             GND
             GND             | B | 2 |             GND
             +5V             | C | 3 |             +5V
             +5V             | D | 4 |             +5V
             -5V             | E | 5 |             -5V
             +12V            | F | 6 |             +12V
------------ KEY ------------| H | 7 |------------ KEY -----------
       Coin Counter 2        | J | 8 |      Coin Counter 1
       Coin Lock Out 2       | K | 9 |      Coin Lock Out 1
         Speaker (-)         | L | 10|        Speaker (+)
                             | M | 11|
        Video Green          | N | 12|        Video Red
        Video Sync           | P | 13|        Video Blue
        Service SW           | R | 14|        Video GND
        Tilt Switch          | S | 15|        Test Switch
        Coin Switch 2        | T | 16|        Coin Switch 1
        Player 2 Start       | U | 17|        Player 1 Start
  #2 Trackball X Direction*  | V | 18|      #1 Trackball X Direction
  #2 Trackball Y Direction*  | W | 19|      #1 Trackball Y Direction
  #2 Trackball X Clock*      | X | 20|      #1 Trackball X Clock
  #2 Trackball Y Clock*      | Y | 21|      #1 Trackball Y Clock
  Player 2 Hook Right*       | Z | 22|      Player 1 Hook Right
  Player 2 Hook Left*        | a | 23|      Player 1 Hook Left
                             | b | 24|        Player Select
                             | c | 25|
                             | d | 26|
             GND             | e | 27|             GND
             GND             | f | 28|             GND

* Cocktail Mode only.

 Standard 6 pin Trackball connector

  Pin  Wire  Function
------------------------------
   1 | BLK | Ground
   2 | RED | +5 Volts DC
   3 | YEL | Y Clock
   4 | GRN | Y Direction
   5 | BLU | X Direction
   6 | PUR | X Clock


***************************************************************************

Doraemon no Eawase Montage (prototype)
Sunsoft / Epoch / Fujiko - Shogakukan - TV Asahi

This PCB was obtained from a collector who was invited to purchase some inventory when Sunsoft closed its U.S. offices in 2001.
Among the items he acquired was a small JAMMA cabinet with no keys to open its locked door.
When the lock was drilled out, this game was discovered inside the cabinet.

PCB Layout
----------

P0-094A Sun Electronics Corporation
|---------------------------------------------------------|
| MB3712     SW2         U27-01    U22   U15   U9   U7    |
|                 X1-007 U26-01                           |
|      VOL                                                |
|                                                         |
|         DSW2(8)  DSW1(8)                                |
|                                                         |
|        4050                                             |
|                                                         |
|                                      X1-002A            |
|      CN1  X1-004                                        |
|J                                                3V_BATT |
|A                        2063         X1-001A            |
|M                                                        |
|M                                                   SW3  |
|A         14.31818MHz                                    |
|                            4520                         |
|                                                         |
|                                                   2128  |
|       X1-010                                            |
|                                                         |
|                                                         |
| 3404  U51   U43                                         |
|                                                         |
|                                          Z8400AB1   U1  |
|---------------------------------------------------------|

Notes:
      2063          - Toshiba TMM2063AP-10 8K x8 SRAM (DIP28)
      2128          - MSM2128-15RS 2K x8 SRAM (DIP24)
      MB3712        - Fujitsu MB3712 5.7 Watt Power AMP (SIP8)
      4050          - Toshiba TC4050BCP Non-Inverting Hex Buffer / Converter (DIP16)
      4520          - Hitachi HD14520 Dual Up Counter (DIP16)
      3404          - Japan Radio Co. JRC3404 Low Power Quad Op AMP (DIP8)
      SW2           - Reset Switch
      SW3           - 2-Position Switch (when ON, powers 6116 RAM near it)
      3V_BATT       - 3V Lithium Coin Battery
      CN1           - 10-pin Connector

      Custom IC's -
                    X1-001A (SDIP64) \ Sprite Generators
                    X1-002A (SDIP64) /
                    X1-004  (SDIP52)   Inputs [4 wires going to small board with DSWA(10) & DSWB(10)]
                    X1-007  (SDIP42)   Video DAC
                    X1-010  (QFP80)    Sound Chip, 16Bit PCM

      ROMs -
            Filename  Type                          Use
            -----------------------------------------------
            U1        27C1001 UV EEPROM (FDIP32W)   Z80 Program

            U7        27C1001 UV EEPROM (FDIP32W) \
            U9        27C1001 UV EEPROM (FDIP32W) | GFX
            U15       27C1001 UV EEPROM (FDIP32W) |
            U22       27C1001 UV EEPROM (FDIP32W) /

            U26-01    82S147 PROM (DIP20)
            U27-01    82S147 PROM (DIP20)

            U43       27C4001 UV EEPROM (DIP32)   \
            U51       27C4001 UV EEPROM (DIP32)   / PCM Samples

***************************************************************************/
