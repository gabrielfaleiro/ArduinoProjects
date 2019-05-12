# Documents

## Personal Arduino Boards

- Chinesse UNO       - Atmel MEGA328P AV 1451
- Chinesse UNO Baite - Atmel MEGA328P AU 1433

## uP DataSheet

http://ww1.microchip.com/downloads/en/DeviceDoc/ATmega48A-PA-88A-PA-168A-PA-328-P-DS-DS40002061A.pdf

## Arduino UNO R3 Schematic

https://www.arduino.cc/en/uploads/Main/Arduino_Uno_Rev3-schematic.pdf

## Necessary Driver CH340

To recognise chinesse Arduino Boards, it is necessary to install the ch340 driver.

REF: https://www.geekfactory.mx/tutoriales/tutoriales-arduino/driver-ch340-para-arduino-chinos-o-genericos/

## Program with Atmel Studio 7

In Atmel Studio 7, open Tools->External Tools...
    - Title: Arduino_via_bootloader
    - Command: C:\"Program Files"\WindowsApps\ArduinoLLC.ArduinoIDE_1.8.21.0_x86__mdqgnx93n4wtt\hardware\tools\avr/bin/avrdude.exe
    - Arguments: -C"C:\Program Files\WindowsApps\ArduinoLLC.ArduinoIDE_1.8.21.0_x86__mdqgnx93n4wtt\hardware\tools\avr/etc/avrdude.conf" -v -patmega328p -carduino -PCOM3 -b115200 -D -Uflash:w:"$(ProjectDir)Debug\$(TargetName).hex":i
    - Check "Use Output window"

REF: https://www.youtube.com/watch?time_continue=508&v=zEbSQaQJvHI

If problems are found when running or booting the solution, please follow the next link:

REF: https://www.avrfreaks.net/forum/avrdude-4


