#include "iostream"
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int l, r, d;
    cin >> l >> r >> d;

    while (d != l % 10) {
      l++;
    }

    // 25 - 5 = 20/10 = 3
    // 24 - 5 = 19/10 = 2
    // 120 - 10 = 110/10 = 11

    // if less than 10 = custom checking

    cout << count << endl;
  }

  return 0;
}