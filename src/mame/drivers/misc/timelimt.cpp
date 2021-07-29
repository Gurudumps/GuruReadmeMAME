/************************************************************************************

Time Limit (Chuo Co. Ltd, 1983)
Hardware info by Guru
Last Updated: 29th July 2021
----------------------------

Top board
---------

PCB Number: CHUO. L.H.CO.,LTD T.L102-GAME

       |------------|                 |--------------|
|------|------------|-----------------|--------------|--------|
|           CN1                             CN2         CN3   |
| D780C-1(1)                                                  |
|                                                             |
|                                                             |
|                                    TL1.IC6                  |
|                                                             |
|           555                      TL2.IC11                 |
|                                                             |
|                                    TL3.IC19                 |
|                                                             |
|                                         2114      TL4.IC28  |
|                                                             |
|                                         2114      TL5.IC34  |
|                                                             |
|                                                             |
|                                                             |
|                                                             |
|                                                             |
|                                                             |
|  SW1                                        D780C-1(2)      |
|                                                             |
|                                      5MHz   AY3-8910        |
|                82S123.IC57                                  |
|                                             AY3-8910        |
|                                     MB3712             VOL  |
|                                                             |
|-------------------|      22-WAY       |---------------------|
                    |-------------------|

Notes:
      D780C-1(1) - NEC D780C-1, Z80 compatible CPU, used as the main CPU. Clock unknown but D780C-1 has maximum clock 4MHz.
                   Bottom PCB has an 18.432MHz crystal so it could be 18.432/6 (3.072MHz) or 5/2 (2.5MHz) using the top 5MHz crystal.
      D780C-1(2) - NEC D780C-1, Z80 compatible CPU, used as the audio CPU. Clock unknown.
                   Clock could be the same as the main CPU 18.432/6 (3.072MHz) or it could be using the 5MHz crystal with a
                   possible clock of 5/4 (1.25MHz) or 5/2 (2.5MHz)
            2114 - 1k x4-bit Static RAM (sound program work RAM)
             SW1 - 8-position DIP switch
             555 - 555 Timer
     82S123.IC57 - Signetics 82S123 Bi-polar PROM
          MB3712 - Fujitsu MB3712 Audio power amplifier
        AY3-8910 - General Instruments AY-3-8910 3-voice programmable sound generator (PSG). Clock unknown but will surely
                   be using the 5MHz crystal, so clock is likely 5/4 (1.25MHz) or 5/2 (2.5MHz)
         CN1/CN2 - Flat cables joining to lower PCB
             CN3 - 10 pin power connector
           TL1-3 - 2764 EPROMs (sprites)
           TL4-5 - 2732 EPROMs (audio program)


Bottom board
------------

PCB Number: unknown

       |------------|                 |--------------|
|------|------------|-----------------|--------------|--------|
|           CN1                             CN2         CN3   |
|                                                             |
|                                                    TL12.IC7 |
|                                                             |
|                                                    TL13.IC15|
|                                                             |
|                                                             |
|                                                             |
|                                                             |
|                                                             |
|                                                             |
|                                                    18.432MHz|
|                                                             |
|                                                             |
|                                                             |
|                                                             |
|                                                             |
|                                                             |
|                                                             |
|                                                             |
|                                                             |
|                                                             |
|                                                             |
|                                                             |
|                                                             |
|                                                             |
|                                                             |
|                                                             |
|                                                             |
|                                                             |
|                                                             |
|                                                             |
|                                                             |
|-------------------------------------------------------------|
Notes:
         TL12-13 - 2732 EPROMs (tiles)
         CN1/CN2 - Flat cables joining to lower PCB
             CN3 - 10 pin power connector


************************************************************************************/

