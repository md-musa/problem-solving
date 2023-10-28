#include "bits/stdc++.h"
using namespace std;

int main() {
  int len = 10;
  int arr[len] = {1, 3, 4, 6, 4, 2, 1, 3, 9, 9, 9};

  map<int, int> feq;

  for (int i = 0; i < len; i++) {
    if (feq[arr[i]] == 0) {
      feq[arr[i]] = 1;
    } else {
      feq[arr[i]]++;
    }
  }
  // Shortcut feq[arr[i]]++;

  cout << "Element\tFrequency" << endl;
  for (auto i : feq) {
    cout << i.first << "\t" << i.second << endl;
  }
}