/*
 * Ejercicio 6:
 *
 * Realizar un programa que defina un arreglo llamado “numberList”
 * de 10 enteros, a continuación, inicialícelo con valores aleatorios
 * (del 1 al 10) y posteriormente muestre en pantalla cada elemento
 * del arreglo junto con su cuadrado y su cubo.
 *
 * */

#include <iostream>
#include <random>
#include <ctime>
#include<unistd.h>
using namespace std;

const int SIZE = 10;
int i;
int number_list[SIZE];

int get_random_number();
void initialize_array(int[]);
int get_cuadratic_number(int);
int get_cubic_number(int);
void print_array(int[]);

int main(){
  initialize_array(number_list);
  print_array(number_list);

  return 0;
}

int get_random_number(){ srand(time(NULL)); return (1+rand()%10); }
int get_cuadratic_number(int number){ return number * number; }
int get_cubic_number(int number){ return number * number * number; }

void initialize_array(int arr[]){
  for(i = 0; i < SIZE; i++){
    arr[i] = get_random_number();
    sleep(1);
  }
}

void print_array(int arr[]){
  for(i = 0; i < SIZE; i++)
    cout << arr[i] << " Cuadratic: " << get_cuadratic_number(arr[i]) << " Cubic: " << get_cubic_number(arr[i]) << endl;
}
