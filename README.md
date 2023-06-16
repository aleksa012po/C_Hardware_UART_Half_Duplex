# C_Hardware_UART_Half_Duplex

This project demonstrates UART (Universal Asynchronous Receiver Transmitter) communication 
using an AVR microcontroller. The code sets up the microcontroller to send and receive data via the UART interface.

Hardware Setup
- Connect the TX (Transmit) pin of the microcontroller to the RX (Receive) pin of the UART receiver device.
- Connect the RX (Receive) pin of the microcontroller to the TX (Transmit) pin of the UART receiver device.
- Ensure that the baud rate settings in the code match the settings of the UART receiver device.
- 
Getting Started
1. Set up the necessary hardware connections.
2. Compile and upload the code to the AVR microcontroller.
3. Once the microcontroller is powered on, it will start transmitting and receiving data via UART.
4. The program continuously checks for incoming data. If data is received, it is immediately transmitted back.
5. 
Feel free to modify the code to suit your specific requirements and use cases.

Note: Make sure to refer to the microcontroller datasheet and UART receiver device documentation for pin configurations, voltage levels, and other specifications.

Happy experimenting with UART communication!
