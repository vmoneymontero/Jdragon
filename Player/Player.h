/*
  test.h
*/
#ifndef Player_h
#define Player_h

#include <Arduino.h>
#include <LedControl.h>



class Player {
  public:
    Player(int row, int col, int SW_pin, int X_pin, int Y_pin, LedControl lc);
    void makeCharacter();
    void wipeCharacter();
    void moveCharacter();

    int row;
    int col;

    int SW_pin;
    int X_pin;
    int Y_pin;
    LedControl lc = LedControl(22, 13, 23, 1);
};

#endif
