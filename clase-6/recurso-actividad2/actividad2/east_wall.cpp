#include "east_wall.h"

EastWall::EastWall() : Wall() {}

void EastWall::paintWall(int coordX, int coordY) {
  if (isAWall) {
    char eastWall = char(186);
    goToXY(coordX + OFFSET, coordY);
    printf("%c", eastWall);
  }
}