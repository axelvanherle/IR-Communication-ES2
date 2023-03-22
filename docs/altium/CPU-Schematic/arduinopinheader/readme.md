# Arduino pin header documentation.

With this design, we made it possible to switch between D3/RX and D2/TX. This provides the flexibility to switch from UART to these digital pins in case of a different software design for the Arduino. Additionally, pull-down resistors are used on all these lines, and the 5V and ground signals are connected to the rest of the schematic.

![image](https://user-images.githubusercontent.com/94362354/226914134-8b2132fb-19b0-49fa-9625-3983e8911bdb.png)
