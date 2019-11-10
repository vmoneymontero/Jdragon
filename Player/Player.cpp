/*
  test.cpp
*/

#include <Arduino.h>
#include <Player.h>
#include <LedControl.h>



Player::Player(int row, int col, int SW_pin, int X_pin, int Y_pi, LedControl lc) {

}

void Player::makeCharacter() {
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

void Player::wipeCharacter() {

  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 4; j++){
      lc.setLed(0, row+i, col+j, 0);
    }
  }

}

void Player::moveCharacter(){

  if (analogRead(X_pin) > 900 && row < 5){

    wipeCharacter();
    row++;
    makeCharacter();
    delay(100);


  }
  if (analogRead(X_pin) < 100 && row > 0){

    wipeCharacter();
    row--;
    makeCharacter();
    delay(100);


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
}
