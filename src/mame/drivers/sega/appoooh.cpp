/***************************************************************************

    Robo Wres 2001, Sega, 1986
    Hardware info by Guru
    Last updated: 20th April 2021
    -----------------------------

    Top Board
    =========
    PCB No: 834-5990 SEGA 1986
    CPU   : NEC D315-5179 (Z80?)
    SOUND : OKI MSM5205 + Resonator 384kHz, SN76489 (x3)
    RAM   : MB8128 (x1)
    OTHER : Volume Pot (x2, labelled VOICE and SOUND)
    PALs  : (x1, near EPR-7542.15D, labelled 315-5056)
    PROMs : (x1, near EPR-7543.12B, labelled PR7571)
    DIPSW : 8 position (x1)
    DIPSW Info:

                    1   2   3   4   5   6   7   8
-----------------------------------------------------------------------------------
Coin1
    1Coin 1Credit   OFF OFF OFF
    2Coin 1Credit   ON  OFF OFF
    3Coin 1Credit   OFF ON  OFF
    4Coin 1Credit   ON  ON  OFF
    1Coin 2Credit   OFF OFF ON
    1Coin 3Credit   ON  OFF ON
    1Coin 4Credit   OFF ON  ON
    2Coin 3Credit   ON  ON  ON
-----------------------------------------------------------------------------------
Coin2
    1Coin 1Credit               OFF OFF
    1Coin 2Credit               ON  OFF
    2Coin 1Credit               OFF ON
    3Coin 1Credit               ON  ON
-----------------------------------------------------------------------------------
Demo Sound
    Off                                 OFF
    On                                  ON
-----------------------------------------------------------------------------------
Not Used                                    OFF
-----------------------------------------------------------------------------------
Language
    Japanese                                    OFF
    English                                     ON
-----------------------------------------------------------------------------------


    PCB Edge Connector Pinout
    -------------------------

    Parts               Solder
    Side                Side
    --------------------------------
    GND         A  1    GND
    GND         B  2    GND
    COIN 2      C  3    -
    1P HOLD     D  4    2P HOLD
    1P PUNCH    E  5    2P PUNCH
    -           F  6    -
    1P START    H  7    2P START
    1P KICK     J  8    2P KICK
    1P UP       K  9    2P UP
    1P DOWN     L  10   2P DOWN
    1P LEFT     M  11   2P LEFT
    1P RIGHT    N  12   2P RIGHT
    COUNTER 1   P  13   COIN 1
    COUNTER 2   R  14   SERVICE
    RED         S  15   GREEN
    BLUE        T  16   SYNC
    -           U  17   -
    +5          V  18   +5
    +5          W  19   +5
    +12         X  20   +12
    SPEAKER 1   Y  21   SPEAKER 2
    SPEAKER GND Z  22   SPEAKER GND


    Controls via 8-way Joystick and 3 buttons (Punch, Hold, Kick)




    ROMs  :                 Byte C'sum
    ----------------------------------------
    EPR-7540.13D    27C256  6A13h
    EPR-7541.14D      "     2723h
    EPR-7542.15D      "     01E7h
    EPR-7543.12B      "     6558h
    PR7571.10A      82S123  0A9Fh


    Lower Board
    ===========

    PCB No: 837-5992
    XTAL  : 18.432MHz
    RAM   : MB8128 (x2), SONY CXK5813D-55 (x2)
    PALs  : (x3, labelled 315-5054, 315-5053, 315-5203)
    PROMs : (x2, one near EPR-7547.7D labelled PR7572, one near EPR-7544.7H labelled PR7573)


    ROMs  :                         Byte C'Sum
    -------------------------------------
    EPR-7544.7H    27C256  \        ED1Ah
    EPR-7545.6H      "      |       E6CAh
    EPR-7546.5H      "      |       55EAh
    EPR-7547.7D      "      | Gfx   EA3Fh
    EPR-7548.6D      "      |       5D1Fh
    EPR-7549.5D      "     /        16D1h

    PR7572.7F      82S129           06F1h  \ Both have
    PR7573.7G      82S129           06F1h  / identical contents

***************************************************************************/
