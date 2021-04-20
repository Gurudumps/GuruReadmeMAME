/***************************************************************************

Arkanoid, Taito 1986
Hardware info by Guru
Last updated: No changes
------------------------

PCB Layout
----------

Note an original Taito Arkanoid PCB is approximately 10" square and is
painted white. The copper traces are not visible. The part type and
location of each component is printed in green on the PCB on top of the
white paint.

The following MCU images were tested on an original Arkanoid PCB using sets
'arkanoid', 'arkanoidu' and 'arkanoiduo' and work as expected.
(1) MCU image with CRC 0x389a8cfb [<- this is a deprotected copy of the original Taito A75__06 MCU code]
(2) MCU image with CRC 0x515d77b6 [<- this is a blackbox-reverse engineered bootleg MCU written by pirates]

An MCU found on a Tournament Arkanoid PCB was an unprotected type MC68705P3
and when read the CRC matched (1). So we assumed the MCUs for Arkanoid and
Tournament Arkanoid are the same.... or are at least interchangeable and work.
This turns out not to be the case, in retrospect.

"Tetris (D.R. Korea)" in MAME is a hack on an original Arkanoid PCB.
The hack can be undone and returned to Arkanoid simply by removing the mod
wires on the YM2149, replacing the ROMs with Arkanoid ROMs and replacing
the PC030CM which was removed. A working Arkanoid 68705 MCU is also required.
The above 'tested' images can be used.


J1100075A
K1100180A
K1100181A (ROMSTAR version added sticker)
  |---------------------------------------------|
  |                VOLUME  TL7700   TMM2018     |
|-|         MB3731                              |
|                                               |
|P                                              |
|O                                              |
|W          DSWA(8)  A75-09.IC22                |
|E                                              |
|R         YM2149F   A75-08.IC23                |
|                                               |
|-|                  A75-07.IC24                |
  |                                             |
  |                                             |
|-|                                 TMM2016     |
|                                               |
|          PC030CM                  TMM2016     |
|                                               |
|               JP4 JP3                         |
|2                                              |
|2         A75_06.IC14                          |
|W 48CR-1                                       |
|A                                              |
|Y                                              |
|          TMM2016                         12MHz|
|  48CR-1                                       |
|  48CR-1  A75_10.IC16    A75_05.IC62  MB112S146|
|                                               |
|-|        A75_01-1.IC17  A75_04.IC63  MB112S146|
  |48CR-1                                       |
  |                       A75_03.IC64           |
  |        Z80                                  |
  |---------------------------------------------|
Notes:
      Z80         - Zilog Z0840006 CPU. Clock input 6.000MHz (12/2)
      YM2149F     - Yamaha YM2149F software-controlled sound generator (SSG). Clock input 1.5MHz (12/8)
      A75_06.IC14 - Motorola MC68705P5 micro-controller. Clock input 3.000MHz (12/4).
      A75_*       - 27C256 EPROMs labelled 'A75 xx'. xx = 01, 03, 04, 05 etc. See ROM loading in the src for exact ROM usage.
      A75-0*      - MMI 63S241 bipolar PROMs. Compatible with MB7116, 7621, DM74S571N etc
      TMM2018     - Toshiba TMM2018 2k x8 SRAM (DIP24)
      TMM2016     - Toshiba TMM2016 2k x8 SRAM (DIP24)
      MB112S146   - Fujitsu MB112S146. Some kind of custom graphic decoder/shifter (DIP28)
      MB3731      - Fujitsu MB3731 18W BTL audio power amplifier (SIP12)
      PC030CM     - Taito custom ceramic package (SIP20)
      48CR-1      - Taito custom resistor array (SIP10)
      TL7700      - Texas Instruments TL7700CP supply voltage supervisor i.e. reset chip (DIP8)
      JP3         - 2-pin jumper. This is open but the game works even if it is closed.
      JP4         - 2-pin jumper. Must be closed to allow coin-up through PC030CM otherwise coin-up does not work.
                    Note the G connector is the 22-way edge connector.
                    The Japanese manual states (translated to English).....
                    ********
                    The coin-SW of this Main PC Board does not work without wiring coin meter to
                    coin meter pins of the G-connector.
                    You need to modify as follows in case coin meter is not connected to Main PC Board.
                    Coin System A ..... Wire jumper JP4 on Main PC Board. Coin meter not used.
                    Coin System B ..... Wire jumper JP3 on Main PC Board. Coin meter used.
                    ********

      Measured Syncs
      --------------
      HSync       - 15.625kHz
      VSync       - 59.185Hz


      POWER connector H
      -----------------
      1    Ground
      2    Ground
      3    Ground
      4    Ground
      5    +5V
      6    +5V
      7    +5V
      8    NC
      9    +12V
      10   Post
      11   NC
      12   NC


      22-way edge connector G
      -----------------------

           PARTS         SOLDER
           --------------------
                 |-----|
          GROUND | 1 A | GROUND
       VIDEO RED | 2 B | VIDEO GROUND
     VIDEO GREEN | 3 C | VIDEO BLUE
     VIDEO SYNC  | 4 D | NC
     SOUND OUT + | 5 E | SOUND OUT -
            POST | 6 F | POST
              NC | 7 H | NC
     COIN SW (A) | 8 J | COIN SW (B)
  COIN METER (A) | 9 K | COIN METER (B)
COIN LOCKOUT (A) |10 L | COIN LOCKOUT (B)
      SERVICE SW |11 M | TILT SW
         START 1 |12 N | START 2
             NC* |13 P | NC*
             NC* |14 R | NC*
        1P RIGHT |15 S | 2P RIGHT \
         1P LEFT |16 T | 2P LEFT  / Connect 15/16/S/T to the spinner left/right connections
      [1P RH UP] |17 U | [2P RH UP]
    [1P RH DOWN] |18 V | [2P RH DOWN]
   [1P RH RIGHT] |19 W | [2P RH RIGHT]
    [1P RH LEFT] |20 X | [2P RH LEFT]
   1P SERVE/FIRE |21 Y | 2P SERVE/FIRE
       [1P WARP] |22 Z | [2P WARP]
                 |-----|
[] - these are present and readable on arkanoid pcb hardware, but the game never reads or uses these
* - these NC pins are used for the main joysticks on certain other games
   (bubble bobble etc) which use the 22 pin taito connector, but are N/C and
   do not connect anywhere on the arkanoid pcb.
Note about spinner controller
-----------------------------

This game requires a geared spinner to operate correctly. A trackball or other optical
controller or home-made spinner built from a PC mouse will work but the player moves too
slowly and the game is unplayable. The Taito geared spinner moves the optical wheel *very*
fast to ensure the player moves fast enough to follow and return the ball easily. The ratio of
the control knob rotation to the optical wheel rotation is 1:20 so for one rotation of the
control knob the optical wheel rotates 20 times. The optical quadrature wheel has 24 slots.
Generally a half-turn of the control knob is enough to move the player across the full screen.

The spinner connections are....
Pin 1 - Left
Pin 2 - +5V
Pin 3 - Ground
Pin 4 - Right

These pins are listed from the Japanese Taito manual and have been tested to be correct with
the real Taito Arkanoid spinner.
The US ROMSTAR manual lists pin 4 as left and pin 1 as right. This information is probably
incorrect. Pins 2 and 3 are the same.

Spinner PCB Layout
------------------
J9000024A
K9000060A
|-----------|
|   OPTO    |
|          S|
|           |
|          S|
|           |
|  POWER    |
|-4-3-2-1---|
Notes:
      OPTO  - Optical transmitter/receiver on other side of PCB
      POWER - Power input connector. Pin 1 is on the right.
      S     - Screw positions to show orientation of the PCB with reference to the power connector pin 1


DIP Switches
+-----------------------------+--------------------------------+
|FACTORY DEFAULT = *          |  1   2   3   4   5   6   7   8 |
+----------+------------------+----+---+-----------------------+
|          |*1 COIN  1 CREDIT | OFF|OFF|                       |
|COINS     | 1 COIN  2 CREDITS| ON |OFF|                       |
|          | 2 COINS 1 CREDIT | OFF|ON |                       |
|          | 1 COIN  6 CREDITS| ON |ON |                       |
+----------+------------------+----+---+---+                   |
|LIVES     |*3                |        |OFF|                   |
|          | 5                |        |ON |                   |
+----------+------------------+--------+---+---+               |
|BONUS     |*20000 / 60000    |            |OFF|               |
|1ST/EVERY | 20000 ONLY       |            |ON |               |
+----------+------------------+------------+---+---+           |
|DIFFICULTY|*EASY             |                |OFF|           |
|          | HARD             |                |ON |           |
+----------+------------------+----------------+---+---+       |
|GAME MODE |*GAME             |                    |OFF|       |
|          | TEST             |                    |ON |       |
+----------+------------------+--------------------+---+---+   |
|SCREEN    |*NORMAL           |                        |OFF|   |
|          | INVERT           |                        |ON |   |
+----------+------------------+------------------------+---+---+
|CONTINUE  | WITHOUT          |                            |OFF|
|          |*WITH             |                            |ON |
+----------+------------------+----------------------------+---+


***************************************************************************

Hexa (alt.)
Hardware info by Guru
Last updated: No changes
------------------------

main hardware consists of.....

sub board with Z80 x2, 2 ROMs and a scratched 18 pin chip (probably a PIC)

main board has....
12MHz xtal
ay3-8910
8 position DSW x1
ROMs x4
6116 SRAM x3
82S123 PROMs x3

***************************************************************************/
