/***************************************************************************

-= Cave Hardware =-

Main  CPU    :  MC68000
Sound CPU    :  Z80 [Optional]
Sound Chips  :  YMZ280B or
                OKIM6295 x (1|2) + YM2203 / YM2151 [Optional]
Other        :  93C46 EEPROM

-----------------------------------------------------------------------------------------
Year + Game               License       PCB         Tilemaps        Sprites         Other
-----------------------------------------------------------------------------------------
94 Mazinger Z             Banpresto     BP943A      038 9335EX706   013 9341E7009   Z80
94 Power Instinct 2       Atlus         ATG02?      038 9429WX709   013 9341E7009   Z80 NMK 112
95 Gogetsuji Legends      Atlus         AT047G2-B   038 9429WX709   013 9341E7009   Z80 NMK 112
95 Metamoqester           Banpresto     BP947A      038 9437WX711   013 9346E7002   Z80
95 Sailor Moon            Banpresto     BP945A      038 9437WX711   013 9346E7002   Z80
95 Donpachi               Atlus         AT-C01DP-2  038 9429WX727   013 9347E7003   NMK 112
96 Air Gallet             Banpresto     BP962A      038 9437WX711   013 9346E7002   Z80
96 Hotdog Storm           Marble        ASCT9501    038 9341EX702   013             Z80
96 Pac-Slot               Namco         N-44 EM     038 9444WX010   013 9345E7006
96 Poka Poka Satan        Kato's        PPS-MAIN    038 9444WX010   013 9607EX013
97 Tekken Card World      Namco         EMG4        038 9701WX001   013 9651EX001
97 Dodonpachi             Atlus         AT-C03 D2   038 9341E7010   013 9338EX701
98 Dangun Feveron         Nihon System  CV01        038 9808WX003   013 9807EX004
98 ESP Ra.De.             Atlus         ATC04       038 9841WX002   013 9838EX002
98 Tekken Battle Scratch  Namco         EMG4        038 9748WX001   013
98 Uo Poko                Jaleco        CV02        038 9749WX001   013 9749EX004
99 Guwange                Atlus         ATC05       038 9919WX004   013
99 Gaia Crusaders         Noise Factory ?           038 9838WX003   013 9918EX008
99 Koro Koro Quest        Takumi        TUG-01B     038 9838WX004   013 9838EX004
99 Crusher Makochan       Takumi        TUG-01B     038 9838WX004   013 9838EX004
99 Tobikose! Jumpman      Namco         EMG4        038 9919WX007   013 9934WX002
01 Thunder Heroes         Primetek      ?           038 9838WX003   013 9918EX008
-----------------------------------------------------------------------------------------

Air Gallet, Banpresto, 1996
Hardware info by Guru
Last updated: No changes
------------------------

Runs on identical board to Sailor Moon (several sockets unpopulated)

PCB: BP945A (overstamped with BP962A)
CPU: TMP68HC000P16 (68000, 64 pin DIP)
SND: Z84C0008PEC (Z80, 40 pin DIP), OKI M6295 x 2, YM2151, YM3012
OSC: 28.000MHz, 16.000MHz
RAM: 62256 x 8, NEC 424260 x 2, 6264 x 5

Other Chips:
SGS Thomson ST93C46CB1 (EEPROM)
PALS (same as Sailor Moon, not dumped):
      18CV8 label SMBG
      18CV8 label SMZ80
      18CV8 label SMCPU
      GAL16V8 (located near BP962A.U47)

GFX:  038 9437WX711 (176 pin PQFP)
      038 9437WX711 (176 pin PQFP)
      038 9437WX711 (176 pin PQFP)
      013 9346E7002 (240 pin PQFP)

On PCB near JAMMA connector is a small push button to access test mode.

ROMS:
BP962A.U9   27C040      Sound Program
BP962A.U45  27C240      Main Program
BP962A.U47  23C16000    Sound
BP962A.U48  23C16000    Sound
BP962A.U53  23C16000    GFX
BP962A.U54  23C16000    GFX
BP962A.U57  23C16000    GFX
BP962A.U65  23C16000    GFX
BP962A.U76  23C16000    GFX
BP962A.U77  23C16000    GFX

***************************************************************************

Gaia Crusaders, Noise Factory, 1999
Hardware info by Guru
Last updated: No changes
------------------------

PCB Layout
----------

|------------------------------------------------|
|   YAC516    YMZ280B      XC9536      68000     |
|          16MHz                       PRG2   PAL|
|                          TC51832     PRG1      |
|     SND3     SND2        TC51832   28.322MHz   |
|              SND1        62256     16MHz       |
|                          62256                 |
|J 62256 62256 62256 62256 62256 62256           |
|A                                 KM416C256     |
|M                                      KM416C256|
|M     -------------------  ---------------      |
|A     |     |     |     |  |             | 62256|
|      |     |     |     |  |             |      |
| DSW1 |     |     |     |  |013 9918EX008| 62256|
|      |038 9838WX003(x3)|  |             |      |
|      -------------------  ---------------      |
| DSW2                                           |
|                    XC9536          OBJ2        |
|                                                |
|       BG2     BG3    BG1           OBJ1        |
|                                                |
|------------------------------------------------|

Notes:
      68000 clock  : 16.000MHz
      YMZ280B clock: 16.000MHz
      VSync        : 58Hz
      HSync        : 15.40kHz

***************************************************************************

Thunder Heroes, Primetek Investments Ltd. , 2001
Hardware info by Guru
Last Updated: No changes
------------------------

A quasi-clone, remake or continuation of Gaia Crusaders but is clearly a different game.

PCB Layout
----------

|------------------------------------------------------|
| 4558  YAC516   YMZ280B     XILINX                    |
| 4558   16MHz               XC9536    68000      PAL  |
|                SND2                                  |
|   VOL  SND3                TC51832   EPM0            |
|                SND1                                  |
|                            TC51832   EPM1            |
|                    58257           28.322MHz         |
|J                   58257                16MHz        |
|A   58257  58257  58257  58257  58257                 |
|M  DSW1                      58257   M514260  M514260 |
|M                                                     |
|A  DSW2 |------|  |------|  |------|  |--------|58257 |
|        | 038  |  | 038  |  | 038  |  |  013   |      |
|        |      |  |      |  |      |  |        |58257 |
|        |------|  |------|  |------|  |        |      |
|                                      |--------|      |
|                         XILINX            OBJ2       |
|                         XC9536                       |
|       BG2       BG3       BG1             OBJ1       |
|------------------------------------------------------|
Notes:
      68000 clock 16.00MHz
      YMZ280B clock 16.000MHz
      HSync 15.4kHz
      VSync 58Hz
      038/013 = Same video chips used on some Banpresto games

***************************************************************************

Koro Koro Quest, Takumi, 1999

Hardware is kind of Banpresto-ish

TUG-01B
MP-001
|--------------------------------------------------|
|        NJM4560   ROM.U0130                       |
|                                     68000        |
|                                                  |
|     YAC516                       16MHz       PAL |
|                                  PAL             |
|                PAL    PAL                        |
|M                 62256                   3V_BATT |
|A    93C46        62256                           |
|H                                                 |
|J                 28MHz  |---------|              |
|O        |------|        |  013    |              |
|N        | 038  |        |  9838E  |     M5M44260 |
|G        | 9838W| 62256  |  X004   |     M5M44260 |
|5        | X004 | 62256  |         |              |
|6        |------|        |---------|              |
|  YMZ280B                                 62256   |
|  16.9344MHz                              62256   |
|                                                  |
|                     PAL                          |
|                                                  |
|ROM.U1186                                 X       |
|                                                  |
|   X       ROM.U1060   ROM.U1051      ROM.U1066   |
|--------------------------------------------------|

 PCB Number - TUG-01B MP001-00175
 68000-16 + 16MHZ OSC
 YMZ280B + YAC516-M + Xtal 16.9344MHz
 93C46 EEPROM
 Custom - 013 9838EX004 (QFP240), 038 9838WX004 (QFP144) + OSC 28MHz
 RAM - 62256 (x8), M5M44260 (x2)
 3volt battery
 GAL16V8H (x5)

***************************************************************************

Metamoqester (World) / Oni - The Ninja Master (Japan), Banpresto, 1995
Hardware info by Guru
Last updated: No changes
------------------------

PCB: BP947A
CPU: MC68HC000P16 (68000, 64 pin DIP)
SND: Z0840008PSC (Z80, 40 pin DIP), AD-65 x 2 (= OKI M6295), YM2151, CY5002 (= YM3012)
OSC: 32.000 MHz
RAM: LGS GM76C88ALFW-15 x 9 (28 pin SOP), LGS GM71C4260AJ70 x 2 (40 pin SOJ)
     Hitachi HM62256LFP-12T x 2 (40 pin SOJ)

Other Chips:
AT93C46 (EEPROM)
PAL (not dumped, located near 68000): ATF16V8 x 1

GFX:  (Same GFX chips as "Sailor Moon")

      038 9437WX711 (176 pin PQFP)
      038 9437WX711 (176 pin PQFP)
      038 9437WX711 (176 pin PQFP)
      013 9346E7002 (240 pin PQFP)

On PCB near JAMMA connector is a small push button labelled SW1 to access test mode.

ROMS:
BP947A.U37  16M Mask    \ Oki Samples
BP947A.U42  16M Mask    /

BP947A.U46  16M Mask    \
BP947A.U47  16M Mask    |
BP947A.U48  16M Mask    |
BP947A.U49  16M Mask    | GFX
BP947A.U50  16M Mask    |
BP947A.U51  16M Mask    |
BP947A.U52  16M Mask    /

BP947A.U20  27C020        Sound PRG

BP947A.U25  27C240      \
BP947A.U28  27C240      | Main PRG
BP947A.U29  27C240      /

***************************************************************************

Power Instinct Legends (US) / Gouketsuji Ichizoku Saikyou Densetsu (Japan), Atlus, 1995

PCB Layout
----------

AT047G2-B ATLUS
|---------------------------------------------------------------|
|LM324 M6295  G02_U53          Z80  16MHz 28MHz 12MHz  TA8030S  |
|VOL          G02_U54 |------| SOUND_U3                TEXT_U82 |
|      M6295  G02_U55 |NMK112|   6264         6264              |
|uPC2505      G02_U56 |      |                        |------|  |
|      4558           |------|                6264    |038   |  |
|     Y3014   YM2203    PAL                           |9429WX|  |
|                                            ATGS_U89 |------|  |
|J       TEST_SW  62256                                         |
|A    93C46       62256                       6264    |------|  |
|M            |----SUB-BOARD-----|                    |038   |  |
|M    |---|   |*P  P *P  P *P *P |      PAL   6264    |9429WX|  |
|A    |   |   | R  R  R  R  R  R |                    |------|  |
|     | 6 |   | 1  O  1  O  1  1 |           ATGS_U81           |
|     | 8 |   | 2  G  2  G  2  2 |                    |------|  |
|     | 0 |   | U  U  U  U  U  U |            6264    |038   |  |
|     | 0 |   | 2  4  4  4  3  5 |                    |9429WX|  |
|     | 0 |   |    5     4       |62256       6264    |------|  |
|     |   |   |------------------|62256                         |
|     |---|     PAL            |-------|     ATGS_U78 |------|  |
|--------|                     |8647-01|              |038   |  |
|*ATGS_U1|                     |013    |    KM416C256 |9429WX|  |
|        |                     |9341E70|              |------|  |
|        |G02_U66    G02_U63   |-------|                6264    |
|        |  G02_U65    G02_U62   62256      KM416C256           |
|*ATGS_U2|    G02_U64    G02_U61 62256                  6264    |
|--------|------------------------------------------------------|
Notes:
      ROMs marked with * are located on a plug-in sub board
      68000 clock - 16.000MHz
      Z80 clock   - 8.000MHz [16/2]
      6295 clocks - 3.000MHz [12/4], sample rate = 3000000 / 165
      YM2203 clock- 4.000MHz [16/4]
      VSync       - 57.5Hz
      HSync       - 15.23kHz

      ROMs -
            U3       : 27C1001 EPROM
            U82      : 27C040 EPROM
            PR12*    : 27C040 EPROMs
            PROG*    : 27C040 EPROMs
            ALL other ROMs are soldered-in 16M 42 pin mask ROM (read as 27C160)

***************************************************************************

Pretty Soldier Sailor Moon, Banpresto, 1995
Hardware info by Guru
Last updated: No changes
------------------------

PCB: BP945A
CPU: TMP68HC000P16 (68000, 64 pin DIP)
SND: Z84C0008PEC (Z80, 40 pin DIP), OKI M6295 x 2, YM2151, YM3012
OSC: 28.000MHz, 16.000MHz
RAM: NEC 43256 x 8, NEC 424260 x 2, Sanyo LC3664 x 5

Other Chips:
SGS Thomson ST93C46CB1 (EEPROM?)
PALS (not dumped):
      18CV8 label SMBG
      18CV8 label SMZ80
      18CV8 label SMCPU
      GAL16V8 (located near BPSM-U47)

GFX:  038 9437WX711 (176 pin PQFP)
      038 9437WX711 (176 pin PQFP)
      038 9437WX711 (176 pin PQFP)
      013 9346E7002 (240 pin PQFP)

On PCB near JAMMA connector is a small push button to access test mode.

ROMS:
BP945A.U9   27C040      Sound Program
BP945A.U45  27C240      Main Program
BPSM.U46    23C16000    Main Program?
BPSM.U47    23C4000     Sound?
BPSM.U48    23C16000    Sound?
BPSM.U53    23C16000    GFX
BPSM.U54    23C16000    GFX
BPSM.U57    23C16000    GFX
BPSM.U58    23C16000    GFX
BPSM.U59    23C16000    GFX
BPSM.U60    23C16000    GFX
BPSM.U61    23C16000    GFX
BPSM.U62    23C16000    GFX
BPSM.U63    23C16000    GFX
BPSM.U64    23C16000    GFX
BPSM.U65    23C16000    GFX
BPSM.U76    23C16000    GFX
BPSM.U77    23C16000    GFX

***************************************************************************/
