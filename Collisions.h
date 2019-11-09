/*
  Collisions.h - Library for the Collision Objects
*/

#ifndef Collsions_h
#define Collsions_h

#include "Arduino.h"

class obstacle {
  public:
    obstacle(int pin);
    void dot();
    void dash();
  private:
    int _pin;
}

#endif
