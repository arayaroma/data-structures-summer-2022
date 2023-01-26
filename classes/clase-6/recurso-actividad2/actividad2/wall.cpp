#include "wall.h"

Wall::Wall() { this->isAWall = false; }

void Wall::setIsAWall(bool isAWall) { this->isAWall = isAWall; }

bool Wall::getIsAWall() { return isAWall; }

void Wall::goToXY(int coordX, int coordY) {
  HANDLE hcon;
  hcon = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD dwPos;
  dwPos.X = coordX;
  dwPos.Y = coordY;
  SetConsoleCursorPosition(hcon, dwPos);
}