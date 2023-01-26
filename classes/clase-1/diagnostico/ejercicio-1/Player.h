#pragma once
#include <iostream>
#include<string>

class Player{
private:
  std::string name;
  std::string choice; 
  int matchs_played;
public:
  Player();

  void set_name(std::string);
  std::string get_name();
  
  void set_choice(std::string);
  std::string get_choice();

  int get_matchs_played();
};
