#include <iostream>
#define log(x) std::cout << x << " ";

class Node {
private:
  int data;
  Node *left, *right;

public:
  Node(int data) : data(data), left(nullptr), right(nullptr) {}

  void setData(int data) { this->data = data; }
  int getData() const { return this->data; }

  void setLeft(Node *left) { this->left = left; }
  Node *getLeft() const { return this->left; }

  void setRight(Node *right) { this->right = right; }
  Node *getRight() const { return this->right; }
};

class BinaryTree {
private:
  Node *root;

public:
  BinaryTree() { this->root = nullptr; }

  void insert(int data) { root = insertHelper(root, data); }
  bool isEmpty(Node *node) const { return (node == nullptr); }
  bool isLower(int first, int second) const { return (first < second); }

  Node *insertHelper(Node *node, int data) {
    if (isEmpty(node))
      node = new Node(data);

    else if (isLower(data, node->getData()))
      node->setLeft(insertHelper(node->getLeft(), data));

    else
      node->setRight(insertHelper(node->getRight(), data));

    return node;
  }

  void inOrder() {
    log("in-order:");
    inOrderHelper(root);
    log("\n");
  }

  void inOrderHelper(Node *node) {
    if (node == nullptr)
      return;

    inOrderHelper(node->getLeft());
    log(node->getData());
    inOrderHelper(node->getRight());
  }

  void preOrder() {
    log("pre-order:");
    preOrderHelper(root);
    log("\n");
  }

  void preOrderHelper(Node *node) {
    if (node == nullptr)
      return;

    log(node->getData());
    preOrderHelper(node->getLeft());
    preOrderHelper(node->getRight());
  }

  void postOrden() {
    log("post-orden");
    postOrdenHelper(root);
    log("\n");
  }

  void postOrdenHelper(Node *node) {
    if (node == nullptr)
      return;

    postOrdenHelper(node->getLeft());
    postOrdenHelper(node->getRight());
    log(node->getData());
  }
};

int main() {

  BinaryTree tree;
  tree.insert(10);
  tree.insert(15);
  tree.insert(20);
  tree.insert(5);

  tree.preOrder();
  tree.inOrder();
  tree.postOrden();

  return 0;
}