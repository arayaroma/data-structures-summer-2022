#pragma once
#include "wall.h"

class EastWall : public Wall {
private:
public:
  EastWall();
  ~EastWall();

  void paintWall(int, int);
};