#include <iostream>

class Node{
public:
  int data;
  Node* next;
public:
  Node() {
    this->data = 0;
    this->next = nullptr;
  }

  Node(int data) {
    this->data = data;
    this->next = nullptr;
  }

};

class LinkedList{
public:
  Node* head;
public:
  LinkedList() { this->head = nullptr; }
  
  bool isEmpty() {
    if (head == NULL)
      return true;
    return false;
  }

  void insert(int data) {
    Node* newNode = new Node(data);

    if (isEmpty())
      head = newNode;

    Node* temp = head;
    while(temp->next != nullptr) {
      temp = temp->next;
    }
    temp->next = newNode;
  }

  void deleteNode(int data) {
    
  }

  void print(){
    Node* temp = head;

    if(isEmpty())
      std::cout << "Empty List!" << std::endl;
    
    while(temp->next != nullptr) {
      std::cout << temp->data << " -> ";
      temp = temp->next;
    }
    std::cout << " null " << std::endl;
  }

};

int main() {
  
  LinkedList list; 
  //list.insert(3);
  list.insert(6);
  //list.insert(9);
  list.print();

  return 0;
}
