#include "Player.h"
using namespace std;

Player::Player(){
  name = "User1";
  choice = "Rock";
  matchs_played = 0; 
}

void Player::set_name(string name){
  this->name = name;
}

std::string Player::get_name(){
  return this->name;
}

void Player::set_choice(string choice){
  this->choice = choice;
}

string Player::get_choice(){
  return this->choice;
}

int Player::get_matchs_played(){
  return this->matchs_played;
}
