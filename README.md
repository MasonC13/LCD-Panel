﻿# LCD Message Display

## Overview

This AVR project demonstrates how to control a character LCD using ATmega328P microcontroller GPIO pins.  
The program initializes the LCD and cycles between two messages:  
- **"HELLO, WORLD!"** (printed one character at a time with a delay)
- **"Goodbye, world."**

## File Descriptions

- **main.c**: Application entry point; runs the LCD demonstration loop.
- **lcd.c / lcd.h**: LCD driver with initialization, character writing, and control functions.
- **delay.S / delay.h**: Provides `delay1us()` and `delay1ms()` timing functions for execution delays.
- **Makefile**: Defines build rules to compile, link, and generate the `.hex` file for flashing.

## Hardware Configuration

- **RS** - PD6  
- **ENABLE** - PD7  
- **DB4** - PB0  
- **DB5** - PB1  
- **DB6** - PB2  
- **DB7** - PB3  

Ensure the LCD is properly wired to these microcontroller pins.

## Build and Flash

1. Open terminal in the project directory.
2. Run `make` to build the project.
3. Flash the resulting `*.hex` file to your ATmega328P using your preferred programmer (e.g., USBasp, AVR ISP).

Example flashing command (adjust as needed):
```bash
avrdude -c usbasp -p m328p -U flash:w:your_project.hex:i

