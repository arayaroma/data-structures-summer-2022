#include <iostream>
#include <stack>
#include <random>

#define DUNGEON_MESSAGE "               DUNGEON"

#define EXIT 'E'
#define START 'S'
#define PATH '*'

#define ROWS 20
#define COLUMNS 20  

class Cell {
private:
  bool *_isVisited;
  int pos_x, pos_y;

public:

  Cell();
  Cell(bool *isVisited, int pos_x, int pos_y) { 
    this->_isVisited = isVisited;
    this->pos_x = pos_x;
    this->pos_y = pos_y;
  }

  ~Cell();

  void setVisited(bool *isVisited) { this->_isVisited = isVisited; }
  bool *isVisited() const { return this->_isVisited; } 

  void setPosition(int pos_x, int pos_y) {
    this->pos_x = pos_x;
    this->pos_y = pos_y;
  }

  void getPosition(int* pos_x, int* pos_y) const {
    *(pos_x) = this->pos_x;
    *(pos_y) = this->pos_y;
  }

};

class Dungeon {
private:
  char** dungeonMatrix;
  bool b_dungeonMatrix;
  std::stack<bool> visitedCells;

public:
  Dungeon() {
    int i;
    dungeonMatrix = new char *[ROWS];
    for(i = 0; i < COLUMNS; i++){
      dungeonMatrix[i] = new char[COLUMNS];
    }
  }


  void depthFirstSearch() { 
     
  }

  void makeEntry() {
    int random_x = getRandomNumber(0, 19);
    int random_y = getRandomNumber(0, 19);
   dungeonMatrix[random_x][random_y] = START; 
  } 

  void makeExit() {
    int random_x = getRandomNumber(0, 19);
    int random_y = getRandomNumber(0, 19);
   dungeonMatrix[random_x][random_y] = EXIT; 
  }

  void loadDungeonMatrix(){
    int i, j;
    for(i = 0; i < ROWS; i++){
      for(j = 0; j < COLUMNS; j++){
        *(*(dungeonMatrix+i)+j) = PATH;
      }
    }
  }

  void print() {
    int i, j;
    for(i = 0; i < ROWS; i++){
      for(j = 0; j < COLUMNS; j++){
        std::cout << *(*(dungeonMatrix+i)+j) << " ";
      }
      std::cout << std::endl;
    }
  }

  int getRandomNumber(int min, int max) {
    return rand()%(max-min)+min;
  }

  void initializeSeed() {
    srand(unsigned(time(nullptr)));
  }
};


int main() {
  Dungeon dungeon;
  std::cout << DUNGEON_MESSAGE << std::endl;
  dungeon.initializeSeed();
  dungeon.loadDungeonMatrix();
  dungeon.makeEntry();
  dungeon.makeExit();
  dungeon.print();

  return 0;
}



