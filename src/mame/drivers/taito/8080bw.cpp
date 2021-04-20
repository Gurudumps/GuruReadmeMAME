/*****************************************************

Shuttle Invader (Omori 1979)
Hardware info by Guru
Last updated: No changes
------------------------

PCB Layout
----------

OEC-3C
|----------------------------------------------------------|
| LM556   DIP16                                            |
|VR1                                                       |
| LM458  SN76477                                           |
|VR2                 5.545MHz                              |
| LM380                                                    |
|                                   4045 4045              |
|                      2.11C   1.13C                       |
|                18MHz                 4027 4027 4027 4027 |
|                      4.11D   3.13D                       |
|               AM8224                 4027 4027 4027 4027 |
|                i8080 DIP24   5.13E                       |
|      DSW                             4027 4027 4027 4027 |
|                                                          |
|SN75452  SN75452      8.11F           4027 4027 4027 4027 |
|      CN2     8216 8216                        CN1        |
|----------------------------------------------------------|
Notes:
      i8080   - Intel 8080 CPU. Clock input 2.000MHz [18/9]. Note the /9 comes from the AM8224
      SN76477 - Texas Instruments SN76477 Complex Sound Generator
      SN75452 - Texas Instruments SN75452 Dual High Speed High Current Peripheral Driver
      8216    - NEC uPB8216 4 Bit Parallel Bi-Directional Bus Driver
      4045    - Texas Instruments TMS4045 1k x 4-bit Static RAM (Work RAM)
      4027    - Motorola MCM4027 4k x 1-bit Dynamic RAM (Video RAM)
      AM8224  - AMD AM8224 Clock Generator and Driver for 8080-Compatible Microprocessors
      DIP16   - DIP16 socket for connection of 16-wire flat cable joining to OEC-4A PCB
      LM556   - Texas Instruments LM556 Dual Timer
      LM458   - Texas Instruments LM458 Low Power Dual Operational Amplifier
      LM380   - Texas Instruments LM380 2.5W Audio Power Amplifier
      CN1     - 11-pin Power Input Connector. Pinout (left to right) is GND,GND,GND,+5V,+5V,+5V,+12V,+12V,+12V,[SPACE],-5V
      CN2     - 25-pin Connector for Control Inputs/Audio Output etc.
      VR1     - Potentiometer (Master Volume)
      VR2     - Potentiometer (volume of other sounds? maybe background sounds?)
      DSW     - 8-position DIP Switch

Additional PCB (more sounds?)
--------------

OEC-4A
|-------------------|
|   VR1  74121      |
| 7400 7404 74S287  |
|75452 CN2 CN1 LM723|
|75452              |
|                   |
|--|    22-WAY   |--|
   |-------------|
Notes: (All IC's shown)
      LM723  - Texas Instruments LM723 Voltage Regulator
      74S287 - Texas Instruments SN74S287 256-bit x 4-bit Bi-Polar PROM at location 2B
      75452  - Texas Instruments SN75452 Dual High Speed High Current Peripheral Driver
      VR1    - Potentiometer connected to LM723 pin 5
      CN1    - DIP16 socket for connection of 16-wire flat cable joining to Main PCB
      CN2    - Empty DIP16 socket
      22-WAY - Single-Sided 22-WAY Card Edge Connector. Has many tracks coming from it, as well as power.
               It's purpose and what it plugs into is unknown.

******************************************************

Cosmo, TDS & Mints, 1979/80?
Hardware info by Guru
Last updated: No changes
------------------------

Notes:
This game runs on modified "original" Taito (3 board) Space Invaders hardware.
There are approx. 70 (or more) wires tied to various parts of the boards, plus
there is an extra board on top of the sound board with a *HUGE* amount of wires
running to it from the main boards. There are 2 EPROMs on the top board that appear
to be for use with colour generation or extra sounds(?) The PROMs on the middle board
have been removed and in their place are a pile of wires that join to the top board.
The remainder of the hardware is just standard Taito Space Invaders..... including
a SN76477 and the discrete components for sound generation.

Note that the sounds and gameplay of Cosmo are VERY different from Space Invaders.
I have put a demo gameplay video on my youtube channel here....
https://www.youtube.com/c/MrTGuru/videos

******************************************************/
