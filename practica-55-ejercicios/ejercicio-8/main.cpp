/*
 * Ejercicio 8:
 *
 * Se quiere realizar un programa que lea por teclado
 * las 5 notas obtenidas por un alumno (comprendidas entre 0 y 10).
 *
 * A continuación, 
 * debe mostrar todas las notas, la nota media,
 * la nota más alta que ha sacado y la menor.
 *
 * */

#include <iostream>
#define GRADES_MESSAGE "Insert the grade: "
#define AVERAGE_GRADE "Average grade: "
#define LOWEST_GRADE "Lowest grade: "
#define HIGHEST_GRADE "Highest grade: "
#define ARRAY_SIZE 5
#define TOP_LIMIT 6
#define n ARRAY_SIZE 

using namespace std;

int i;
float grades[ARRAY_SIZE];
float average_grade, lowest_grade, highest_grade,
      temporal_grade, sum;

void insert_grades();
float get_average_grade();
float get_lowest_grade();
float get_highest_grade();
void print_grades();
void print_grade(float);

int main(){

  insert_grades();
  print_grades();

  cout << AVERAGE_GRADE;
  print_grade(get_average_grade());

  cout << HIGHEST_GRADE;
  print_grade(get_highest_grade());

  cout << LOWEST_GRADE;
  print_grade(get_lowest_grade());

  return 0;
}

void insert_grades(){
  for(i = 0; i < ARRAY_SIZE; i++){
    cout << GRADES_MESSAGE; cin >> temporal_grade; cout << endl;
    grades[i] = temporal_grade;
  }
}

void print_grade(float input){ cout << input << endl; }

void print_grades(){
  cout << "Grades: " << endl;
  for(i = 0; i < ARRAY_SIZE; i++)
    cout << grades[i] << " ";
  cout << endl;
}

float get_average_grade(){
  for(i = 0; i < ARRAY_SIZE; i++)
    sum += grades[i];
  average_grade = sum / n;
  return average_grade;
}

float get_lowest_grade(){
  highest_grade = lowest_grade = grades[0];
  for(i = 0; i < ARRAY_SIZE; i++){
    if (grades[i] < lowest_grade)
      lowest_grade = grades[i]; }
  return lowest_grade;
}

float get_highest_grade(){
  highest_grade = lowest_grade = grades[0];
  for(i = 0; i < ARRAY_SIZE; i++){
    if (grades[i] > highest_grade)
      highest_grade = grades[i]; }
  return highest_grade;
}
