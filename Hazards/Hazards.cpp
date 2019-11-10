/*
  Hazards
*/

#include <Arduino.h>
#include <Hazards.h>

Hazards::Hazards(int x, int y, int matrix_num) {
}

int Hazards::position() {
  int posx = x;
  int posy = y;
  int matrix = _matrix_num;
  return _posx, _posy, matrix;
}

void Hazards::moveLeft() {
  x++;
}

void Hazards::moveRight() {
  x--;
}

void Hazards::MatrixRight(){
  matrix_num++;
}

void Hazards::MatrixLeft() {
  matrix_num--;
}
