#include "Node.h"
#include <iostream>

Node::Node(){
  data = 0;
  next = NULL;
}

Node::Node(char data){
  Node *temp = new Node();
  temp->data = data;
  temp->next = NULL;
}

Node::~Node(){
  //delete data;
}

char Node::get_data(){
  return this->data;
}

Node* Node::get_next(){
  return this->next;
}
