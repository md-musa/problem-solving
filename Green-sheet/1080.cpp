#include "iostream"
using namespace std;

int main() {
  int position = 0;
  int highest = 0;

  for (int i = 1; i <= 100; i++) {
    int num;
    cin >> num;
    if (highest < num) {
      highest = num;
      position = i;
    }
  }
  cout << highest << endl;
  cout << position << endl;
  return 0;
}