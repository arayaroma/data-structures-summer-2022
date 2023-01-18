#include <iostream>

class Node{
private:  
  int* value;
  Node* nextNode;

public:
  Node() {}
  Node(int* value) {
    this->value = value;
    this->nextNode = nullptr;
  }

  void setValue(int* value) { this->value = value; }
  int* getValue() { return this->value; }

  void setNextNode(Node* nextNode) { this->nextNode = nextNode; }
  Node* getNextNode() { return this->nextNode; }

};

class Queue{
private:
  Node* rear = nullptr;
  Node* front = nullptr;

public:

  bool isEmpty() {
    return (rear == front);
  }

  void enQueue(int* value) {
    Node* temp = new Node(value);
    
    if (isEmpty()) {
      rear = temp;
      front = temp;
    }
    rear = temp;
  }
  
  int* deQueue() {
    Node* temp = front;
    delete(front);
    return temp->getValue();
  }

  void print() {
    Node* temp = rear;
    while(temp != front->getNextNode()) {
      std::cout << temp->getValue() << " -> "; 
      temp = temp->getNextNode();
    }
    std::cout << std::endl;
  }
};


int main(){

  Queue queue;
  queue.enQueue((int*)8);
  //queue.print();
  queue.enQueue((int*)4);
  queue.print();
  return 0;
}
