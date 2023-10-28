/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function (nums) {
  function swap(a, b) {
    [nums[a], nums[b]] = [nums[b], nums[a]];
  }

  const hashmap = {};

  for (let i = 0; i < nums.length; i++) {
    [nums[i], nums[i + 1]] = [nums[i + 1], nums[i]];
  }
  console.log(nums, "hello");
};

removeDuplicates([1, 1, 2]);
