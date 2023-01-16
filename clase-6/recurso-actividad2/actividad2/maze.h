#pragma once
#include "step_road.h"
#include <iostream>
#include <random>
#include <stack>

const int DIRECTIONS = 4;
const int NORTH = 0;
const int SOUTH = 1;
const int EAST = 2;
const int WEST = 3;

class Maze {
private:
  int entrance, exit;
  int rowsLength, columnsLength;

  StepRoad **mazeMatrix;

  void initRandomSeed();

  bool isVisitedNeighbor(int, int);
  bool findNeighbor(int *, int *);
  bool isVerifiedAllDirections(int *);

public:
  Maze(int, int);
  ~Maze();

  void fillTestMaze();
  void fillBaseMaze();
  void generateMaze();

  void paintMaze();
};