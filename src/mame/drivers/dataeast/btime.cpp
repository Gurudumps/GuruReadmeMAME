/***************************************************************************

Zoar, Data East, 1982
Hardware info by Guru
Last updated: 21st April 2021
-----------------------------

Top PCB

DE-0123
|---------------------------------|
|UPC1181H   SW2         Z17.15B   |
|   VOL     SW1                  |-|
|                       Z16.13B  | |
|          2128         Z15.12B  | |
|                         X      | |
|        AY-3-8910        X      |-|
|           AY-3-8910    DIP24    |
|                    6502         |
|1                      Z13.6B    |
|8                               |-|
|W                      Z12.4B   | |
|A                               | |
|Y                      Z11.3B   | |
|                                |-|
|  555                  Z10.1B    |
|---------------------------------|
Notes:
      6502      - clock 500.0kHz [12/24]
      AY-3-8910 - clock 3.00MHz(both) [12/4]
      2128      - 2k x8 SRAM == 6116
      X         - Position for a socket, but not populated with anything
      DIP24     - Empty socket. There are rumours that this socket would hold test mode code or something else.
                  It's possible a factory test ROM did exist for factory-only testing as this was common with
                  several manufacturers at the time. However the PCB came from the factory with this socket empty
                  so it would be extremely unlikely to find a PCB with that socket populated.
      SW1/2     - 8 position DIP switches
                  To set cocktail mode, set DIP#1 SW7 & 8 OFF. The player has 2 buttons only and the screen will flip between PL1 & PL2
                  To set upright mode, set DIP#1 SW7 & 8 ON. The player has 3 buttons and the screen will not flip between PL1 & PL2
                  DIP Notes:
                           SW1 #5 is unused
                           SW1 #6 must remain OFF otherwise the game will not boot-up and just displays garbage.
                           There is no TEST mode.
                           SW2 #5 is listed in the manual as "Panel B". This enables or removes the 2nd button.
                           There were two types of panels supplied, either cocktail or upright cabs. The cocktail panel
                           doesn't have 3 buttons. The 2 buttons are air-air missile and air-ground missile/bomb and
                           there's an extra button for accelerate on the 3 button panel. On the 2 button panel, button 1 is
                           the air-air and air-ground missile/bomb weapon button and is auto selected based on the enemies on
                           screen and the 2nd button is wired to accelerate. There is no button for manually selecting
                           the missiles/bombs.

Bottom PCB

DE-0122
|---------------------------------|
|    Z08.15L     PB3  PB0   2128  |
|    Z07.14L     2128  |-------| |-|
|                2128  |       | | |
|    Z06.12L           | CPU-7 | | |
|                      |       | | |
|    Z05.11L           |       | |-|
|                      |-------|  |
|    Z04.9L                       |
|    Z03.8L               Z19.7B  |
|                    AM93425     |-|
|1   Z02.6L  AM93425 AM93425     | |
|0   Z01.5L  AM93425 AM93425 PB2 | |
|W   Z00.3L  AM93425  PB4   PB1  | |
|A   Z21.2L    PB4           555 |-|
|Y   Z20.1L                12MHz  |
|---------------------------------|
Notes:
      CPU-7     - Epoxy block containing a 6502 clocked at 1.5MHz [12/8]
                  and some 74xx logic chips (fully-reversed, schematic available on my website)
      2128      - 2k x8 SRAM == 6116
      AM93425   - 1k x1 SRAM == 2125
      PB*       - PALs (not dumped, registered types)
      Z19/20/21 - PROMs, type Harris 7603 (32 bytes), compatible with 82S123
      VSync     - 57.4358Hz
      HSync     - 15.6235kHz

***************************************************************************/
