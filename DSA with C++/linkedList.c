#include <stdio.h>
#include <stdlib.h>

void insertAtEnd(int value);
void insertAtFirst(int value);
void deleteItem(int value);
int search(int item);
void deleteEnd();
void deleteStart();
void insertAny(int value, int position);
void printList();
void largeAndSmall();
void frequency();

typedef struct Node {
  int data;
  struct Node *next;
} Node;

Node *head = NULL;

int main() {
  insertAtEnd(50);
  insertAtEnd(3000);
  insertAtEnd(40);
  insertAtEnd(60);
  insertAtFirst(1);
  insertAtEnd(50);

  insertAtFirst(100);
  insertAtEnd(50);
  insertAtFirst(1);
  insertAny(1000, 4);

  printList();
  largeAndSmall();
  frequency(1);

  return 0;
}

void largeAndSmall() {
  int small = head->data;
  int large = head->data;
  Node *temp = head;

  while (temp != NULL) {
    if (temp->data < small) {
      small = temp->data;
    } else if (temp->data > large) {
      large = temp->data;
    }

    temp = temp->next;
  }

  printf("Smallest = %d\nLargest = %d\n", small, large);
}

void frequency(int item) {
  int count = 0;
  Node *temp = head;

  while (temp != NULL) {
    if (temp->data == item) count++;
    temp = temp->next;
  }

  printf("Frequency of %d is %d", item, count);
}

void insertAtFirst(int value) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = value;
  newNode->next = NULL;

  if (head == NULL) {
    head = newNode;
  } else {
    newNode->next = head;
    head = newNode;
  }
}
// Linked list: Searching
int search(int item) {
  Node *temp = head;

  while (temp != NULL) {
    if (temp->data == item) {
      return 1;
    }
    temp = temp->next;
  }

  return -1;
}

// Linked list: Insertion
void insertAtEnd(int value) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = value;
  newNode->next = NULL;

  if (head == NULL) {
    head = newNode;
  } else {
    Node *temp = head;

    while (temp->next != NULL) {
      temp = temp->next;
    }

    temp->next = newNode;
  }
}
// Linked list: Insertion
void insertAny(int value, int position) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = value;
  newNode->next = NULL;

  Node *temp = head;
  int count = 1;

  while (temp->next != NULL) {
    if (position - 1 == count++) {
      newNode->next = temp->next;
      temp->next = newNode;
      return;
    }
    temp = temp->next;
  }
}

// Linked list: Deletion
void deleteEnd() {
  Node *temp = head;
  while (temp->next->next != NULL) {
    temp = temp->next;
  }
  temp->next = NULL;
}

// Linked list: Delete any item by value
// void deleteItem(int value) {
//   if (head->data == value) {
//     head = head->next;
//   } else {
//     Node *temp = head;

//     while (temp->next->data != value) {
//       temp = temp->next;
//     }

//     temp->next = temp->next->next;
//   }
// }

void printList() {
  printf("------------------------\n");
  Node *temp = head;
  while (temp != NULL) {
    printf("%d", temp->data);
    if (temp->next != NULL) printf(" -> ");
    temp = temp->next;
  }
  printf(" -> NULL\n");
}
