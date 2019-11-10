/*
  Hazards.h - Hazard File
*/
#ifndef hazards_h
#define hazards_h

#include <Arduino.h>

class Hazards {
  public:
    Hazards(int x, int y, int matrix_num);
    int position();
    void moveLeft();
    void moveRight();
    void MatrixRight();
    void MatrixLeft();
    int _x;
    int _y;
    int _matrix_num;
};

#endif
