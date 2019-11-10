/*
  Hazards
*/

#include <Arduino.h>
#include <Hazards.h>

Hazards::Hazards(int x, int y, int matrix_num) {
  _x = x;
  _y = y;
  _matrix_num = matrix_num;
}

int Hazards::position() {
  int _posx = _x;
  int _posy = _y;
  int matrix = _matrix_num;
  return _posx, _posy, matrix;
}

void Hazards::moveLeft() {
  _x++;
}

void Hazards::moveRight() {
  _x--;
}

void Hazards::MatrixRight(){
  _matrix_num++;
}

void Hazards::MatrixLeft() {
  _matrix_num--;
}
