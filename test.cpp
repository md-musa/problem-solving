#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> arr1 = {1, 5, 5, 10, 20, 30};
  vector<int> arr2 = {4, 5, 89};
  int a;
  cin >> a;

  vector<int> marg = {};
  int p1 = 0, p2 = 0;

  bool a1 = false;
  bool a2 = false;

  while (p1 < arr1.size() && p2 < arr2.size()) {
    if (arr1[p1] == arr2[p2]) {
      marg.push_back(arr1[p1++]);
      marg.push_back(arr2[p2++]);

    } else if (arr1[p1] < arr2[p2]) {
      marg.push_back(arr1[p1++]);
    } else {
      marg.push_back(arr2[p2++]);
    }

    if (p1 == arr1.size())
      a1 = true;
    else if (p2 == arr2.size())
      a2 = true;
  }

  if (a1) {
    for (int i = p2; i < arr2.size(); i++) {
      marg.push_back(arr2[i]);
    }
  } else if (a2) {
    for (int i = p1; i < arr1.size(); i++) {
      marg.push_back(arr1[i]);
    }
  }

  for (int i = 0; i < marg.size(); i++) {
    cout << marg[i] << " ";
  }

  return 0;
}