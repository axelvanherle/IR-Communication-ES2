# IR-Communication-ES2: A Self-Made PCB Wireless Communication System
<p align="center"><img src="https://user-images.githubusercontent.com/94362354/219086257-167bd306-9224-439a-ba16-726475401407.png"  width="30%"></p>

The objective of this project is to develop a wireless communication and distance measurement system utilizing self-made PCBs equipped with IR LEDs. This system has the ability to transmit messages and determine the distance between devices. Messages can be transmitted via an Arduino (using UART) or a simple button through the IR LED. Upon transmission, the receiver PCB detects the distance from the sender PCB and illuminates an 4 unit LED bar to indicate distance, and a regular LED to indicate a signal. This enables sending messages via UART or transmitting Morse code (for example) over IR.

The system operates by allowing one device to transmit a message using IR light, which can then be received by another device equipped with a compatible IR receiver (another IR LED). The distance between devices is calculated based on the voltage received by the receiver IR LED.

For example; if i press the button on the sender PCB, a LED on the receiver would light up and i would get the estimated distance shown on the 4 unit LED bar. However, i could also use an Arduino to craft these messages for me and send it over UART. In this case, i would not be receiving the messages via the LED being high or low, but the receiver PCB would show me the received message over UART.

The distance between two devices gets measured using IR light and opamps. The opamps measure the voltage received by an IR LED, enabling estimation of the distance between the two devices.

Each PCB in this design is capable of duplex communication and distance measurement. As such, all PCBs can both transmit and receive messages while also determining their relative distance from each other.

## Directory structure and what they are
This project is organized into several subdirectories. Here is a brief overview of each directory:
- `/altium`: This directory contains the schematic design and PCB design. All made in Altium Designer.
- `/arduino`: This directory contains the source code wich will be used on the Arduinos.
- `/multisim`: This directory contains the schematics made in NI Multisim to test our circuits.

## Documentation

All documentation can be found under the `docs` folder.

What can be found here?

- Documentation about Altium Designer;
- Documentation about Arduino;
- Documentation about NI Multisim.
