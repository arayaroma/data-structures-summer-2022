/*
 * Ejercicio 10:
 *
 * Hacer un programa que inicialice un arreglo
 * de 15 números con valores aleatorios,
 * y posterior ordene los elementos de menor a mayor
 * y los muestre en pantalla.
 *
 * */

#include <iostream>
#include <random>
#include <ctime>
#define ARRAY_ELEMENTS "The array is: "
#define ORDERED_ELEMENTS "The ordered array is: "
#define ARRAY_SIZE 15

int i, second_index, first_index,
array[ARRAY_SIZE] = {1, 3, 5, 8, 6, 4, 2, 15, 13, 11, 7, 5, 9, 6, 5};

void order_array_by_min_to_max(int[]);
void print_array(int[]);
void selection_sort(int[]);
void swap(int&, int&);

using namespace std;

int main(){
  
  cout << ARRAY_ELEMENTS;
  print_array(array);
  
  selection_sort(array);

  cout << ORDERED_ELEMENTS;
  print_array(array);

  return 0;
}

void selection_sort(int input_array[]){
  for(i = 0; i < ARRAY_SIZE; i++){
    first_index = i;

    for(second_index = first_index+1; second_index < ARRAY_SIZE; second_index++){
      if(input_array[second_index] < input_array[first_index])
        first_index = second_index;
      swap(input_array[i], input_array[first_index]); 
    }
  }
}

void swap(int &first, int &second){
  int temp;
  temp = first;
  first = second;
  second = temp;
}


void print_array(int input_array[]){
  for(i = 0; i < ARRAY_SIZE; i++)
    cout << input_array[i] << " ";
  cout << endl;
}
