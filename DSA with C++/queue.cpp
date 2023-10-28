#include <iostream>
using namespace std;

class Queue {
  int capacity = 1000;
  int arr[1000];
  int head = 0;
  int tail = -1;

 public:
  void enqueue(int value) {
    if (tail == capacity - 1) {
      cout << "Queue is overflowed";
      return;
    }

    arr[head] = value;
    tail++;
  };

  int dequeue() {
    if (head == tail) {
      cout << "Underflow";
      return;
    }

    return arr[head++];
  }
  int peek() {
    if (this->isEmpty()) {
      return arr[head];
    }
  }
  bool isEmpty() { return head == tail; };
}