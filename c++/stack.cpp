#include <iostream>

class Node{
public:
  int data;
  Node* next;
public:
  Node() {
    this->data = 0;
    this->next = NULL;
  }

  Node(int data) { 
    this->data = data; 
    this->next = nullptr;
  }

  int getData() const{ return this->data; }
  Node* getNext() const { return this->next; }
};

class Stack{
private:
  Node* head;

public:

  bool isEmpty() const {
    return (head == nullptr);
  }
   
  int size() const {
    int count;
    if (isEmpty())
      return count = 0;

    while (head != nullptr) {
      count++;
      head->getNext();
    }
    return count;
  }

  void print() {
    if (isEmpty())
      std::cout << "Empty Stack" << std::endl;
   
    Node* temp = head;
    std::cout << "[";
    while(temp->next != nullptr) {
      std::cout << top() << ", ";
      temp = temp->getNext();
    }
    std::cout << "]" << std::endl;
  }

  void push(int data) {
    Node* temp = new Node(data);
    if (isEmpty())
      this->head = temp;
    temp->next = head;
    head = temp;
  }

  void pop() {
    if (isEmpty())
      std::cout << "Empty Stack" << std::endl;
    Node* temp = head;
    head = head->getNext();
    delete(temp);
  }

  int top() const{ 
    if (isEmpty())
      return 0;
    return head->getData(); 
  }

};

int main(){
  Stack stack;
  stack.push(1);
  stack.push(35);
  //stack.size();
  stack.print();

  return 0;
}
