#include "iostream"
using namespace std;

int main() {
  while (true) {
    int a, b;
    cin >> a >> b;
    if (a <= 0 || b <= 0) return 0;
    int min = a, max = a;

    if (a > b) {
      max = a;
      min = b;
    } else {
      max = b;
      min = a;
    }

    int sum = 0;
    for (int i = min; i <= max; i++) {
      cout << i << " ";
      sum += i;
    };
    cout << "Sum=" << sum << endl;
  }

  return 0;
}