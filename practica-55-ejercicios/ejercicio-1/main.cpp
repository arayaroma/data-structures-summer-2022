/* 
 * Ejercicio 1: 
 *
 * Crear un arreglo unidimensional con un tamaño de 5,
 * asígnale los valores numéricos manualmente (los que quieras)
 * y muéstralos por pantalla.
 * 
 * */

#include <iostream>
using namespace std;

int i;
int arr[5] = {1, 2, 3, 4, 5};
int array_size = sizeof(arr) / sizeof(int);
void show_array(int[]);

int main(){
  show_array(arr);
  return 0;
}

void show_array(int input_array[]){
  for(i = 0; i < array_size; i++)
    cout << input_array[i] << " ";
}
