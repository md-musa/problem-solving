#include "iostream"
using namespace std;

class Stack {
  int capacity = 1000;
  int arr[1000];
  int top = 0;

 public:
  void push(int value) {
    if (this->top == capacity - 1) {
      cout << "overflow";
      return;
    } else {
      arr[++top] = value;
    }
  }

  int pop() {
    if (this->top == -1) {
      cout << "Underflow";
      return -1;
    } else {
      return arr[top--];
    }
  }
};

int main() { return 0; }
