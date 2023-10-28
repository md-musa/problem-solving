#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int removeDuplicates(vector<int>& nums) {
    int last = nums.size();
    if (last == 0) return last;
    if (last == 1) return last;

    for (int i = 0; i < last; i++) {
      if (nums[i] == nums[i + 1] && i != last) {
        for (int j = i; j < last; j++) {
          nums[j] = nums[j + 1];
        };
        last--;
        i--;
      };
    };
    return last;
  }
};

int main() {
  Solution s;
  vector<int> nums = {};
  cout << s.removeDuplicates(nums);
  return 0;
};

// [ 0, 1, 1, 0, 1, 2, 2, 3, 3, 4 ]