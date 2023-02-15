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

  int max(int a, int b) { return (a > b) ? a : b; }

  void setHeight(int height) { this->height = height; }

  int getHeight(AvlNode *node) {
    if (node == nullptr)
      return 0;
    return node->height;
  }

  AvlNode *newNode(int data) {
    AvlNode *node = new AvlNode(data);
    node->setHeight(1);
    return node;
  }

  AvlNode *rightRotate(AvlNode *y) {
    AvlNode *x = y->left;
    AvlNode *T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update heights
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;

    return x;
  }

  AvlNode *leftRotate(AvlNode *x) {
    AvlNode *y = x->right;
    AvlNode *T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    // Update heights
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;

    return y;
  }

  int getBalance(AvlNode *n) {
    if (n == nullptr)
      return 0;

    return getHeight(n->left) - getHeight(n->right);
  }

  // Recursive function to insert a key in the subtree rooted with node and
  // returns the new root of the subtree
  AvlNode *insert(AvlNode *node, int data) {
    // Perform the normal BST insertion
    if (node == nullptr)
      return (newNode(data));

    if (data < node->data)
      node->left = insert(node->left, data);
    else if (data > node->data)
      node->right = insert(node->right, data);
    else
      return node;

    // Update height of this ancestor node
    node->height = 1 + max(getHeight(node->left), getHeight(node->right));

    // Get the balance factor of this ancestor node to check whether this node
    // became unbalanced
    int balance = getBalance(node);

    // If this node becomes unbalanced, then there are 4 cases

    // Left Left Case
    if (balance > 1 && data < node->left->data)
      return rightRotate(node);

    // Left Right Case
    if (balance > 1 && data > node->left->data) {
      node->left = leftRotate(node->left);
      return rightRotate(node);
    }

    // Right Right Case
    if (balance < -1 && data > node->right->data)
      return leftRotate(node);

    // Right Left Case
    if (balance < -1 && data < node->right->data) {
      node->right = rightRotate(node->right);
      return leftRotate(node);
    }

    return node;
  }

  AvlNode *deleteNode(AvlNode *root, int data) {
    // Perform the normal BST deletion
    if (root == nullptr)
      return root;

    // If the key to be deleted is smaller than the root's key, then it lies in
    // the left subtree
    if (data < root->data)
      root->left = deleteNode(root->left, data);

    // If the key to be deleted is greater than the root's key, then it lies in
    // the right subtree
    else if (data > root->data)
      root->right = deleteNode(root->right, data);

    // If the key is same as root's key, then this is the node to be deleted
    else {
      // node with only one child or no child
      if ((root->left == nullptr) || (root->right == nullptr)) {
        AvlNode *temp = root->left ? root->left : root->right;

        // No child case
        if (temp == nullptr) {
          temp = root;
          root = nullptr;
        } else { // One child case
          *root = *temp;
        }
        delete temp;
      } else {
        // node with two children: Get the inorder successor (smallest in the
        // right subtree)
        AvlNode *temp = root->right;
        while (temp->left != nullptr) {
          temp = temp->left;
        }

        // Copy the inorder successor's data to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
      }
    }

    // If the tree had only one node then return
    if (root == nullptr)
      return root;

    // Update height of the current node
    root->height = 1 + max(getHeight(root->left), getHeight(root->right));

    // Get the balance factor of this node (to check whether this node became
    // unbalanced)
    int balance = getBalance(root);

    // If this node becomes unbalanced, then there are 4 cases

    // Left Left Case
    if (balance > 1 && getBalance(root->left) >= 0)
      return rightRotate(root);

    // Left Right Case
    if (balance > 1 && getBalance(root->left) < 0) {
      root->left = leftRotate(root->left);
      return rightRotate(root);
    }

    // Right Right Case
    if (balance < -1 && getBalance(root->right) <= 0)
      return leftRotate(root);

    // Right Left Case
    if (balance < -1 && getBalance(root->right) > 0) {
      root->right = rightRotate(root->right);
      return leftRotate(root);
    }

    return root;
  }

  void preOrder(AvlNode *root) {
    if (root != nullptr) {
      std::cout << root->data << " ";
      preOrder(root->left);
      preOrder(root->right);
    }
  }
};

class AvlTree {
private:
  AvlNode *root;

public:
  AvlTree() { this->root = nullptr; }

  void insert(int data) { root = insert(root, data); }
  bool isEmpty(AvlNode *node) const { return (node == nullptr); }

  AvlNode *insert(AvlNode *node, int data) {
    node = new AvlNode(data);
    node->setHeight(1);
    return node;
  }
};