# Jdragon

A 2 player game in which opponents compete in a head to head matchup of skill and timing.

Wiring instructions:

Connecting the Arduino to the LED Matrix (MAX7219)
	
	Connecting LED Matrix 1 (LC1):
		VCC -> 5V pin on Arduino
		GND -> GND pin on Arduino
		DIN -> pin 25
		CS  -> pin 27
		CLK -> pin pin 11
	Connecting LED Matrix 2 (LC2):
		VCC -> 5V pin on Arduino
		GND -> GND pin on Arduino
		DIN -> pin 22
		CS  -> pin 23
		CLK -> pin 13
	Connecting LED Matrix 3 (LC3):
		VCC -> 5V pin on Arduino
		GND -> GND pin on Arduino
		DIN -> pin 24
		CS  -> pin 25
		CLK -> pin 12

Connecting the Arduino to the Joystick:

	Joystick 1:
		V5+ -> 5V pin on Arduino
		GND -> GND pin on Arduino
		VRx -> pin A2
		VRy -> pin A3

	Joystick 2:
		V5+ -> 5V pin on Arduino
		GND -> GND pin on Arduino
		VRx -> pin A0
		VRy -> pin A1

Note: wiring must be exactly as described otherwise the code will not run as intended, some stuff is weird but we just went with it.
		
We tried our very best :(
We did learn a lot tho, HackED better watch out. We coming back with a vengeance. Team No Caffiene will return.