#include <bits/stdc++.h>
using namespace std;

typedef struct Node {
  int data;
  struct Node* left;
  struct Node* right;
} Node;

Node* root = NULL;

void insert(int item) {
  Node* newNode = (Node*) malloc(sizeof(Node));
  newNode->data = item;
  newNode->left = NULL;
  newNode->right = NULL;

  if (root == NULL) {
    root = newNode;
    return;
  }

  Node* current = root;
  Node* parent = NULL;  // root

  while (true) {
    parent = current;

    if (item < parent->data) {
      current = current->left;

      if (parent == NULL) {
        parent->left = newNode;
        return;
      }
    } else {
      current = current->right;

      if (parent == NULL) {
        parent->right = newNode;
        return;
      }
    }
  }
};

bool search(int query) {
  if (root->data == query) {
    return true;
  }

  while (true) {
  }
}

int main() {}