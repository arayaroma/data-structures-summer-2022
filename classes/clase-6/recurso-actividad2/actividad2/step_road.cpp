#include "step_road.h"

StepRoad::StepRoad() {
  northWall = new NorthWall();
  southWall = new SouthWall();
  eastWall = new EastWall();
  westWall = new WestWall();

  isVisited = false;
}

StepRoad::~StepRoad() {
  // delete northWall;
}

void StepRoad::setNorthWall(bool isAWall) { northWall->setIsAWall(isAWall); }
bool StepRoad::getNorthWall() { return northWall->getIsAWall(); }

void StepRoad::setSouthWall(bool isAWall) { southWall->setIsAWall(isAWall); }
bool StepRoad::getSouthWall() { return southWall->getIsAWall(); }

void StepRoad::setEastWall(bool isAWall) { eastWall->setIsAWall(isAWall); }
bool StepRoad::getEastWall() { return eastWall->getIsAWall(); }

void StepRoad::setWestWall(bool isAWall) { westWall->setIsAWall(isAWall); }
bool StepRoad::getWestWall() { return westWall->getIsAWall(); }

void StepRoad::setIsStepVisited(bool isVisited) { this->isVisited = isVisited; }
bool StepRoad::getIsStepVisited() { return isVisited; }

void StepRoad::paintStepRoad(int coordX, int coordY) {
  northWall->paintWall(coordX, coordY);
  southWall->paintWall(coordX, coordY);
  eastWall->paintWall(coordX, coordY);
  westWall->paintWall(coordX, coordY);
}