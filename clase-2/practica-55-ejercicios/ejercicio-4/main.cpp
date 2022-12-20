#include <iostream>
#define ARRAY_SIZE_MESSAGE "Insert the array size: "
#define MULTIPLE_NUMBER_MESSAGE "Insert the number to get the multiples: "
#define MULTIPLES_EQUATION number_to_get_multiples * (i + 1)

int input_size, number_to_get_multiples, i;

void load_array_with_multiples(int[]);
void show_array(int[]);

using namespace std;

int main(){

  cout << ARRAY_SIZE_MESSAGE;
  cin >> input_size;
  int array[input_size];

  cout << MULTIPLE_NUMBER_MESSAGE;
  cin >> number_to_get_multiples;

  load_array_with_multiples(array);
  show_array(array);
  return 0;
}

void load_array_with_multiples(int arr[]){
  for(i = 0; i < input_size; i++){
      arr[i] = (MULTIPLES_EQUATION);
    }
}

void show_array(int arr[]){
  for(i = 0; i < input_size; i++){
    cout << arr[i] << " ";
  }
}
