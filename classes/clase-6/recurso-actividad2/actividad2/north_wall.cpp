#include "north_wall.h"

NorthWall::NorthWall() : Wall() {}

void NorthWall::paintWall(int coordX, int coordY) {
  if (isAWall) {
    char northWall = char(205);
    goToXY(coordX, coordY - OFFSET);
    printf("%c", northWall);
  }
}