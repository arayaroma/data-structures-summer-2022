#pragma once
#include "Player.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <random>

class Computer : public Player{
private:
  std::string choice;
  int random_number;

  int get_random_number(){
    srand(time(0));
    random_number = rand()%3; 
    return random_number;
  }

  std::string computer_choice(){
    choice = "";
    if(random_number == 0)
      choice = "Rock";
    if(random_number == 1)
      choice = "Paper";
    if(random_number == 2)
      choice = "Scissors";
    return choice;
  }

public:
  Computer();
  std::string show_computer_choice();
};
