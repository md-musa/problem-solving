#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, w, l;
  int count = 1;

  while (true) {
    cin >> r;
    if (r == 0) return 0;
    cin >> w >> l;

    double diaL = sqrt((w * w) + (l * l));

    if ((double)r >= diaL / 2.0) {
      cout << "Pizza " << count << " fits on the table." << endl;
    } else {
      cout << "Pizza " << count << " does not fit on the table." << endl;
    }

    count++;
  }
  return 0;
}