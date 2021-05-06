Konami Network PCB for NWK hardware
Hardware info by Guru
Last updated: 6th May 2021
--------------------------

This PCB is used on the following games:
Racing Jam 
Thrill Drive (NWK-LC)
  
GN676-PWB(H)A
MADE IN JAPAN
(C)1998 KONAMI
|------------------------|
|  CY7C199       N676H1  |
|                        |
|CN3                     |
|  HYC2485S              |
|   XC5204        XC5210 |
|CN2                     |
|         CN1            |
|------------------------|
Notes:
      CN1      - Connector joining to CPU board CN4
      CN2/3    - RCA jacks for network cable
      HYC2485S - Hybrid ceramic module for RS485
      CY7C199  - 32k x8 SRAM
      XC5204   - Xilinx XC5204 FPGA
      XC5210   - Xilink XC5210 FPGA
      N676H1   - PALCE16V8Q-15 stamped 'N676H1'

        
This PCB is used on the following games:
Racing Jam 2
Thrill Drive (NWK-TR)

GN676-PWB(H)B
MADE IN JAPAN
(C)1998 KONAMI
|------------------------|
|  CY7C199       N676H1  |
|                      2G|
|CN3                     |
|  HYC2485S              |
|   XC5204        XC5210 |
|CN2                     |
|         CN1            |
|------------------------|
This pcb is the same as the A version but with one added chip:
      2G       - XICOR X76F041 Secure SerialFlash (SOIC8)
        
                 Note: This chip is also present on *some* Hornet games on the GN715 CPU board at location
                 30C. The chip refreshes game and region specific serial data to the Timekeeper RAM if the
                 region ID matches the timekeeper. Because Racing Jam 2 and Thrill Drive came in a conversion
                 kit for Racing Jam, the two former games will first boot with a "backup data error" because
                 of the timekeeper used for the incorrect game. Pressing the test switch results in merging 
                 the old timekeeper data with the new data from the serialflash chip then it sets the
                 timekeeper back to factory settings for the new kitted game installed. If the region ID in
                 serialflash and timekeeper do not match, the game boots with a "hardware error" message.
                 Note this error is specific to the games that use this network board only. For other games
                 that do not use this network board, the Timekeeper data will be automatically refreshed by 
                 the serialflash chip on the mainboard, if one is present. If one is not present the result 
                 will be error RTC BAD then a PCB reset.
