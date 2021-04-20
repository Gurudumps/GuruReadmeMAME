/***************************************************************************
Konami GV
Hardware Info by Guru
Last Updated: 20th April 2021
----------------------------

Konami GV uses a single custom PCB but some of the custom chips are the same or similar to those used in a Playstation 1.


Known Games
-----------

Game       Description                                              Mother Board   Code       Version       Date   Time

powyak96   Jikkyou Powerful Pro Yakyuu '96                          GV999          GV017   JAPAN 1.03   96.05.27  18:00
hyperath   Hyper Athlete                                            ZV610          GV021   JAPAN 1.00   96.06.09  19:00
lacrazyc   Let's Attack Crazy Cross                                 ZV610          GV027   ASIA  1.10   96.01.18  12:00
susume     Susume! Taisen Puzzle-Dama                               ZV610          GV027   JAPAN 1.20   96.03.04  12:00
btchamp    Beat the Champ                                           GV999          GV053   UAA01        ?
kdeadeye   Dead Eye                                                 GV999          GV054   UAA01        ?
weddingr   Wedding Rhapsody                                         ?              GX624   JAA          97.05.29   9:12
tmosh      Tokimeki Memorial Oshiete Your Heart                     GV999          GQ673   JAA          97.03.14  ?
tmoshs     Tokimeki Memorial Oshiete Your Heart Seal Version        GV999          GE755   JAA          97.08.06  11:52
tmoshspa   Tokimeki Memorial Oshiete Your Heart Seal Version Plus   GV999          GE756   JAA          97.08.24  12:20
tmoshsp    Tokimeki Memorial Oshiete Your Heart Seal Version Plus   GV999          GE756   JAB          97.09.27   9:10
nagano98   Winter Olypmics in Nagano 98                             GV999          GX720   EAA01 1.03   98.01.08  10:45
naganoj    Hyper Olympic in Nagano                                  GV999          GX720   JAA01 1.02   98.01.07  01:10
simpbowl   Simpsons Bowling                                         GV999          GQ829   UAA          ?

Notes:

In MAME someone byte-swapped all of the the EEPROM files (located at 25C) and they do not work on real hardware. If you are
programming the EEPROM dump to a real chip you must byte-swap the dump otherwise it will not work on your PCB. This note
will be removed when someone fixes the problem.

The Tokimeki Memorial Oshiete Your Heart games use an extra PCB plugged in on top for controlling the printer and the sensors.
Additionally, there is a small PCB for connecting to a sensor... PCB number GE755-PWB(S)

Simpsons Bowling uses an extra PCB plugged in on top containing flash ROMs and circuitry to control the trackball.

Some of the other games may also have extra PCBs.



PCB Layouts
-----------

ZV610 PWB301331
|---------------------------------------|
|   000180       056602      LM324   CN8|
|CN2                                    |
|                                       |
|      999A01.7E                     CN6|
|                         CXD2922BQ     |
|      10E                KM416V256BLT-7|
|                                       |
|J     12E                              |
|A CXD2923AR     058239                 |
|M                                      |
|M                     CXD8530BQ        |
|A   D482445LGW-A70            93CF96-2 |
|               CXD8514Q               S|
|    D482445LGW-A70                    C|
|                      67.7376MHz      S|
|         53.693175MHz                 I|
|                                 32MHz |
|    93C46   KM48V514BJ-6  KM48V514BJ-6 |
|            KM48V514BJ-6  KM48V514BJ-6 |
|    CN5      CN3                001231 |
|---------------------------------------|

GV999 PWB301949A
|---------------------------------------|
|                056602      LM324   CN8|
|CN2                                    |
|TEST_SW                                |
|      999A01.7E                     CN6|
|MC44200         CN4      CXD2925Q      |
|      9E                 TC51V4260BJ-80|
|                                       |
|J     12E                              |
|A               058239                 |
|M  53.693175MHz                        |
|M                     CXD8530CQ        |
|A                             93CF96-2 |
|      CXD8561Q                        S|
|              KM4132G271Q-12          C|
|                      67.7376MHz      S|
|         53.693175MHz                 I|
|                                 32MHz |
|    93C46   KM48V514BJ-6  KM48V514BJ-6 |
|            KM48V514BJ-6  KM48V514BJ-6 |
|    CN5      CN3                001231 |
|---------------------------------------|

Notes:

      - These two PCBs are functionally equivalent and can be exchanged between games and work fine (see CD-swapping note below).

      - Simpsons Bowling and Dead Eye use a GV999 with a daughtercard containing flash ROMs and CPLDs:
        PWB402610
        Xilinx XC3020A
        Xilinx 1718DPC
        74F244N (2 of these)
        LVT245SS (2 of theses)
        On Simpsons Bowling, this also has one µPD4701AC and an empty space for a second.

      - 000180 is used for driving the RGB output. It's a very thin piece of very brittle ceramic
        containing a circuit, a LM1203 chip, some smt transistors/caps/resistors etc (let's just say
        placing this thing on the edge of the PCB wasn't a good design choice!)
        On GV999, it has been replaced by three transistors and a MC44200.

      - 056602 seems to be some sort of A/D converter (another ceramic thing containing caps/resistors/transistors and a chip)

      - CXD2922 and CXD2925 are SPU's.

      - The BIOS on ZV610 and GV999 is identical. It's a 4M mask ROM, compatible with 27C040.

      - The CD contains one MODE 1 data track and several Redbook audio tracks which are streamed to the speaker via CN8.

      - The ZV and GV PCB's are virtually identical aside from some minor component shuffling and the RGB output mechanism.
        However note that the GPU revision is different between the two boards and so are some of the other Sony IC's.

      - CN8 used to connect redbook audio output from CD drive to PCB.

      - CN6 used to connect power to CD drive.

      - CN2 used for extra speaker connection for stereo output.

      - CN3, CN5 used for connecting 3rd and 4th player controls.

      - CN4 is present only on GV999 and is used to connect extra PCBs with additional functionality.
        For example:
        Simpsons Bowling additional flash ROM & trackball control PCB.
        Tokimeki Memorial Oshiete Your Heart printer and sensor control PCB.

      - 001231, 058239 are PALCE16V8H PALs.

      - 10E, 12E are unpopulated positions for 16M TSOP56 FLASHROMs (10E is 9E on GV999).

      - If the CD is swapped to another GV game, the game will boot but will stop with an error '25C MBAD' (the EEPROM is 25C)
        So the games can not be swapped by simply exchanging CDs because the EEPROM will not re-init itself if the CDROM is swapped.
        This appears to be some form of mild protection to stop operators swapping CD's.
        However it is possible to swap games to another PCB by exchanging the CD _AND_ the EEPROM from another PCB which belongs
        to that same game. It won't work with a blank EEPROM or a different games' EEPROM.


Tokimeki Memorial Oshiete Your Heart control PCB Layout
-------------------------------------------------------

GQ673 PWB404691A

    |------------------------|
    |CN11                    |
    |             003673     |----------|
    |CN10   74QST3383    LVT245  CN3    |
    |                               CN4 |
    |CN9  2SC2320        LS245          |
    |     2SC2320        LS273          |
    |CN8  2SC2320        HCT04          |
    |     2SC2320  MB3516A              |
    |CN7           14.31818MHz          |
    |                                   |
    |CN6                         2SC2320|
|---|             uPC324                |---|
|CN5    2SC2320  ADC0838         CXA1585Q   |
|                PC817     VR   3.579545MHz |
|-------------------------------------------|

Notes: (all main parts shown)

       This PCB is plugged into the Tokimeki Memorial Oshiete Your Heart main board into CN4
       It provides additional functionality for the printer and sensor(s) and possibly other things.

       CN10 & CN11 - TCS7927-54 4-pin mini DIN connectors
               CN9 - 6 pin connector
               CN8 - 5 pin connector
               CN7 - 7 pin connector
               CN6 - 3 pin connector
               CN5 - 2 pin connector
               CN3 - 4 pin power connector. Joins to CN6 on mainboard via a Y-splitter cable. The other end of the
                     Y cable is approximately 300mm long and joins to the GE755-PWB(S) PCB.
               CN4 - 6 pin connector used to power the CDROM drive
            003673 - PAL16V8D
         74QST3383 - Quality Semiconductor Inc. High Speed CMOS Bus Exchange Switch
           2SC2320 - NPN Transistor equivalent to 2SC945
           MB3516A - Fujitsu MB3516A RGB Encoder
            uPC324 - NEC uPC324 Low power quad operational amplifier
           ADC0838 - Analog Devices ADC0838 8-Bit Serial I/O A/D Converter with Multiplexer Options
             PC817 - Sharp PC817 Optocoupler
                VR - 500 Ohm potentiometer
          CXA1585Q - Sony CXA1585Q RGB Decoder

Tokimeki Memorial Oshiete Your Heart Sensor PCB
-----------------------------------------------

GQ673 PWB404691A
|----------------|
| LS14  E756S1   |
|         uPC817 |
| CN1  CN2  CN3  |
|----------------|
Notes:
      E756S1 - PAL16V8H
      uPC817 - Sharp PC817 Optocoupler
         CN1 - 4 pin power connector joining to GQ673 PCB CN3 and CN6 on mainboard via a Y-splitter cable.
     CN1/CN2 - 2 pin connector

***************************************************************************/
