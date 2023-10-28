#include <bits/stdc++.h>
using namespace std;

int main() {
  int len, feq;
  while (cin >> len >> feq) {
    if (len == 0 && feq == 0) return 0;
    int arr[len];
    for (int i = 0; i < len; i++) {
      cin >> arr[i];
    }
    sort(arr, arr + len);

    int ans = 0;
    int count = 1;
    int start = arr[0];

    for (int i = 1; i < len; i++) {
      if (arr[i] == start) {
        count++;
      } else {
        if (count >= feq) ans++;
        start = arr[i];
        count = 1;
      }
    }
    if (count >= feq) ans++;

    cout << ans << endl;
  }

  return 0;
}