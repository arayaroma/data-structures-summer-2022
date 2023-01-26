#pragma once
#include <stdio.h>
#include <windows.h>

const int OFFSET = 1;

class Wall {
protected:
  bool isAWall;

  void goToXY(int, int);

public:
  Wall();
  ~Wall();
  void setIsAWall(bool);
  bool getIsAWall();
  virtual void paintWall(int, int) = 0;
};