/***************************************************************************
Kiki KaiKai, Taito, 1986
Hardware info by Guru
Last Update: 22nd August 2021


PCB Layout
----------

MAIN BOARD K1100195A J1100079A
Sticker: K1100195A KIKI KAIKAI
|-------------------------------------------------------------------|
|                 SWA   SWB             TMM2064            A85_15.A1|
| MB3731  YM3014  YM2203C                       A85-04.A2  A85_14.A3|
|         4556                          TMM2064            A85_13.A5|
|         VOL     Z0840006PSC                              A85_12.A6|
|     CN1            A85_11.F6                                      |
| PC050CM            CXK5816                           A85-03.B7    |
|A85_01.H8                                                         |--|
|                                                                  |  |
|                                                                  |  |
|J                                                                 |  |
|A                                 A85_05.D10                      |  |
|M                                                                 |  |E
|M             A85_07.G11                                  CXK5816 |  |
|A                                                                 |  |
|              A85-10.G12   MCM2016                                |  |
|              *   *   *                                           |  |
|              A85-09.G14                                          |--|
|              A85-08.G15   MCM2016                                 |
|                                                         A85-02.A13|
|              A85-06.G16                                           |
|                                                                   |
|   A85_17.H16                                                      |
|   A85_16.H18     Z0840006PSC      MB3771                  24MHz   |
|-------------------------------------------------------------------|
Notes:
           E - 50 pin flat cable connector labelled 'E' (unused)
   A85-01.H8 - Motorola MC6801U4 8-bit microcontroller with 192 Bytes internal RAM and 4kB internal mask ROM marked 'TAITO A85-01 JPH1020P 185 PS4 J8641'
               Clock input 3.000MHz on pin 3 [24/8]
         CN1 - 4-pin header labelled 'JAMMA' with a 4-pin plug marked 'H' connected on top.
               Pin 1 is tied to ground.
               Pin 2 is tied to the PC050CM on pin 10 (schematics show pin 10 is tied to ground).
               Each of the pins 3 and 4 connect to the JAMMA 12V pins separately (JAMMA 12V is not tied together on the PCB).
               On the 'H' plug, pins 1-2 are tied with a wire and pin 3-4 are tied with a wire.
      MB3731 - Fujitsu MB3731 18W BTL mono power amplifier
      MB3771 - Fujitsu MB3771 power supply monitor IC. This is used to provide the power-on reset.
     SWA/SWB - 8-position DIP switch
     TMM2064 - Toshiba TMM2064 8kx8-bit static RAM
     MCM2016 - Motorola MCM2016 2kx8-bit static RAM
     CXK5816 - Sony CXK5816 2kx8-bit static RAM
        4556 - 4556 dual operational amplifier
         VOL - 5k volume pot
     PC050CM - Taito PC050CM custom SIL28 ceramic module for coins, coin lockout and coin counters
      YM3014 - Yamaha YM3014 serial input floating D/A converter. Clock input 1.000MHz on pin 5 [24/24]. Other clocks: pin 3= 41.6666kHz, pin 4= 83.3332kHz
     YM2203C - Yamaha YM2203C OPN (FM Operator Type-N) 3-channel sound chip. Clock input 3.000MHz [24/8]
 Z0840006PSC - Zilog Z0840006PSC Z80 CPU. Clock input 6.000MHz [24/4] (for both Z80's)
       HSync - 15.1436kHz
       VSync - 59.1858Hz
  A85-02.A13 - MMI PAL16L8A marked 'A85-02'
   A85-03.B7 - MMI PAL16L8A marked 'A85-03'
   A85-04.A2 - MMI PAL16L8A marked 'A85-04'
  A85-05.D10 - MMI PAL16L8A marked 'A85-05'
  A85-06.G16 - MMI PAL16L8A marked 'A85-06'
  A85-07.G11 - MMI PAL16R4A marked 'A85-07'
      A85_11 - 27C256 EPROM
A85_12 to 17 - 27C512 EPROM
  A85-08.G15 - 63S141 bipolar PROM (Red)
  A85-09.G14 - 63S141 bipolar PROM (Blue)
  A85-10.G12 - 63S141 bipolar PROM (Green)
           * - 4 resistors connected to the color PROM outputs.
               They are connected as follows (duplicated 3 times for each color PROM).....

               O4-----R220-----|
                               |
               O3-----R470--+--|
      Final Output----------|  |
               02-----R1k------|
                               |
               01-----R2.2k----|

               The final output of each PROM connects to the JAMMA connector pins for the red, green or blue video output.

***************************************************************************/