#include <iostream>
#include <list>

class Node {
private:
  int data;
  Node* left, *right;

public:
  Node(int data) {
    this->data = data;
    left = right = nullptr;
  }
  
  void setData(int data) { this->data = data; }
  int getData() const { return this->data; }

  void setLeft(Node* left) { this->left = left; }
  Node* getLeft() const { return this->left; }

  void setRight(Node* right) { this->right = right; }
  Node* getRight() const { return this->right; }

};


class BinaryTree {
private:
 Node* root; 
public:
  BinaryTree() { this->root = nullptr; }

  void insert(int data) {
    root = insertHelper(root, data); 
  }

  Node* insertHelper(Node* node, int data) {
    if (isEmpty())
      node = new Node(data);

    if (isLower(data, node->getData()))
      node->setLeft(insertHelper(node->getLeft(),data));

    if(!isLower(data, node->getData()))
      node->setRight(insertHelper(node->getRight(), data));

    return node;
  }

  bool isLower(int first, int second) const {
    return (first <= second);
  } 

  bool isEmpty() const { return (root == nullptr); }

  std::list<int> inOrder() {

  }


};

int main() {

  BinaryTree tree;
  tree.insert(3);
  tree.insert(6);
  tree.insert(9);

  return 0;
}
