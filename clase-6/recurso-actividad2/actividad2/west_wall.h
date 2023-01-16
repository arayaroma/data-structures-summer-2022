#pragma once
#include "wall.h"

class WestWall : public Wall {
private:
public:
  WestWall();
  ~WestWall();

  void paintWall(int, int);
};