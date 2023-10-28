#include <iostream>
using namespace std;
int main() {
  string bits;
  cin >> bits;

  int count = 0;
  for (int i = 0; i < bits.length(); i++) {
    if (bits[i] == '1') {
      count++;
    }
  }

  if (count % 2 != 0) {
    cout << bits << 1 << endl;
  } else {
    cout << bits << 0 << endl;
  }
  return 0;
}