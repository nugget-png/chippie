# Chippie - A Retro Handheld Console

Chippie is my DIY retro handheld console project built around the W65C02S CPU. The goal is to create a compact, portable gaming device with a framebuffer-based graphics system and other components.

## Features (Planned)
- **CPU**: W65C02S, an 8-bit microprocessor based on the 6502.
- **Graphics**: Framebuffer-based rendering for retro-style visuals, including an LCD.
- **Input**: Physical buttons and a D-pad.
- **Audio**: TBD (Likely an 8-bit audio chip).
- **Power**: A LiPo battery and charging circuit.
- **Storage**: EEPROM (electrically erasable programmable read-only memory).
- **Operating System**: A custom OS with basic menus such as system settings and games.

## Project Goals
1. Build a functional retro handheld console.
2. Learn and experiment with low-level hardware and software design.
3. Make playable games for the console.

### Components
- **W65C02S CPU**
- Framebuffer for rendering graphics on the screen (specific implementation TBD)
- Input/output components (TBD)
- LiPo battery and related power management components (TBD).

## Project Structure
- **Emulator**: The emulator used to emulate the console.
- **Hardware**: Schematics and PCB designs.
- **Firmware**: The system firmware such as the bootloader.
- **Software**: The OS and tools for game development.

## Roadmap
1. **Emulator Development (Not done)**:
   - Build an emulator to simulate the hardware.
   - Implement basic peripherals (framebuffer, input, etc.).
   - Add debugging tools to the emulator.

2. **Firmware and OS (Not done)**:
   - Develop the bootloader to initialize the system.
   - Create a custom OS with a retro-style home screen for navigating games and settings.
   - Implement basic system features like game loading and save management.

3. **Hardware Prototyping (Not done)**:
   - Design and prototype the hardware, including the CPU, memory, and input/output components.

4. **Integration and Testing (Not done)**:
   - Port the firmware and OS to the physical hardware.
   - Test and debug the system to ensure stability and performance.

5. **Game Development (Not done)**:
   - Create or port basic games for the console.
   - Provide tools and documentation for others to develop games.

6. **Final Hardware Design (Not done)**:
   - Refine the hardware design for a polished prototype.
   - Create PCB layouts and finalize the enclosure design.

## License
This project is licensed under the [MIT License](LICENSE).