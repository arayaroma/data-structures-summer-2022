#include <iostream>
#include "Player.cpp"
#include "Match.cpp"
#include "Rules.cpp"
#include "Computer.cpp"

#define COMPUTER_NAME "Arch-Bot"
#define ASK_USER_NAME_MESSAGE "What's your name?"
#define TITLE_MESSAGE "\nRock - Paper n' Scissors \n\n"
#define COMPUTER_MESSAGE "Computer: "
#define USER_MESSAGE "User: "
#define MATCH_MESSAGE "Match: "
#define ROUND_MESSAGE "Round: "
#define CHOOSE_MESSAGE "Choose an option: "
#define WON_MESSAGE " won!"
#define CHOOSED_MESSAGE " choosed: "

using namespace std;

string get_user_input_name();
string get_user_choosed();

int main(){
  Rules rules = Rules();
  Match first_match = Match();
  Computer computer = Computer();
  Player user = Player();  

  cout << TITLE_MESSAGE;  
  cout << ASK_USER_NAME_MESSAGE << endl;

  computer.set_name(COMPUTER_NAME);
  user.set_name(get_user_input_name());

  cout << endl;
  
  cout << MATCH_MESSAGE << first_match.get_match_number() << " " 
       << ROUND_MESSAGE << first_match.get_round_number() << endl;   
 
  cout << CHOOSE_MESSAGE << rules.show_options() << endl;
  user.set_choice(get_user_choosed());
  computer.set_choice(computer.show_computer_choice());

  cout << computer.get_name() << CHOOSED_MESSAGE << computer.get_choice() << endl;
  cout << user.get_name() << CHOOSED_MESSAGE << user.get_choice() << endl;
  cout << rules.match_result(computer.get_choice(), user.get_choice()) << endl;

  return 0;
}

string get_user_input_name(){
  string user_name; 
  cin >> user_name;
  return user_name;
}

string get_user_choosed(){
  string choosed;
  cin >> choosed;
  return choosed;
}
