#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, p, q;
  cin >> n;

  cin >> p;
  int arr1[p] = {1, 2, 3};  // 1 2 3
  for (int i = 0; i < p; i++) cin >> arr1[i];

  cin >> q;
  int arr2[q];  // 2 3
  for (int i = 0; i < q; i++) cin >> arr2[i];

  for (int i = 1; i <= n; i++) {
    bool isEx = false;
    // 0   2 +
    for (int j = 0; j < (p + q); j++) {
      if ((j < p ? arr1[j] : arr2[j - p]) == i) {
        isEx = true;
        break;
      }
    }

    if (isEx == false) {
      cout << "Oh, my keyboard!\n";
      return 0;
    }
  }

  cout << "I become the guy.\n";
  return 0;
}