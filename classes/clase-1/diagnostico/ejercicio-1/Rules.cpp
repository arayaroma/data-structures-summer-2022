#include "Rules.h"

Rules::Rules(){
options = "Rock Paper Scissors"; 
}

bool Rules::computer_won(std::string computer_input, std::string user_input){
  if ( computer_input == ROCK && user_input == SCISSORS ||
    computer_input  == PAPER && user_input == ROCK ||
    computer_input == SCISSORS && user_input == PAPER )
    return true;

  return false;
}

bool Rules::is_a_tie(std::string computer_input, std::string user_input){
  if( computer_input == user_input )
    return true;

  return false;
}

std::string Rules::match_result(std::string computer_input, std::string user_input){
  if ( is_a_tie(computer_input, user_input) ) 
    return "It's a Tie!"; 
  if( computer_won(computer_input, user_input) )
    return "Computer won!";

  return "User won!";
}

std::string Rules::show_options(){ return options; }


