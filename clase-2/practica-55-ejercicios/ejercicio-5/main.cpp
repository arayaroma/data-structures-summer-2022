#include <iostream>
#include <string>
#define ARRAY_SIZE_MESSAGE "Write the size of the array: "
#define INSERT_NAME_MESSAGE "Insert the name: "
#define STRING_SIZE_MESSAGE "String size: "
using namespace std;

int input_size, i;
string name;

int main(){ 

  cout << ARRAY_SIZE_MESSAGE;
  cin >> input_size;
  string names_array[input_size];
  int names_length_array[input_size];

  for(i = 0; i < input_size; i++){
    cout << INSERT_NAME_MESSAGE;
    cin >> name;
    names_array[i] = name;

    names_length_array[i] = names_array[i].size();
    cout << STRING_SIZE_MESSAGE << names_length_array[i] << endl;
  }
  return 0;
}
