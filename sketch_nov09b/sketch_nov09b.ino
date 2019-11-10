#include <Player.h>


// DIN, CLK, CS
LedControl lc1 = LedControl(26, 11, 27, 1);
LedControl lc2 = LedControl(22, 13, 23, 1);
LedControl lc3 = LedControl(24, 12, 25, 1);

int SW_pin[2] = {6, 7}; // digital pin connected to switch output
int X_pin[2] = {0, 2}; // analog pin connected to X output
int Y_pin[2] = {1, 3};// analog pin connected to Y output

// initial positions of players
int row[2] = {0, 5};
int col[2] = {4, 4};


Player player1(row[0], col[0], SW_pin[0], X_pin[0], Y_pin[0], lc1);
Player player2(row[1], col[1], SW_pin[1], X_pin[1], Y_pin[1], lc3);



void setup() {
  // put your setup code here, to run once:
// initialize each led matrix
  lc1.shutdown(0, false);
  lc1.setIntensity(0,8);
  lc1.clearDisplay(0);

  lc2.shutdown(0, false);
  lc2.setIntensity(0,8);
  lc2.clearDisplay(0);
  
  lc3.shutdown(0, false);
  lc3.setIntensity(0,8);
  lc3.clearDisplay(0);
  
  pinMode(SW_pin[0], INPUT);
  digitalWrite(SW_pin[0], HIGH);

  pinMode(SW_pin[1], INPUT);
  digitalWrite(SW_pin[1], HIGH);
  
  Serial.begin(9600);


  player1.makeCharacter();
  player2.makeCharacter();
}

int x = 0;
int y = 0;

void loop() {
  player1.moveCharacter();
  player2.moveCharacter();
  // put your main code here, to run repeatedly:
}
