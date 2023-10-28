#include "iostream"
using namespace std;

class Rectangle {
 public:
  int width;
  ;
  int height;
  int area() {
    int a = width * height;
    return a;
  };
};

int main() {
  Rectangle r1;
  r1.width = 10;
  r1.height = 200;

  cout << &r1;
  return 0;
}