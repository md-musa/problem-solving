#include "iostream"
using namespace std;

class Node {
 public:
  int data;
  Node* next;

  Node(int value) {
    this->data = value;
    this->next = NULL;
  };
};

class LinkedList {
 public:
  Node* head = NULL;

  void insertEnd(int value) {
    Node* newNode = new Node(value);

    if (this->head == NULL) {
      this->head = newNode;
      return;
    }

    Node* temp = this->head;
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = newNode;
  };

  void deleteNode(int val) {
    Node* tem = this->head;
    // 40 -> 40 -> 30 -> 90 -> null
    //             t
    while (tem != NULL) {
      if (tem->data == val) {
        tem = tem->next;
      } else {
        if (tem->next->data == val) {
          tem->next = tem->next->next;
        }
      }
      cout << tem->data << " ";
    }

    cout << endl;
  }

  void print() {
    Node* tem = this->head;

    cout << "[";
    while (tem != NULL) {
      cout << tem->data;
      if (tem->next != NULL) {
        cout << " -> ";
      }
      tem = tem->next;
    }
    cout << "]\n";
  }
};

int main() {
  LinkedList* list = new LinkedList();
  list->insertEnd(10);
  list->insertEnd(20);
  list->insertEnd(40);
  list->insertEnd(40);
  list->insertEnd(40);
  list->insertEnd(90);

  list->deleteNode(40);

  list->print();

  return 0;
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
//  public:
//   void deleteNode(ListNode* head, int val) {
//     if (head->data == val) {
//       head = head->next;
//       return;
//     }

//     ListNode* tem = head;
//     while (tem->next->data != val) tem = tem->next;
//     tem->next = tem->next->next;
//   }
//   ListNode* removeElements(ListNode* head, int val) {

//   }
// };