#pragma once
#include "Word.hpp"
#include <iostream>

class WordNode {
private:
  Word *word;
  WordNode *next;

public:
  WordNode(Word *, WordNode *);
  ~WordNode();
  // void setDato(Figura *);
  // Figura *getDato();
  void setNext(WordNode *);
  WordNode *getNext();
  std::string toString();
};