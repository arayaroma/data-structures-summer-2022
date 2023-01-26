/*
 * Ejercicio 7:
 *
 * Crear un arreglo de 5 elementos de cadenas de caracteres,
 * inicializa el vector con datos leídos por el teclado.
 * Copia los elementos del arreglo en otro arreglo,
 * pero en orden inverso, y muéstralo por la pantalla.
 *
 * */

#include <iostream>
#define INSERT_ELEMENT_MESSAGE "Insert 5 characters: "
#define ORIGINAL_ARRAY_MESSAGE "Original Array: "
#define INVERTED_ARRAY_MESSAGE "Inverted Array: "
#define ARRAY_SIZE 5
using namespace std;

int i, ii = 0;
char element;
char original_array[ARRAY_SIZE];
char inversed_array[ARRAY_SIZE];

void insert_elements();
void print_array(char[]);
void invert_array(char[]);

int main(){

  insert_elements();
  invert_array(original_array);

  cout << ORIGINAL_ARRAY_MESSAGE;
  print_array(original_array);

  cout << INVERTED_ARRAY_MESSAGE;
  print_array(inversed_array);

  return 0;
}

void insert_elements(){
  for(i = 0; i < ARRAY_SIZE; i++){
    cout << (i+1) << ": " << INSERT_ELEMENT_MESSAGE; 
    cin >> element; original_array[i] = element; 
  cout << endl; }
}

void print_array(char input_array[]){
  for(i = 0; i < ARRAY_SIZE; i++)
    cout << input_array[i] << " ";
  cout << endl;
}

void invert_array(char input_array[]){
  for(i = ARRAY_SIZE - 1; i >= 0; i--){
    inversed_array[ii] = input_array[i]; ii++; } 
}
