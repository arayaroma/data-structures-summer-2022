
#include "maze.h"
#include <iostream>

int main() {

  Maze newMaze(15, 30);

  // newMaze.fillTestMaze();
  newMaze.fillBaseMaze();
  newMaze.generateMaze();
  newMaze.paintMaze();
}
