#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    int n, a, b;
    cin >> n >> a >> b;

    if (n == 0 && a == 0 && b == 0) return 0;

    int count = 0;
    for (int i = 1; i <= n; i++) {
      if (i % a == 0 || i % b == 0) count++;
    }
    cout << count << endl;
  }

  return 0;
}