#include <iostream>
using namespace std;

int main() {
  int a;
  int even[5] = {};
  int odd[5] = {};
  int e = 0;
  int o = 0;

  for (int i = 0; i < 15; i++) {
    cin >> a;

    if (a % 2 == 0) {
      even[e] = a;
      e++;
    } else {
      odd[o] = a;
      o++;
    }

    cout << even[e] << " " << odd[o] << endl;
  }

  return 0;
}