class-build-binary-clock
========================

Class, where we build a binary clock

Prerequisites
=============

- **Arduino IDE** 
  - http://arduino.cc/en/Main/Software
  - Follow the Getting Started link
- **Time** library by PaulStoffregen at Github:
  - https://github.com/PaulStoffregen/Time
  - Download library and rename folder to "Time"
  - Drag Time library to the Arduino Library folder:
    - **Mac** ~\Documents\Arduino\libraries\

Troubleshooting
===============

- **Won't Program** The programmer keeps throwing this "avr_dude" error and I can't get my software on the Arduino!
  - Make sure both pins 0 and 1 on the Arduino board are disconected. If these pins are hooked to LEDs the programming may not work.