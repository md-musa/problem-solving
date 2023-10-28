#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;

  while (cin >> t) {
    int arr[t];
    for (int i = 0; i < t; i++) {
      cin >> arr[i];
    }

    for (int i = 0; i < t; i++) {
      for (int j = i + 1; j < t; j++) {
        if (arr[i] > arr[j]) swap(arr[i], arr[j]);
      }
    }

    for (int i = 0; i < t; i++) {
      if (arr[i] == 0) {
        cout << "0000" << endl;
      } else {
        int numDigits = log10(arr[i]) + 1;

        if (numDigits == 1)
          cout << "000";
        else if (numDigits == 2)
          cout << "00";
        else if (numDigits == 3)
          cout << "0";
        cout << arr[i] << endl;
      }
    }
  }

  return 0;
}