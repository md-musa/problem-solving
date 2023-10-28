#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  int min, max;

  cin >> x >> y;

  if (x < y) {
    min = x;
    max = y;
  } else {
    max = x;
    min = y;
  }
  int sum = 0;
  for (int i = min + 1; i < max; ++i) {
    if (i % 2 != 0) {
      sum += i;
    }
  }

  cout << sum << endl;

  return 0;
}