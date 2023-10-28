#include "iostream"
using namespace std;
int main() {
  int lb, range;
  int count = 0;
  cin >> lb >> range;

  for (int i = 1; i <= range; i++) {
    count++;
    if (count != lb) {
      cout << i << " ";
    } else {
      cout << i;
    }

    if (count == lb) {
      cout << endl;
      count = 0;
    }
  }

  return 0;
}