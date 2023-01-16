#pragma once
#include "nodo.h"

class Coleccion {
private:
  Nodo *primero;
  Nodo *actual; // uso temporal, optativo
public:
  Coleccion();
  ~Coleccion();
  void insertarPrimero(/*dato*/);
  void borrarPrimero();
  void insertarFinal(/*dato*/);
  bool borrarFigura(int);
  std::string imprimirFigurasColor(int);
  std::string toString();
  std::string buscarFigura(int);
};