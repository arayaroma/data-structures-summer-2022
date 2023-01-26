/*
 * Ejercicio 5:
 *
 * Crear un arreglo unidimensional donde tú le indiques
 * el tamaño por teclado y crear una función que rellene
 * el arreglo con los múltiplos de un número pedido por teclado.
 *
 * Por ejemplo, si defino un array de tamaño 5 y elijo un 3 en la función,
 * el array contendrá 3, 6, 9, 12, 15.
 *
 * Muéstralos por pantalla usando otra función distinta.
 *
 * */

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
