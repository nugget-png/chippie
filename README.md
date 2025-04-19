# Chippie - A Retro Handheld Console

Chippie is my DIY retro handheld console project built around the W65C816 CPU. The goal is to create a compact, portable gaming device with a framebuffer-based graphics system and other components.

## Features (Planned)
- **CPU**: W65C816, a 16-bit microprocessor running in native mode.
- **Graphics**: Framebuffer-based rendering including an LCD.
- **Input**: Physical buttons and a D-pad.
- **Audio**: 16 bit PCM-based audio.
- **Power**: A LiPo battery and charging circuit.
- **Memory**: 512kb System memory, alongside 1mb framebuffer memory.
- **Storage**: 512kb EEPROM (electrically erasable programmable read-only memory).
- **Operating System**: A custom modular OS with basic menus such as system settings and games. Supports dynamic kernel plugins and filesystems. 

## Project Goals
1. Build a functional retro handheld console.
2. Learn and experiment with low-level hardware and software design.
3. Make playable games for the console.

## Components
- **W65C816 CPU**
- Framebuffer for rendering graphics on the screen (specific implementation TBD)
- Input/output components (TBD)
- LiPo battery and related power management components (TBD).

## Project Structure
- **Emulator**: The emulator used to emulate the console.
- **Hardware**: Schematics and PCB designs.
- **Firmware**: The system firmware such as the bootloader.
- **Software**: The OS and tools for game development.

## License
This project is licensed under the [MIT License](LICENSE).
