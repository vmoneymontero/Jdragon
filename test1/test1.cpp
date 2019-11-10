/*
  test.cpp
*/

#include <Arduino.h>
#include <test1.h>

test1::test1() {
}

void test1::dot() {
  Serial.println("Dot");
}

void test1::dash(){
  Serial.println("Dash");
}
