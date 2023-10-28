#include <bits/stdc++.h>
using namespace std;
void insert(int data);

typedef struct Node {
  int data;
  struct Node* left;
  struct Node* right;
} Node;

Node* root = NULL;
void traverseInorder(Node* root);
Node* search(int query);

int main() {
  insert(30);
  insert(20);
  insert(40);
  insert(45);
  insert(55);
  traverseInorder(root);

  cout << endl << "= " << search(0 );
}

void insert(int data) {
  Node* newNode = (Node*)malloc(sizeof(Node));
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;

  if (root == NULL)
    root = newNode;
  else {
    Node* temp = root;

    while (true) {
      if (data < temp->data) {
        if (temp->left == NULL) {
          temp->left = newNode;
          return;
        }

        temp = temp->left;
      } else {
        if (temp->right == NULL) {
          temp->right = newNode;
          return;
        }

        temp = temp->right;
      }
    }
  }
}

void traverseInorder(Node* root) {
  if (root == NULL) return;
  traverseInorder(root->left);
  cout << root->data << "  ";
  traverseInorder(root->right);
}

Node* search(int query) {
  if (root == NULL) return;

  Node* temp = root;
  while (temp != NULL && temp->data != query) {
    if (query < temp->data)
      temp = temp->left;
    else
      temp = temp->right;
  };

  return temp;
}
