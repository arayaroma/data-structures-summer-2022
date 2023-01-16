#include "coleccion.h"
using namespace std;

Coleccion::Coleccion() { primero = actual = NULL; }

Coleccion::~Coleccion() {
  while (primero != NULL) {
    actual = primero;
    primero = primero->getSigNodo();
    delete actual;
  }
}

void Coleccion::insertarPrimero(/*dato*/) {
  actual = primero;
  /*if (primero == NULL) // Lista Vacia
    primero = new Nodo(ptrDato, NULL);
  primero = new Nodo(ptrDato, actual);*/
}

void Coleccion::borrarPrimero() {
  actual = primero;
  if (primero != NULL) {
    primero = actual->getSigNodo();
    delete actual;
  }
}

void Coleccion::insertarFinal(/*dato*/) {
  // Lista Vacia
  /*if (primero == NULL)
    primero = new Nodo(ptrDato, primero);

  actual = primero;
  while (actual->getSigNodo() != NULL) { // al final
    actual = actual->getSigNodo();
  }
  actual->setSigNodo(new Nodo(ptrDato, NULL));*/
}

/*bool Coleccion::borrarFigura(int id) {
  Nodo *anterior = NULL;
  actual = primero;

  while (actual && actual->getDato()->getID() != id) {
    anterior = actual;
    actual = actual->getSigNodo();
  }
  if (!actual || actual->getDato()->getID() != id)
    return false;    // Si no se encontr�
  else {             // Borrar el nodo
    if (!anterior) { // si es el primer elemento se borra
      primero = actual->getSigNodo();
    } else { // si es un elemento intermedio o el �ltimo
      anterior->setSigNodo(actual->getSigNodo());
    }
  }
  delete actual;
  return true;
}

string Coleccion::imprimirFigurasColor(int color) {
  std::stringstream ss;
  actual = primero;
  ss << "Imprimiendo lista con figuras de color: " << color << endl;
  while (actual) {
    if (actual->getDato()->getColor() == color) {
      ss << actual->toString() << endl;
    }
    actual = actual->getSigNodo();
  }
  return ss.str();
}

string Coleccion::toString() {
  stringstream ss;
  actual = primero;
  ss << "\tContenido de la lista de figuras:" << endl;
  while (actual != NULL) { // primero no se mueve
    ss << "\t" << actual->toString() << endl;
    actual = actual->getSigNodo();
  }
  return ss.str();
}

string Coleccion::buscarFigura(int id) {
  stringstream ss;
  actual = primero;
  while (actual && actual->getDato()->getID() != id) {
    actual = actual->getSigNodo();
  }
  if (!actual || actual->getDato()->getID() != id)
    ss << "Figura no encontrada" << endl;
  else
    ss << "\t" << actual->toString() << endl;
  return ss.str();
}
*/