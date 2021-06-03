/******************************************************************************************************
Color PROM info for Head On 2 / Invinco combo board
Reversed by Guru
Last Changed: 3rd June 2021
---------------------------

HEAD ON uses bytes 0x00-0x0f                    INVINCO uses bytes 0x10-0x1f
-------------------------------------           -------------------------------------
00=NOTHING = 80                                 10=PLAYER'S BULLET = WHITE = E0
01=SELECT SCREEN 1,2,! = WHITE = E0             11=SCORE, POINTS SCORE TABLE TEXT, #SHIPS, 1979 = WHITE = E0
02=INSTRUCTION TEXT = RED = 80                  12=SHIELDS = RED = 80
03=NOTHING = E0                                 13=INVADER ROWS 1 & 5 = WHITE = E0
04=NOTHING = 60                                 14=INVADER ROW 4, (C), SEGA, INVADER BULLETS = CYAN = 60
05=NOTHING = A0                                 15=POINTS TABLE SCREEN ! & =, INVADER ROW 3, PLAYER SHIP = YELLOW = A0
06=NOTHING = 80                                 16=INVADER ROW 2 = RED = 80
07=NOTHING = A0                                 17=PLAYER'S BULLET EXPLODING, MOTHERSHIP = YELLOW = A0
08=OTHER CAR = WHITE = E0                       18=NOTHING = 00
09=(C), 1979 = WHITE = E0                       19=NOTHING = 00
0A=SEGA, GAMEOVER = RED = 80                    1A=NOTHING = 00
0B=EXPLOSION FRAME 3 = WHITE = E0               1B=NOTHING = 00
0C=MAZE = CYAN = 60                             1C=NOTHING = 00
0D=EXPLOSION FRAME 2 = YELLOW = A0              1D=NOTHING = 00
0E=EXPLOSION FRAME 1 = RED = 80                 1E=NOTHING = 00
0F=DOTS, PLAYER 1 CAR = YELLOW = A0             1F=NOTHING = 00

Note some bytes are unused and not zero but why is unknown.


COLOR PROM COLOR SELECTION CHART
--------------------------------
The Vicdual hardware is capable of generating 8 colors maximum with inverse possible for all color combinations.
Note each color combination has 4 choices for exactly the same output. For example red text on a black background can be 80, 81, 90, 91.
The codes within the 4-choices vary from game to game in the PROMs because likely programmers just picked colors from a table printout and selected whatever they saw first.
So one game might use 60 for cyan text on black background and a different game might use 71 for the same cyan text on black background.


       CHAR    BACK    |        CHAR    BACK   |        CHAR    BACK   |        CHAR    BACK   |        CHAR    BACK   |        CHAR    BACK   |        CHAR    BACK   |        CHAR    BACK   |
-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|
00,01  BLACK   BLACK   | 20,21  GREEN   BLACK  | 40,41  BLUE    BLACK  | 60,61  CYAN    BLACK  | 80,81  RED     BLACK  | A0,A1  YELLOW  BLACK  | C0,C1  PINK    BLACK  | E0,E1  WHITE   BLACK  |
02,03  BLACK   GREEN   | 22,23  GREEN   GREEN  | 42,43  BLUE    GREEN  | 62,63  CYAN    GREEN  | 82,83  RED     GREEN  | A2,A3  YELLOW  GREEN  | C2,C3  PINK    GREEN  | E2,E3  WHITE   GREEN  |
04,05  BLACK   BLUE    | 24,25  GREEN   BLUE   | 44,45  BLUE    BLUE   | 64,65  CYAN    BLUE   | 84,85  RED     BLUE   | A4,A5  YELLOW  BLUE   | C4,C5  PINK    BLUE   | E4,E5  WHITE   BLUE   |
06,07  BLACK   CYAN    | 26,27  GREEN   CYAN   | 46,47  BLUE    CYAN   | 66,67  CYAN    CYAN   | 86,87  RED     CYAN   | A6,A7  YELLOW  CYAN   | C6,C7  PINK    CYAN   | E6,E7  WHITE   CYAN   |
08,09  BLACK   RED     | 28,29  GREEN   RED    | 48,49  BLUE    RED    | 68,69  CYAN    RED    | 88,89  RED     RED    | A8,A9  YELLOW  RED    | C8,C9  PINK    RED    | E8,E9  WHITE   RED    |
0A,0B  BLACK   YELLOW  | 2A,2B  GREEN   YELLOW | 4A,4B  BLUE    YELLOW | 6A,6B  CYAN    YELLOW | 8A,8B  RED     YELLOW | AA,AB  YELLOW  YELLOW | CA,CB  PINK    YELLOW | EA,EB  WHITE   YELLOW |
0C,0D  BLACK   PINK    | 2C,2D  GREEN   PINK   | 4C,4D  BLUE    PINK   | 6C,6D  CYAN    PINK   | 8C,8D  RED     PINK   | AC,AD  YELLOW  PINK   | CC,CD  PINK    PINK   | EC,ED  WHITE   PINK   |
0E,0F  BLACK   WHITE   | 2E,2F  GREEN   WHITE  | 4E,4F  BLUE    WHITE  | 6E,6F  CYAN    WHITE  | 8E,8F  RED     WHITE  | AE,AF  YELLOW  WHITE  | CE,CF  PINK    WHITE  | EE,EF  WHITE   WHITE  |
10,11  BLACK   BLACK   | 30,31  GREEN   BLACK  | 50,51  BLUE    BLACK  | 70,71  CYAN    BLACK  | 90,91  RED     BLACK  | B0,B1  YELLOW  BLACK  | D0,D1  PINK    BLACK  | F0,F1  WHITE   BLACK  |
12,13  BLACK   GREEN   | 32,33  GREEN   GREEN  | 52,53  BLUE    GREEN  | 72,73  CYAN    GREEN  | 92,93  RED     GREEN  | B2,B3  YELLOW  GREEN  | D2,D3  PINK    GREEN  | F2,F3  WHITE   GREEN  |
14,15  BLACK   BLUE    | 34,35  GREEN   BLUE   | 54,55  BLUE    BLUE   | 74,75  CYAN    BLUE   | 94,95  RED     BLUE   | B4,B5  YELLOW  BLUE   | D4,D5  PINK    BLUE   | F4,F5  WHITE   BLUE   |
16,17  BLACK   CYAN    | 36,37  GREEN   CYAN   | 56,57  BLUE    CYAN   | 76,77  CYAN    CYAN   | 96,97  RED     CYAN   | B6,B7  YELLOW  CYAN   | D6,D7  PINK    CYAN   | F6,F7  WHITE   CYAN   |
18,19  BLACK   RED     | 38,39  GREEN   RED    | 58,59  BLUE    RED    | 78,79  CYAN    RED    | 98,99  RED     RED    | B8,B9  YELLOW  RED    | D8,D9  PINK    RED    | F8,F9  WHITE   RED    |
1A,1B  BLACK   YELLOW  | 3A,3B  GREEN   YELLOW | 5A,5B  BLUE    YELLOW | 7A,7B  CYAN    YELLOW | 9A,9B  RED     YELLOW | BA,BB  YELLOW  YELLOW | DA,DB  PINK    YELLOW | FA,FB  WHITE   YELLOW |
1C,1D  BLACK   PINK    | 3C,3D  GREEN   PINK   | 5C,5D  BLUE    PINK   | 7C,7D  CYAN    PINK   | 9C,9D  RED     PINK   | BC,BD  YELLOW  PINK   | DC,DD  PINK    PINK   | FC,FD  WHITE   PINK   |
1E,1F  BLACK   WHITE   | 3E,3F  GREEN   WHITE  | 5E,5F  BLUE    WHITE  | 7E,7F  CYAN    WHITE  | 9E,9F  RED     WHITE  | BE,BF  YELLOW  WHITE  | DE,DF  PINK    WHITE  | FE,FF  WHITE   WHITE  |
-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|
These color codes probably apply to all games on vicdual hardware but the actual postion in the PROM and what is affected on screen varies from game to game.

******************************************************************************************************/
