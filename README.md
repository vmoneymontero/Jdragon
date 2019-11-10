# Jdragon

A game where you collect dots :)

Wiring instructions:

Connecting the Arduino to the LED Matrix (MAX7219)
	
	Connecting LED Matrix 1 (LC1):
		VCC -> 5V pin on Arduino
		GND -> GND pin on Arduino
		DIN -> pin 25
		CS  -> pin 27
		CLK -> pin pin 11


Connecting the Arduino to the Joystick:

	Joystick 1:
		V5+ -> 5V pin on Arduino
		GND -> GND pin on Arduino
		VRx -> pin A2
		VRy -> pin A3



Note: wiring must be exactly as described otherwise the code will not run as intended, some stuff is weird but we just went with it.
		
