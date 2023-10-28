#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    int len1, len2;
    cin >> len1 >> len2;
    if (len1 == 0 && len2 == 0) return 0;

    vector<int> arr1;
    vector<int> arr2;

    while (len1--) {
      int num;
      cin >> num;
      if (arr1.size() > 0 && arr1.back() != num) {
        arr1.push_back(num);
      }
      if (arr1.size() == 0) {
        arr1.push_back(num);
      }
    }

    while (len2--) {
      int num;
      cin >> num;
      if (arr2.size() > 0 && arr2.back() != num) {
        arr2.push_back(num);
      }
      if (arr2.size() == 0) {
        arr2.push_back(num);
      }
    }

    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < arr1.size(); i++) {
      bool isThere = true;
      for (int j = 0; j < arr2.size(); j++) {
        if (arr1[i] == arr2[j]) {
          isThere = false;
          break;
        }
      }
      if (isThere) count1++;
    }

    for (int i = 0; i < arr2.size(); i++) {
      bool isThere = true;
      for (int j = 0; j < arr1.size(); j++) {
        if (arr2[i] == arr1[j]) {
          isThere = false;
          break;
        }
      }
      if (isThere) count2++;
    }

    if (count1 < count2)
      cout << count1 << endl;
    else
      cout << count2 << endl;
  }

  return 0;
}
