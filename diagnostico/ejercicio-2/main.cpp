#include <iostream>
#include <string>
#define PROGRAM_TITLE "\nto_camel_case - to_snake_case Program\n"
#define CAMEL_CASE_MESSAGE "\nEscriba su cadena camelCase\n"
#define SNAKE_CASE_MESSAGE "\nEscriba su cadena snake_case\n"
using namespace std;

const int ascii_capitalize = 32;
int index_number;

string camel_case = "", snake_case = "", temporal = "";
string modified_input = "";

char to_upper_case(char);
char to_lower_case(char);

string to_camel_case(string);
string to_snake_case(string);

string camel_case_input();
string snake_case_input();

int main(){
  cout << PROGRAM_TITLE << endl;
  cout << CAMEL_CASE_MESSAGE;
  temporal = to_camel_case(camel_case_input());
  cout << temporal << endl;
  
  cout << SNAKE_CASE_MESSAGE;
  temporal = to_snake_case(snake_case_input());
  cout << temporal << endl;

  return 0;
}

string to_camel_case(string input){
  for(index_number = 0; index_number < input.size(); index_number++){
    if(input[index_number] == '_'){
      index_number++;
      to_upper_case(input[index_number-1]);
    }
    modified_input += input[index_number];
  } 
  return modified_input;
}

string to_snake_case(string input){
  for(index_number = 0; index_number < input.size(); index_number++){
    if(input[index_number] < 91){
      modified_input += '_';
      to_lower_case(input[index_number]);
    }
    modified_input += input[index_number];
  }
  return modified_input;
}

string camel_case_input(){
  cin >> camel_case;
  return camel_case;
}

string snake_case_input(){
  cin >> snake_case;
  return snake_case;
}

char to_upper_case(char letter) { return letter - ascii_capitalize; }
char to_lower_case(char letter) { return letter + ascii_capitalize; }
