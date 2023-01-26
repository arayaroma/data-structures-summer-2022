#pragma once
#include "wall.h"

class NorthWall : public Wall {
private:
public:
  NorthWall();
  ~NorthWall();

  void paintWall(int, int);
};
