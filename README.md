# CPU Thermal Control System

A closed-loop embedded system for real-time CPU temperature monitoring and 
automated cooling control.

## Overview
- Reads temperature via DS18B20 sensor connected to Arduino
- Triggers relay-based fan control when thresholds are breached
- Python Tkinter GUI displays live temperature graph and system status

## Tech Stack
- **Hardware:** Arduino Uno, DS18B20, relay module
- **Firmware:** Arduino C/C++
- **Interface:** Python 3, Tkinter, pyserial

## How to Run
1. Flash `thermal_control.ino` to Arduino
2. Connect hardware as per circuit diagram
3. Run `gui.py` — ensure correct COM port is set

## Applications
Relevant to thermal management in embedded electronics and detector systems.
