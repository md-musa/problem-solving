#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int n;

  while (true) {
    cin >> n;
    if (n < 0) return 0;
    if (n == 0) {
      cout << 0 << endl;
      continue;
    }

    vector<int> arr;

    while (n != 0) {
      int re = n % 3;

      arr.push_back(re);

      n = n / 3;
    };

    for (int i = arr.size() - 1; i >= 0; i--) {
      cout << arr[i];
    };
    cout << endl;
  }
}