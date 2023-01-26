#pragma once
#include <iostream>

class Match{
private:
  std::string winner;
  int match_number;
  int round_number;
public:
  Match();

  void increment_number(int);
  int get_round_number();
  int get_match_number(); 
};
