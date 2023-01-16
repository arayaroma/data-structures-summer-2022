#pragma once
#include <iostream>
#include "Letter.hpp"
#include "Stack.hpp"

class LetterNode {
private:
  Letter * letter;
  LetterNode *next;
  LetterNode *previous;
  Stack *stack;
public:
  LetterNode();
  ~LetterNode();

  /*void setDato(Color *);
  Color *getDato();
  void setSigNodo(NodoP *);
  void setAntNodo(NodoP *);
  NodoP *getSigNodo();
  NodoP *getAntNodo();
  std::string toString();*/

  //void agregarFigura(Figura *);
  bool eliminarFigura(int);
  std::string buscarFigura(int);
};