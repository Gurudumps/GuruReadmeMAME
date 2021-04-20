/***************************************************************************

Amstrad PPC512/PPC640, Amstrad 1987
Hardware info by Guru
Last updated: No changes
------------------------

The Amstrad PPC512/PPC640 is an XT-class portable PC with a built in
mono 9" LCD screen supporting CGA and MDA.

The specification includes:
- NEC V30 (8086-compatible) 16-bit CPU at 8MHz (Sony CXQ70116P-8)
- For PPC640, 640k RAM & 64k video memory
  For PPC512, 512k RAM & 64k video memory. Main RAM can be expanded to 640k
  by inserting the correct type of DRAMs into the 6 unpopulated locations on the motherboard
- Integrated display adapter compatible with CGA and MDA
- Built in mono 640 x 200 pixel 9" LCD screen, tiltable with contrast adjustment
- 25 pin parallel printer port
- 25 pin serial port
- Internal 2400bps modem (PPC640 only, via optional plug-in PCB)
- Enhanced AT-type keyboard with 101 or 102 keys
- Single or twin 720k 3 1/2" floppy drive
- MSDOS 3.3 (bundled with the unit)
- Speaker with volume control
- Battery-backed real time clock
- Socket for 8087 Math Co-processor
- Socket for external expansion box to accept IBM-compatible expansion cards and hard disk
- Compartment for 10x alkaline 'C' cells for up to 8 hours of use


CPU PCB
-------

MC0051D
Z70850
|-------------------------------------------------------------------|
|   VIDEO     PARALLEL    SERIAL         EXP-B        EXP-A         |
|                    LK2   1489                                     |
|DIPSW(6)            LK3          28.63636MHz    24MHz              |
|                    LK1  6845R      |------|        CX112          |
|         1.8432MHz                  | 40104|                  CX902|
|            INS82C50                |------|      |-------|        |
|                                                  |40039  |        |
|            1489  1488                            |       |        |
|                           LC3664   |------|      |       |        |
|      6MHz                 LC3664   |T4750 |      |-------|   CX901|
|   40112    LCD-CONN                |------|                       |
|KEYB1       KEYB2          40109.IC159                             |
|            KEYB3    LA4140    LK6 LK7                     8087    |
| LED   CONT           SPEAKER  VOLUME      CY903           V30     |
|-------------------------------------------------------------------|
Notes:
      VIDEO       - 9 pin D-sub video port
      PARALLEL    - 25 pin D-sub parallel port
      SERIAL      - 25 pin D-sub serial port
      EXP-B       - Expansion port B
      EXP-A       - Expansion port A
      DIPSW       - 6 position DIP switch (up is off, down is on. * = Default)
                    SW1: Display Use
                         ON  - Internal LCD *
                         OFF - External monitor
                    SW2: Video Emulation Mode
                         ON  - CGA *
                         OFF - MDA
                    SW3: Video Adapter Enable
                         ON  - Use internal video adapter *
                         OFF - Use external video adapter in external expansion box
                    SW4,5:  Initial Video Mode
                            OFF, OFF - External video card
                            OFF, ON  - CGA 40 column
                            ON , OFF - CGA 80 column *
                            ON , ON  - MDA 80 column
                    SW6 - Not Used
      1488        - MC1488 Quad Line EIA232 Driver
      1489        - MC1489 Quad Line EIA232 Receiver
      INS82C50    - 82C50 UART marked as Amstrad 40049 custom chip. Clock input 1.8432MHz
      CX112       - Jumper to configure 40039 gate array to address either 512k or 640k RAM (sometimes marked LK5)
      6845R       - UMC UM6845R CRT Controller. Clock input on pin 21 unknown (comes from the 40104 custom chip)
      40104       - VDU/LCD custom gate array LCD controller
      40039       - Bus controller custom gate array marked as Amstrad 40039 custom chip. Clock input 24.000MHz. This chip generates the 8MHz for the CPU.
      T4750       - DMA/Programmable Interrupt Controller/Programmable Timer custom chip
      40112       - Keyboard controller (likely i8049/i8051) marked as Amstrad 40012 custom chip. Clock input 6.000MHz
      LCD-CONN    - Multi pin connector for LCD screen
      KEYB1       - 5 pin connector for keyboard caps lock, scroll lock and num lock keys, plus VCC and GND
      KEYB2       - Multi pin connector for keyboard matrix
      KEYB3       - Multi pin connector for keyboard matrix
      CX901/902   - Connectors joining to optional modem PCB
      LED         - Connector for power-on LEDs
      CONT        - Connector for LCD screen contrast adjustment
      LA4140      - Sanyo LA4140 0.5W audio power amplifier IC
      SPEAKER     - Connector for PC speaker
      VOLUME      - Connector for audio volume knob
      LC3664      - Sanyo LC3664 8kx8-bit Static RAM
      40109.IC159 - 8kx8-bit character ROM. Compatible with 2764 EPROM
                    Font selection is set with LK6 & LK7
      CY903       - Multi pin connector for connection to memory/power PCB
      8087        - Socket for i8087-2 Numeric Data Processor (math coprocessor). Clock input 8.000MHz
      V30         - NEC V30 CPU (Sony CXQ70116P-8). Clock input 8.000MHz
      LK1/LK2/LK3 - Jumpers to set language selection (off = open, on = short)
                    LK1  LK2  LK3
                    OFF  OFF  OFF  English
                    OFF  OFF  ON   German
                    OFF  ON   OFF  French
                    OFF  ON   ON   Spanish
                    ON   OFF  OFF  Danish
                    ON   OFF  ON   Swedish
                    ON   ON   OFF  Italian
                    ON   ON   ON   Diagnostic Mode
      LK6/LK7     - Jumpers to set font selection in ROM (off = open, on = short)
                    LK6  LK7
                    OFF  OFF Normal    : Codepage 437
                    OFF  ON  Norwegian : Codepage 865
                    ON   OFF Portugese : Codepage 860
                    ON   ON  Greek     : Codepage unknown but will be 869 or 851 or 737


MEMORY / POWER PCB
------------------

MC0052D
Z70851
|----------------------------------------------------------------|
|                         NE556   KBSW  BATSW            POWER   |
|                            41256  41256    X    41256  41256   |
|                                                                |
|                            41256  41256    X    41256  41256   |
|                                                                |
|FD   UM8272A                41256  41256    X    41256  41256   |
|                                                                |
|            16MHz           41256  41256    X    41256  41256   |
|    SED9420                                                     |
|                                            LK4         41256Y  |
|---------------|              |-------|                         |
                |              |40040  |     40108.IC129   Y     |
                |              |       |                         |
                |              |       |     40107.IC132 41256Y  |
                |   32.768kHz  |-------|                         |
                | MC146818                                 Y     |
                |     FDDLED          CX903                      |
                |------------------------------------------------|
Notes:
      FD          - 34 pin floppy drive cable
      FDDLED      - Connector for floppy drive activity LED for drives A: and B:
      POWER       - Connector for mains power input
      SED9420     - EPSON SED9420 data separator for FDD. Clock input 16.000MHz
      UM8272A     - UMC UM8272A floppy drive controller (pin compatible with uPD765)
      41256       - Samsung KM41256AP-15 256kx1-bit DRAM
      41256Y      - Samsung KM41256AP-15 256kx1-bit DRAM used as parity RAM
      X           - Unpopulated location for 64kx4-bit DRAM (additional 128k expansion to give 640kb main RAM for PPC512)
      Y           - Unpopulated location for 256kx1-bit DRAM (additional parity RAM to support the additional 128k RAM)
      LK4         - Jumper to set physical main RAM present on the PCB to either 512k or 640k
      40108.IC129 - BIOS ROM. Compatible with 2764 EPROM
      40107.IC132 - BIOS ROM. Compatible with 2764 EPROM
      CX903       - Multi pin connector for connection to CPU PCB. The connector is located on the solder side of this PCB.
      40040       - Memory controller gate array marked as Amstrad 40040 custom chip
      NE556       - NE556 Dual Timer
      MC146818    - Motorola MC146818 Real Time Clock
      KBSW        - Connector for keyboard open/close detect switch
      BATSW       - Connector for battery/mains power detect switch

***************************************************************************/
