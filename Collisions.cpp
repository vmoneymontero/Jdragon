/*
  collisions.cpp - Library for Collisions Objects
*/

#include "Arduino.h"
#include "Collision.h"

Collisions::Collisions(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void Collisions::dot() {
  println("Dot");
}

void Collisions::dash() {
  println("Dash");
}
