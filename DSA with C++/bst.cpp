#include <iostream>
using namespace std;

class Node {
 public:
  int data;
  Node* left;
  Node* right;

  Node(int item) {
    this->data = item;
    this->left = NULL;
    this->right = NULL;
  };
};

class BST {
 public:
  Node* root = NULL;

  void insert(int item) {
    Node* newNode = new Node(item);

    if (this->root == NULL) {
      this->root = newNode;
      return;
    }

    Node* current = this->root;

    while (true) {
      if (item < current->data) {
        if (current->left == NULL) {
          current->left = newNode;
          return;
        }
        current = current->left;
      } else {
        if (current->right == NULL) {
          current->right = newNode;
          return;
        }
        current = current->right;
      }
    }
  }

  void traversePreorder(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    traversePreorder(root->left);
    traversePreorder(root->right);
  }
};

int main() {
  auto bst = new BST();
  bst->insert(100);
  bst->insert(50);
  bst->insert(190);
  bst->insert(20);
  bst->traversePreorder(bst->root);
}