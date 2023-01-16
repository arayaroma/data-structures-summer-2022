#include "lista.h"
using namespace std;

Lista::Lista() {
  primero = actual = NULL;
  id = 1;
}

Lista::~Lista() {
  while (primero != NULL) {
    actual = primero;
    primero = primero->getSigNodo();
    delete actual;
  }
}

// Este m�todo permite agregar un nuevo color a la lista
// doblemente enlazada y lo hace al final de esta,
// solicita como par�metro el color.
// Adem�s, por cada nuevo nodo que se agrega incrementa
// se incrementa el valor de id, esto para que cada nuevo
// elemento posea un identificador �nico.
void Lista::agregarColor(int color) {
  // Lista Vac�a
  if (primero == NULL) {
    primero = new NodoP(NULL, new Color(id, color), primero);
  } else {
    actual = primero;
    while (actual->getSigNodo() != NULL) { // al final
      actual = actual->getSigNodo();
    }
    actual->setSigNodo(new NodoP(actual, new Color(id, color), NULL));
  }
  id++;
}

// Este m�todo permite eliminar a un color de acuerdo a su ID,
// por lo que recibe como par�metro el valor que desea eliminar
// si el nodo a eliminar no se encuentra se retorna FALSE, sino
// elimina al elemento y luego retorna TRUE.
bool Lista::eliminarColor(int id) {
  NodoP *anterior = NULL;
  actual = primero;

  while (actual && actual->getDato()->getID() != id) {
    anterior = actual;
    actual = actual->getSigNodo();
  }
  if (!actual || actual->getDato()->getID() != id)
    return false;    // Si no se encontr�
  else {             // Borrar el nodo
    if (!anterior) { // si es el primer elemento se borra
      printf("Entra aqui\n");
      primero = actual->getSigNodo();
      if (primero != NULL)
        primero->setAntNodo(NULL);
    } else { // si es un elemento intermedio o el �ltimo
      printf("Ahora entra aqui\n");
      anterior->setSigNodo(actual->getSigNodo());
      if (actual->getSigNodo() != NULL)
        actual->getSigNodo()->setAntNodo(anterior);
    }
  }
  delete actual;
  return true;
}

string Lista::imprimirFigurasColor(int color) {
  stringstream ss;
  actual = primero;
  ss << "Imprimiendo lista con figuras de color: " << color << endl;
  /*while (actual) {
          if (actual->getDato()->getColor() == color) {
                  ss << actual->toString() << endl;
          }
          actual = actual->getSigNodo();
  }*/
  return ss.str();
}

string Lista::toString() {
  stringstream ss;
  actual = primero;
  ss << "Contenido de la lista de Colores:" << endl;
  while (actual != NULL) {
    ss << actual->toString() << endl;
    actual = actual->getSigNodo();
  }
  return ss.str();
}

/*bool Lista::agregarFigura(int color, Figura *figura) {
  actual = primero;

  while (actual && actual->getDato()->getColor() != color) {
    actual = actual->getSigNodo();
  }
  if (!actual || actual->getDato()->getColor() != color)
    return false; // No se encontr� un color para agregar la figura
  else {
    actual->agregarFigura(figura);
    return true;
  }
}*/

bool Lista::eliminarFigura(int idColor, int idFigura) {
  actual = primero;

  while (actual && actual->getDato()->getID() != idColor) {
    actual = actual->getSigNodo();
  }
  if (!actual || actual->getDato()->getID() != idColor)
    return false;
  else
    return actual->eliminarFigura(idFigura);
}

string Lista::buscarFigura(int idColor, int idFigura) {
  actual = primero;

  while (actual && actual->getDato()->getID() != idColor) {
    actual = actual->getSigNodo();
  }
  if (!actual || actual->getDato()->getID() != idColor)
    return "El ID del color no fue encontrado";
  else
    return actual->buscarFigura(idFigura);
}
