#include "lista.h"
#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch,
 * system("pause") or input loop */

int main(int argc, char **argv) {

  Lista colores;
  colores.agregarColor(5);
  colores.agregarColor(1);
  colores.agregarColor(2);
  colores.agregarColor(4);

  // cout << colores.toString();

  /*colores.eliminarColor(2);

  */

  cout << "-----------------" << endl;
  cout << "Digite el id del color a buscar: ";
  int idColor;
  cin >> idColor;
  cout << "Digite el id de la figura a buscar: ";
  int idFig;
  cin >> idFig;
  cout << colores.buscarFigura(idColor, idFig);
  cout << "-----------------" << endl;

  cout << "-----------------" << endl;
  cout << "Digite el id del color a borrar: ";
  cin >> idColor;
  cout << "Digite el id de la figura a borrar: ";
  cin >> idFig;
  if (colores.eliminarFigura(idColor, idFig)) {
    cout << "La figura se ha encontrado y eliminado" << endl;
    cout << "-----------------" << endl;
    cout << colores.toString();
  } else
    cout << "La figura no se ha encontrado" << endl;

  return 0;
}
