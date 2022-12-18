#pragma once
#include<iostream>

#define ROCK "Rock"
#define PAPER "Paper"
#define SCISSORS "Scissors"

class Rules{
private:
  std::string options;
public:
  Rules();

  bool is_a_tie(std::string, std::string);  
  bool computer_won(std::string, std::string);
  std::string match_result(std::string, std::string);

  std::string show_options();
};
