#pragma once
#include "wall.h"

class SouthWall : public Wall {
private:
public:
  SouthWall();
  ~SouthWall();

  void paintWall(int, int);
};