
This is a simple Bluetooth experiment I took on, just for grins. 

It utilizes an adafruit NRF51822 module and an Atmega32u4 MCU. Keyboard firmware is QMK

Currently there is an error in the PCB design that needs to be corrected. 

Column 0 needs to be re-routed to one of the 2 available left over pins as it's currently routed to a pin that is apparantly utilized in SPI communications. 

Due to the above, one of the indicator LEDs should be removed. 