#include <bits/stdc++.h>
using namespace std;

int binaryToDec(int num) {
  int decimal = 0;

  for (int i = 0; num != 0; i++) {
    int lastDi = num % 10;
    decimal += pow(2, i) * lastDi;
    num /= 10;
  }
  return decimal;
}

int main() {
  int t;
  while (cin >> t) {
    vector<int> nums;

    while (t--) {
      int n;
      cin >> n;
      nums.push_back(n);
    }

    for (int i = 0; i < nums.size(); i++) {
      char ch = binaryToDec(nums[i]);
      cout << ch;
    }

    cout << endl;
  }

  return 0;
}