/***********************************************************************************

Sega Model 1 I/O Board (used with all Model 2 vanilla games)
Hardware info by Guru

I/O PCB
-------

837-8950-01 (C) SEGA 1992
|-------------------------------------------|
| CN6                           J3   J2     |
|                                        CN5|
|                      DSW3       LED1      |
|                                           |
| SW7    |---------|                        |
|  32MHz |SEGA     |   DSW1                 |
| SW6    |315-5338A|                        |
|        |         |                        |
| SW5    |---------|   DSW2                 |
|                                        CN1|
| SW4      MB8464                           |
|          14869.25                         |
|   3771                                    |
|          Z80                              |
|   93C45                                   |
|                               PC910 PC910 |
|   LED2                           J1       |
|      M6253                                |
| CN3              CN2          CN4     TL1 |
|-------------------------------------------|
Notes:
      315-5338A - Sega Custom (QFP100)
      Z80       - Zilog Z0840004PSC Z80 CPU, running at 4.000MHz (DIP40, clock 32 / 8)
      14869.25  - ST Microelectronics M27C512 64k x8 EPROM (DIP28, labelled 'EPR-14869')
                  There is an alternative revision B 'EPR-14869B' also
      MB8464    - Fujitsu MB8464 8k x8 SRAM (DIP28)
      93C45     - 128bytes x8 EEPROM (DIP8)
      M6253     - OKI M6253 (DIP18)
      3771      - Fujitsu MB3771 Master Reset IC (DIP8)
      PC910     - Sharp PC910 opto-isolator (x2, DIP8)
      DSW1/2/3  - 8-position Dip Switch (x3)
      J1        - Jumper, set to 2-3
      J2, J3    - Jumper, both set to 1-2
      CN1       - 50 pin connector (joins to control panel assembly)
      CN2       - 26 pin connector (joins to foot pedal assembly)
      CN3       - 10 pin connector for power input
      CN4       - 6 pin connector (joins to sound PCB -> CN2, used for sound communication from Main PCB to Sound PCB)
      CN5       - 12 pin connector for input/output controls
      CN6       - 12 pin connector (joins to steering feedback motor PCB)
      TL1       - Connector for network optical cable link
      SW7       - Push Button Service Switch
      SW6       - Push Button Test Switch
      SW5, SW4  - Push Button Switches (purpose unknown)


Sega Model 2 Feedback Driver Board
Hardware info by Guru
---------------------

PCB Layout
----------

SJ25-0207-01
838-10646 (Daytona)
838-11661 (Sega Rally)
|---------------------------------------------|
|             7-SEG-LED 7-SEG-LED             |
|                                             |
|   315-5296      315-5296                    |
|                 DSW(8)                      |
|    M6253                      MB3759        |
|                                             |
|           GAL.IC23  ROM.IC12                |
|                                             |
|     Z80                                     |
|8MHz   MB3771 MB3771  8464                   |
|---------------------------------------------|
Notes:
      Z80      - clock 4.000MHz [8/2]
      8464     - 8k x8 SRAM
      ROM.IC12 - EPR-16488A for Daytona
                 EPR-17891  for Sega Rally
      GAL      - Lattice GAL16V8B stamped 315-5625 common to both Daytona and Sega Rally
      DSW(8)   - 8-Position dip switch, all OFF
      M6253    - Oki M6253
      315-5296 - Sega Custom QFP100
      plus several transistors, resistors, a couple of relays and 8 connectors.


Model 2A ROM board
Hardware info by Guru
---------------------

SEGA 1994
MODEL2 A-CRX ROM BD
837-10850-01 (common 2A ROM board number)
838-12885-02 (sticker for DOA EXPORT VER. A)
|--------------------------------------------------------------|
|                     CN1           CN2                 CN3    |
|SOUND4     PROGRAM0  PROGRAM2              TEXTURE0   TEXTURE2|
|SOUND3     PROGRAM1  PROGRAM3              TEXTURE1   TEXTURE3|
|SOUND2                  DATA6     DATA2    TGP0       TGP1    |
|SOUND1   COPRO0         DATA7     DATA3    TGP2       TGP3    |
|SOUND0       COPRO1     DATA4     DATA0    TGP4       TGP5    |
|                        DATA5     DATA1    TGP6       TGP7    |
|    CN6              CN4                               CN5    |
|--------------------------------------------------------------|

Jumpers for DOA
---------------
JP1: 1-2   JP5: 2-3  JP9: 1-2   JP13: 1-2  JP17: 1-2  JP21: 1-2  JP25: 1-2
JP2: 1-2   JP6: 2-3  JP10: 2-3  JP14: 2-3  JP18: 1-2  JP22: 1-2  JP26: 2-3
JP3: 2-3   JP7: 2-3  JP11: 1-2  JP15: 2-3  JP19: 2-3  JP23: 1-2  JP27: 2-3
JP4: 2-3   JP8: 2-3  JP12: 1-2  JP16: 2-3  JP20: 1-2  JP24: 1-2

ROMs for DOA (Location = .xx)
|---|------------------------------------------------------------------------------------------------------------------------------|
|D  |SOUND0.30  SOUND1.31  SOUND2.32  SOUND3.36  SOUND4.37  PROGRAM0.12 PROGRAM1.13 PROGRAM2.14 PROGRAM3.15 COPRO0.28   COPRO1.29  |
|E  |EPR-19328  MPR-19329  MPR-19330  MPR-19331  MPR-19332  EPR-19383A  EPR-19384A  -           -           -           -          |
|A A|------------------------------------------------------------------------------------------------------------------------------|--------|
|D L|DATA0.10   DATA1.11   DATA2.8    DATA3.9    DATA4.6    DATA5.7    DATA6.4    DATA7.5    TEXTURE0.24 TEXTURE1.25 TEXTURE2.26 TEXTURE3.27|
|  I|MPR-19318  MPR-19319  MPR-19316  MPR-19317  MPR-19314  MPR-19315  MPR-19312  MPR-19313  MPR-19320   MPR-19321   -           -          |
|O V|---------------------------------------------------------------------------------------|-----------------------------------------------|
|R E|TGP0.16    TGP1.20    TGP2.17    TGP3.21    TGP4.18    TGP5.22    TGP6.19    TGP7.23   |
|   |MPR-19322  MPR-19325  MPR-19323  MPR-19326  MPR-19324  MPR-19327  -          -         |
|---|---------------------------------------------------------------------------------------|


Jumpers for Air Walkers
-----------------------
JP1: 1-2   JP5: 2-3  JP9: 1-2   JP13: 1-2  JP17: 2-3  JP21: 1-2  JP25: 1-2
JP2: 1-2   JP6: 2-3  JP10: 2-3  JP14: 1-2  JP18: 1-2  JP22: 1-2  JP26: 2-3
JP3: 2-3   JP7: 2-3  JP11: 1-2  JP15: 2-3  JP19: 2-3  JP23: 1-2  JP27: 2-3
JP4: 2-3   JP8: 2-3  JP12: 1-2  JP16: 1-2  JP20: 1-2  JP24: 1-2

ROMs for Air Walkers (Location = .xx)
|---|------------------------------------------------------------------------------------------------------------------------------|
|A  |SOUND0.30  SOUND1.31  SOUND2.32  SOUND3.36  SOUND4.37  PROGRAM0.12 PROGRAM1.13 PROGRAM2.14 PROGRAM3.15 COPRO0.28   COPRO1.29  |
|I W|IC30_30F2  MPR-19243  MPR-19242  MPR-19241  MPR-19240  IC12_FE7E   IC13_D539   -           -           -           -          |
|R A|------------------------------------------------------------------------------------------------------------------------------|--------|
|  L|DATA0.10   DATA1.11   DATA2.8    DATA3.9    DATA4.6    DATA5.7    DATA6.4    DATA7.5    TEXTURE0.24 TEXTURE1.25 TEXTURE2.26 TEXTURE3.27|
|  K|MPR-19236  MPR-19237  IC8_D400   IC9_6E4A   -          -          -          -          MPR-19233   MPR-19234   -           -          |
|  E|---------------------------------------------------------------------------------------|-----------------------------------------------|
|  R|TGP0.16    TGP1.20    TGP2.17    TGP3.21    TGP4.18    TGP5.22    TGP6.19    TGP7.23   |
|  S|MPR-19235  MPR-19232  -          -          -          -          -          -         |
|---|---------------------------------------------------------------------------------------|


***********************************************************************************/









