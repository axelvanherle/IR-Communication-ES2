# IR-Communication-ES2: A Self-Made PCB Wireless Communication System
<p align="center"><img src="https://user-images.githubusercontent.com/94362354/219086257-167bd306-9224-439a-ba16-726475401407.png"  width="30%"></p>

The aim of this project is to create a wireless communication and distance measurement system through self-made PCBs using IR LEDs which can transmit messages and detect the distance between devices. To generate these messages, an Arduino microcontroller or a simple button can be used, which will send the signals to the IR LEDs presented on the PCBs, which will then transmit data.

This system operates by allowing one device to send a message using IR light, which can be received by another device equipped with a compatible IR receiver. The receiver will then decode the message and display it on a screen or any other output device.

In addition, this system can also measure the distance between two devices using IR light and opamps. The opamps will measure the voltage received by an IR LED, so we can estimate the distance between the two devices.

In this design, every PCB is capable of duplex communication and distance measurement, which means that both can transmit and receive messages and detect their relative distance. This feature ensures that all PCBs can communicate and measure their distance with each other.

## Directory structure and what they are
This project is organized into several subdirectories. Here is a brief overview of each directory:
- `/altium`: This directory contains the schematic design and PCB design for the PCB. All made in altium.
- `/arduino`: This directory contains the source code which will be used on the arduinos.
- `/multisim`: This directory contains the schematics made in multisim to test our circuits

## Documentation

All documentation can be found under the `docs` folder.

What can be found here?

- Documentation about altium
- Documentation about arduino
- Documentation about multisim
