/***************************************************************************
Konami GQ System Overview
Hardware info by Guru
Last updated: April 20th 2021
-----------------------------

Crypt Killer
Konami, 1995
------------

The hardware is based on the CPU and GPU found in the early revision Playstation 1 console.


PCB Layout
----------

GQ420  PWB354905B
|----------------------------------------------------------------|
|CN14          420A01.2G          420A02.3M         CN6 CN7 CN8  |
|           056602  6264    |------| 424800                      |
|           LA4705  6264    |058141|                             |
|                   68000   |------| 424800                      |
|     18.432MHz   PAL(000607)                                    |
|     32MHz 48kHz PAL       |------| 424800                      |
|                (000608)   |058800|                             |
|    RESET_SW               |------| M514256                     |
|                         |--------| M514256                     |
|J                        |TMS57002|                             |
|A                        |--------| MACH110                     |
|M  000180          53.693175MHz    (000619A)                    |
|M                        |--------|                             |
|A  KM4216V256 KM4216V256 |CXD8538Q|           PAL (000613)      |
|   KM4216V256 KM4216V256 |        |           PAL (000612)      |
| TEST_SW                 |--------|           PAL (000618)      |
|   CXD2923AR        67.7376MHz           93C46   NCR53CF96-2    |
| DIPSW(8)           |---------|          420B03.27P    HDD_LED  |
|  KM48V514 KM48V514 |CXD8530BQ|             |-----------------| |
|  KM48V514 KM48V514 |         |             |543MB SCSI HDRIVE| |
|CN3  UPA1556        |---------|             |TOSHIBA MK1924FBV| |
|  KM48V514 KM48V514                         |(420UAA04)       | |
|  KM48V514 KM48V514                         |-----------------| |
|----------------------------------------------------------------|

Notes:
      This game uses a 543MB 2-1/2" SCSI HDD, model Toshiba MK1924FBV, labelled 420UAA04

      CN6/7/8 - 5-pin connector for guns. All 3 connectors are wired the same.
                Pinout is...
                1- gun opto
                2- ground
                3- trigger
                4- +5v
                5- reload (see below)

                The Crypt Killer shotguns have 6 wires coming out of the gun.
                The wire colors and connections are....
                Black  - Ground; joined to CN6/7/8 pin 2
                Red    - +5v; joined to CN6/7/8 pin 4
                Yellow - Gun opto; joined to CN6/7/8 pin 1
                White  - Trigger; joined to CN6/7/8 pin 3
                Purple - Reload; joined to CN6/7/8 pin 5
                Grey   - Reload ground; this wire must be joined to any ground for the reload to work

      CN3     - For connection of extra controls/buttons (e.g. player 3 start etc)
      CN14    - For connection of additional speaker for stereo output
      68000   - Clock input 8.000MHz [32/4]
      53CF96  - Clock input 16.000MHz [32/2]
      TMS57002- Clock input 24.000MHz [48/2]
      056602  - Konami custom ceramic module. Clock inputs 18.432MHz, 1.536MHz[18.432/12], 48kHz
      000180  - Konami custom ceramic module containing LM1203 and resistors/caps etc
      Vsync   - 59.825Hz
      HSync   - 15.613kHz

*************************************************************************/
