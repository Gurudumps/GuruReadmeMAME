/******************************************************************

Cabal, TAD 1988 (Trackball version), 1989 (Joystick version)
Hardware info by Guru
Last updated: No changes
------------------------

Top PCB
-------

TAD-8710-SUB (I)                                      CN1
|------------------------------------------------|-------------|--------|
|                                                |-------------|        |
|                                                                       |
|                                                                       |
|                                      PLD09.5T   LC3517                |
|                                                    LC3517             |
|                                                                       |
|                                                                       |
|                                                           TMM2018     |
|                                                      TMM2018  TMM2018 |
|                                                           TMM2018     |
| LC3517   LC3517   LC3517   LC3517   LC3517                            |
| LC3517   LC3517   LC3517   LC3517   LC3517                            |
|                                                                       |
|                                                                       |
|  SEI0060BU       SEI0060BU                                            |
|                                                                       |
|                                                                       |
|                                         TAD-1.5E                      |
|  SEI0010BU       SEI0010BU                                            |
|                                                                       |
|                                                                       |
|                                                                       |
|                                                     CN2               |
|                                                |-------------|        |
|------------------------------------------------|-------------|--------|
Notes:
      TMM2018   - Toshiba TMM2018 2kx8 SRAM
      LC3517    - Sanyo LC3517BSL-15 2kx8 SRAM
      SEI0060BU - Toshiba TC17G008AN-0024 Gate Array programmed as a custom chip
      SEI0010BU - Toshiba TC17G005AN-0025 Gate Array programmed as a custom chip
      PLD09.5T  - Signetics PLHS18P8AN Programmable Array Logic
      TAF-1.5E  - 512kx8 (4Mbit) Mask ROM for Sprite Data
      CN1/CN2   - Flat cable connector


Bottom PCB
----------

TAD-8710-MAIN (I)                                                J426
|-----------------------------------------------------------|-------------|--------|
| EPR_A-1.1U   SEI0100BU          SEI0010BU                 |-------------|        |
|                                                                                  |
| EPR_A-2.1S   SEI0100BU                                                           |
|                                          EPR_A-5.6S   TAD-2.7S                   |
|     M5205  TMM2015   Z80A                                                        |
|     M5205  EPR_A-3.3P                                                            |
|            EPR_A-4.3N   SEI80BU                       TMM2015                    |
|     LM324                                                                        |
|                                                       TMM2015                    |
|   VR1  VR2                                                              TMM2015  |
|     LA4460  YM3012  YM2151  14.31818MHz                                          |
|                                                 TMM2063    TMM2063      TMM2015  |
|                                                                                  |
|     HB-41                  PROM10.4J          EPR_A-6.6J  EPR_A-8.7J             |
|J                                                                                 |
|A    UEC-05   TMM2015                          EPR_A-7.6H  EPR_A-9.7H             |
|M    HB-2     TMM2015                                                             |
|M    HB-1                                                                         |
|A    HB-1                        |-------------------|         PROM05.8E          |
|     HB-1                        |    MC68000P8      |                  SEI0050BU |
|  UPD4701                        |                   |                            |
|     UPD4701                     |-------------------|  20MHz                     |
|                                                                J425       12MHz  |
|  SW1   SW2                                                |-------------|        |
|-----------------------------------------------------------|-------------|--------|
Notes:
      SEI0100BU - SEI010BU YM3931 Custom Chip. Note this is not a Yamaha sound chip.
                  It is some kind of gate array made to look like a sound chip and manipulates
                  the sample data in ROMs A-1 and A-2. Clock input 3.579545MHz [14.31818/4]
      TMM2015   - Toshiba TMM2015 2kx8 SRAM
      TMM2063   - Toshiba tmm2063 8kx8 SRAM
      SEI0050BU - Gate Array(?) programmed as a custom chip. Other markings "M ^ 71000"
      SEI80BU   - Gate Array(?) programmed as a custom chip. Other markings "611 787"
      SEI0010BU - Toshiba TC17G005AN-0025 Gate Array programmed as a custom chip
      J425/J426 - Flat cable connector
      68000     - Clock 10MHz [20/2]
      Z80A      - Clock 3.579545MHz [14.31818/4]
      VR1       - 500-Ohm volume pot
      VR2       - 2k-Ohm volume pot
      LA4460    - Sanyo LA4460 12W Audio Power Amplifier
      YM3012    - Yamaha YM3012 DAC. Clock 1.7897725MHz [14.31818/8]
      M5205     - Oki M5205 ADPCM Speech Synthesis Chip. Clock 375kHz [12/32]. Pins 1,2=H,L so sample rate is 375/48=7.8125kHz
      LM324     - Texas Instruments LM324 Quad Operational Amplifier
      YM2151    - Yamaha YM2151 8-Channel 4-Operator (OPM; FM Operator Type-M) Sound Chip. Clock 3.579545MHz [14.31818/4]
      HB-41     - Ceramic module (Audio Mixer). Contains caps, resistors and 2 op-amps.
                  JRC2060; compatible with LM324, and JRC4560; compatible with LM358.
                  This module was reversed by aje_fr in 2016 (https://www.gamoover.net/Forums/index.php?topic=35345.0)
      UEC-05    - Ceramic module (Video DAC; RGB comes from this module)
      HB-1      - Ceramic module (I/O; controls/buttons)
      HB-2      - Ceramic module (coin counter functions)
      SW1/SW2   - 8-position DIP Switch
      UPD4701   - NEC uPD4701 Incremental Encoder Counter used for trackball controls. On the joystick version, these chips
                  are replaced with a small plug-in PCB containing a 74LS244 logic chip
      HSync     - 15.2580kHz
      VSync     - 60Hz

      ROMs -
             EPR_A-1.1U \ ADPCM Samples
             EPR_A-2.1S /
             EPR_A-3.3P \ Z80 Sound Program
             EPR_A-4.3N /
             EPR_A-5.6S - Characters
             TAF-2.7S   - 512kx8 (4Mbit) Mask ROM for Tiles (Foreground/Background)
             EPR_A-6.6J \
             EPR_A-8.7J |
             EPR_A-7.6H | 68000 Main Program
             EPR_A-9.7H /
             PROM10.4J  - Signetics 82S129 Bi-Polar PROM marked "PROM10"
             PROM05.8E  - Signetics 82S135 Bi-Polar PROM marked "PROM05"

******************************************************************/
