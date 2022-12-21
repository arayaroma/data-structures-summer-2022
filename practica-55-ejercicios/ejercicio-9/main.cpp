/*
 * Ejercicio 9:
 * 
 * Crear un programa que declare un arreglo de diez elementos
 * enteros y pida números para rellenarlo hasta que se llene
 * el arreglo o se introduzca un número negativo.
 *
 * Entonces se debe imprimir el arreglo 
 * (solo los elementos positivos introducidos).
 *
 * */

#include <iostream>
#define INSERT_MESSAGE "Insert a number: "
#define ARRAY_SIZE 10
int temporal, i;
int array[ARRAY_SIZE];

void insert_number();
void print_array();
bool is_negative(int);

using namespace std;

int main(){

  insert_number();
  print_array();

  return 0;
}

void insert_number(){
  for(i = 0; i < ARRAY_SIZE; i++){
    cout << INSERT_MESSAGE; cin >> temporal;
    if(is_negative(temporal))
      break;
    array[i] = temporal; }
}

void print_array(){
  for(i = 0 ; i < ARRAY_SIZE; i++)
    cout << array[i] << " ";
  cout << endl;
}

bool is_negative(int input){ 
  if(input < 0) 
    return true;
  return false; }
