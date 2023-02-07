#include <iostream>
#define log(x) std::cout << x << std::endl;

class AvlNode {
private:
  int data;
  AvlNode *left, *right;
  int height;

public:
  AvlNode(int data) : data(data), left(nullptr), right(nullptr), height(0) {}

  void setData(int data) { this->data = data; }
  int getData() const { return this->data; }

  void setLeft(AvlNode *left) { this->left = left; }
  AvlNode *getLeft() const { return this->left; }

  void setRight(AvlNode *right) { this->right = right; }
  AvlNode *getRight() const { return this->right; }

  int max(int &a, int &b) { return (a > b) ? a : b; }

  void setHeight(int height) { this->height = height; }

  int getHeight(AvlNode *node) const {
    if (node == nullptr)
      return 0;
    return node->height;
  }
};

class AvlTree {
private:
  AvlNode *root;

public:
  AvlTree() { this->root = nullptr; }

  void insert(int data) { root = insertHelper(root, data); }
  bool isEmpty(AvlNode *node) const { return (node == nullptr); }

  AvlNode *insertHelper(AvlNode *node, int data) {
    node = new AvlNode(data);
    node->setHeight(1);
    return node;
  }

  AvlNode *leftRightRotation(AvlNode *parentNode) {
    AvlNode *leftNode, *rightNode;
    leftNode = parentNode->getLeft();
    rightNode = parentNode->getLeft()->getRight();

    parentNode->setLeft(rightNode->getRight());
    leftNode->setRight(rightNode->getLeft());

    rightNode->setLeft(leftNode);
    rightNode->setRight(parentNode);

    return rightNode;
  }

  AvlNode *rightLeftRotation(AvlNode *parentNode) { return nullptr; }
  AvlNode *rightRightRotation(AvlNode *parentNode) { return nullptr; }
  AvlNode *leftLeftRotation(AvlNode *parentNode) { return nullptr; }
};