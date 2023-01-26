#include "west_wall.h"

WestWall::WestWall() : Wall() {}

void WestWall::paintWall(int coordX, int coordY) {
  if (isAWall) {
    char westWall = char(186);
    goToXY(coordX - OFFSET, coordY);
    printf("%c", westWall);
  }
}