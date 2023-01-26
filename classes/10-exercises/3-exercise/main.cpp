/*
 * Ejercicio 3:
 *
 * Crear un arreglo unidimensional con un tamaño de 10,
 * inserta los valores numéricos que desee de la manera que quieras
 * y muestra por pantalla la media de valores del arreglo.
 *
 * */

#include <iostream>
#define INSERT_NUMBER_MESSAGE " - Insert a number: "
using namespace std;

const int n = 10;
int i;
int arr[n];
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
