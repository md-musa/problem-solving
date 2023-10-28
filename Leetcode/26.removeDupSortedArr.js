/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function (nums) {
  let tem = null;

  for (let i = 0; i < nums.length; i++) {
    if (nums[i] === nums[i + 1]) {
      nums[i + 1] = "_";
    }
  }
};

[1, 2, 2, "_", 3, 4, 4, 5];
