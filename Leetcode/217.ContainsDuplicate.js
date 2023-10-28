/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function (nums) {
  const hashmap = {};
  hashmap[nums[0]] = nums[0];

  for (let i = 1; i < nums.length; i++) {
    if (hashmap[nums[i]] == nums[i]) return true;
    else hashmap[nums[i]] = nums[i];
  }
  return false;
};

console.log(containsDuplicate([1, 2, 3, 0, 1]));
