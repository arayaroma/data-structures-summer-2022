#pragma once
#include "nodoP.h"

class Lista {
private:
  NodoP *primero;
  NodoP *actual;
  int id;

public:
  Lista();
  ~Lista();

  void agregarColor(int);
  bool eliminarColor(int);
  std::string imprimirFigurasColor(int);
  std::string toString();

  //bool agregarFigura(int, Figura *);
  bool eliminarFigura(int, int);
  std::string buscarFigura(int, int);
};