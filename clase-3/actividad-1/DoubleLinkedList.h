#include "Node.h"
#include <string>

class DoubleLinkedList : public Node{
private:
  Node* head, actual, previous;
  Node* queue;

public:
  DoubleLinkedList();

  void sort_letters();
  void search_letter(std::string, Node*);
  bool is_found(Node*, Node*, char);

};
