#include "south_wall.h"

SouthWall::SouthWall() : Wall() {}

void SouthWall::paintWall(int coordX, int coordY) {
  if (isAWall) {
    char southWall = char(205);
    goToXY(coordX, coordY + OFFSET);
    printf("%c", southWall);
  }
}