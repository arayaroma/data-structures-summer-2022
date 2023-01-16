#include "maze.h"

Maze::Maze(int sizeOfRows, int sizeOfColumns) {
  rowsLength = sizeOfRows;
  columnsLength = sizeOfColumns;

  mazeMatrix = new StepRoad *[rowsLength];

  for (int i = 0; i < rowsLength; i++) {
    mazeMatrix[i] = new StepRoad[columnsLength];
  }

  initRandomSeed();

  entrance = rand() % rowsLength;
  exit = rand() % rowsLength;
}

Maze::~Maze() {
  for (int i = 0; i < rowsLength; i++) {
    delete[] mazeMatrix[i];
  }
  delete[] mazeMatrix;
}

void Maze::fillTestMaze() {
  int i, j;
  for (i = 0; i < rowsLength; i++) {
    for (j = 0; j < columnsLength; j++) {
      if (i == j) {
        mazeMatrix[i][j].setNorthWall(true);
        mazeMatrix[i][j].setSouthWall(true);
        mazeMatrix[i][j].setEastWall(true);
        mazeMatrix[i][j].setWestWall(true);
      }
    }
  }
}

void Maze::fillBaseMaze() {

  printf("Entrada %d: Salida %d\n\n", entrance, exit);

  bool putAWall = true;
  bool isEntrance, isExit;
  int i, j;
  for (i = 0; i < rowsLength; i++) {
    for (j = 0; j < columnsLength; j++) {
      mazeMatrix[i][j].setNorthWall(putAWall);
      mazeMatrix[i][j].setSouthWall(putAWall);

      isEntrance = (i == entrance) && (j == 0);
      isExit = (i == exit) && (j == columnsLength - 1);

      if (!isEntrance)
        mazeMatrix[i][j].setWestWall(putAWall);

      if (!isExit)
        mazeMatrix[i][j].setEastWall(putAWall);
    }
  }
}

void Maze::paintMaze() {
  // TODO: Realizar el codigo que permita pintar el Maze en pantalla
}

void Maze::generateMaze() {
  // TODO: Realizar el codigo que permita generar el Maze de manera aleatoria
  // segun el siguiente algoritmo:
  // 1. Choose the initial cell, mark it as visited and push it to the stack
  // 2. While the stack is not empty
  //	1. Pop a cell from the stack and make it a current cell
  //	2. If the current cell has any neighbours which have not been visited
  //		1. Push the current cell to the stack
  //		2. Choose one of the unvisited neighbours
  //		3. Remove the wall between the current cell and the chosen cell
  //		4. Mark the chosen cell as visited and push it to the stack

  // Recuerde crear todos los metodos necesarios que permitan cumplir con este
  // algoritmo y que cumplan con el principio de la responsabilidad unica
  //...
}

// Private methods
void Maze::initRandomSeed() { srand((unsigned)time(NULL)); }
