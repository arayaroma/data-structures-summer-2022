#pragma once
#include "east_wall.h"
#include "north_wall.h"
#include "south_wall.h"
#include "wall.h"
#include "west_wall.h"

class StepRoad {
private:
  Wall *northWall;
  Wall *southWall;
  Wall *eastWall;
  Wall *westWall;

  bool isVisited;

public:
  StepRoad();
  ~StepRoad();

  void setNorthWall(bool);
  void setSouthWall(bool);
  void setEastWall(bool);
  void setWestWall(bool);

  bool getNorthWall();
  bool getSouthWall();
  bool getEastWall();
  bool getWestWall();

  void setIsStepVisited(bool);
  bool getIsStepVisited();

  void paintStepRoad(int, int);
};