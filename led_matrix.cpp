#include <LedControl.h>

// DIN, CLK, CS
LedControl lc1=LedControl(26, 11, 27, 1);
LedControl lc2=LedControl(22, 13, 23, 1);
LedControl lc3=LedControl(24, 12, 25, 1);

int SW_pin[2] = {6, 7}; // digital pin connected to switch output
int X_pin[2] = {0, 2}; // analog pin connected to X output
int Y_pin[2] = {1, 3};// analog pin connected to Y output

// initial positions of players
int row[2] = {0, 5};
int col[2] = {4, 4};

class Player{

  public:

  LedControl lc = lc2;
  int row;
  int col;

  int SW_pin; // digital pin connected to switch output
  int X_pin; // analog pin connected to X output
  int Y_pin;// analog pin connected to Y output

  void makeCharacter(){

    lc.setLed(0, row, col, 0);
    lc.setLed(0, row+1, col, 1);
    lc.setLed(0, row+2, col, 0);
    lc.setLed(0, row, col+1, 1);
    lc.setLed(0, row+1, col+1, 1);
    lc.setLed(0, row+2, col+1, 1);
    lc.setLed(0, row, col+2, 0);
    lc.setLed(0, row+1, col+2, 1);
    lc.setLed(0, row+2, col+2, 0);
    lc.setLed(0, row, col+3, 1);
    lc.setLed(0, row+1, col+3, 0);
    lc.setLed(0, row+2, col+3, 1);
    
  }

  void wipeCharacter(){

    for (int i = 0; i < 3; i++){
      for (int j = 0; j < 4; j++){
        lc.setLed(0, row+i, col+j, 0);
      }
    }
    
  }

  void moveCharacter(){
  
    if (analogRead(X_pin) > 900 && row < 5){
  
      wipeCharacter();
      row++;
      
    }
    if (analogRead(X_pin) < 100 && row > 0){
  
      wipeCharacter();
      row--;
      
    }
    if (analogRead(Y_pin) > 900){
  
      for (int i=0; i<4; i++){
        wipeCharacter();
        col--;
        makeCharacter();
        delay(30*i);
      }
      delay(300);
  
      for (int i=0; i<4; i++){
        wipeCharacter();
        col++;
        makeCharacter();
        delay(60/(i+1));
      }
      
    }
  
    makeCharacter();
    delay(100);
      
  }
  
};

Player player1;
Player player2;

void setup() {

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

  //player1
  player1.lc = lc3;
  
  player1.row = 5;
  player1.col = 4;

  player1.X_pin = 2;
  player1.Y_pin = 3;
  player1.SW_pin = 7;

  //player2
  player2.lc = lc1;
  
  player2.row = 0;
  player2.col = 4;

  player2.X_pin = 0;
  player2.Y_pin = 1;
  player2.SW_pin = 6;
  
}



void loop() {
  // put your main code here, to run repeatedly:

  player1.moveCharacter();
  player2.moveCharacter();

/*
  Serial.print("Switch:  ");
  Serial.print(digitalRead(SW_pin[1]));
  Serial.print("\n");
  Serial.print("X-axis: ");
  Serial.print(analogRead(X_pin[1]));
  Serial.print("\n");
  Serial.print("Y-axis: ");
  Serial.println(analogRead(Y_pin[1]));
  Serial.print("\n\n");
  delay(500);
*/

  /*
  for (int j = 0; j < 8; j++){
    for (int i = 0; i < 8; i++){
      lc1.setLed(0, i, j, 1);
      lc2.setLed(0, i, j, 1);
      lc3.setLed(0, i, j, 1);
      delay(100);
    }
    for (int i = 0; i < 8; i++){
      lc1.setLed(0, i, j, 0);
      lc2.setLed(0, i, j, 0);
      lc3.setLed(0, i, j, 0);
      delay(100);
    }
  }
  */
  

}
