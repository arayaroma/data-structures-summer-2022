#include <iostream>
#define INSERT_NUMBER_MESSAGE " - Inserte un numero: "
using namespace std;

int i;
int arr[5];
int array_size = sizeof(arr) / sizeof(int);
int input_number;
void show_array(int[]);
void insert_number();

int main(){
  for(i = 0; i < array_size; i++){
    cout << i + 1 << INSERT_NUMBER_MESSAGE;
    insert_number();
    arr[i] = input_number;
    cout << endl;
  }
  show_array(arr);
  return 0;
}

void show_array(int input_array[]){
  for(i = 0; i < array_size; i++){
    cout << input_array[i] << " ";
  }
}

void insert_number(){
    cin >> input_number; 
}
