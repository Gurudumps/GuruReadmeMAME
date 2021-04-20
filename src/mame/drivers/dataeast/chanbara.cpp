/****************************************************************************************

Chanbara, Data East, 1985
Hardware info by Guru
Last updated: No changes
------------------------

PCB Layout
----------

DE-0207-0
|-----------------------------------------------------------|
|             CP12.17H                     CP00-2.17C       |
|                          2016                       6809  |
|             CP13.15H                     CP01.15C         |
|                          2016                             |
|1  RCDM-I4   CP14.13H                     CP02.14C         |
|8  RCDM-I1                                2016             |
|W  RCDM-I1                                CP03.11C   2016  |
|A  RCDM-I1                         2148   CP04.10C         |
|Y  RCDM-I1                                CP05.9C          |
|   RCDM-I1                2148            CP06.8C          |
|  RM-C2                   2148                   TC15G032AY|
|  PM-C1                            2148   CP07.6C          |
|       DSW1                               CP08.5C          |
|CP15.6K                   DECO                     DECO    |
|CP16.5K                   VSC30           CP09.3C  HMC20   |
|CP17.4K                                   CP10.2C          |
|MB3730  558  558  YM3014  YM2203          CP11.1C   12MHz  |
|-----------------------------------------------------------|
Notes:
      6809   - MC68B09EP, clock 1.500MHz [12/8]
      YM2203 - clock 1.500MHz [12/8]
      VSC30  - clock 3.000MHz [12/4, pin 7), custom DECO DIP40 IC
      HMC20  - DECO HMC20 custom DIP28 IC. Provides many clocks each divided by 2
               (i.e. 12MHz, 6MHz, 3MHz, 1.5MHz, 750kHz etc)
               HSync is generated on pins 12 and 13 with 12/256/3. Actual xtal measures
               11.9931MHz, which accounts for the measured HSync error (12/256/3 = 15.625kHz)
      VSync  - 57.4122Hz
      HSync  - 15.6161kHz

****************************************************************************************/
