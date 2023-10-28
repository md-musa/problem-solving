#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> marg = {};
    int p1 = 0, p2 = 0;

    bool a1 = false;
    bool a2 = false;

    while (p1 < nums1.size() && p2 < nums2.size()) {
      if (nums1[p1] == nums2[p2]) {
        marg.push_back(nums1[p1++]);
        marg.push_back(nums2[p2++]);

      } else if (nums1[p1] < nums2[p2]) {
        marg.push_back(nums1[p1++]);
      } else {
        marg.push_back(nums2[p2++]);
      }

      if (p1 == nums1.size())
        a1 = true;
      else if (p2 == nums2.size())
        a2 = true;
    }

    if (a1) {
      for (int i = p2; i < nums2.size(); i++) {
        marg.push_back(nums2[i]);
      }
    } else if (a2) {
      for (int i = p1; i < nums1.size(); i++) {
        marg.push_back(nums1[i]);
      }
    }
  }
};

int main() {
  vector<int> nums1 = {1, 5, 5, 10, 20, 30};
  vector<int> nums2 = {4, 5, 89};

  vector<int> marg = {};
  int p1 = 0, p2 = 0;

  bool a1 = false;
  bool a2 = false;

  while (p1 < nums1.size() && p2 < nums2.size()) {
    if (nums1[p1] == nums2[p2]) {
      marg.push_back(nums1[p1++]);
      marg.push_back(nums2[p2++]);

    } else if (nums1[p1] < nums2[p2]) {
      marg.push_back(nums1[p1++]);
    } else {
      marg.push_back(nums2[p2++]);
    }

    if (p1 == nums1.size())
      a1 = true;
    else if (p2 == nums2.size())
      a2 = true;
  }

  if (a1) {
    for (int i = p2; i < nums2.size(); i++) {
      marg.push_back(nums2[i]);
    }
  } else if (a2) {
    for (int i = p1; i < nums1.size(); i++) {
      marg.push_back(nums1[i]);
    }
  }

  for (int i = 0; i < marg.size(); i++) {
    cout << marg[i] << " ";
  }

  return 0;
}