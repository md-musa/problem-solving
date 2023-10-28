// Solution-1: O(n^2), O(1)
// Using brute force approach
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
// var twoSum = function (nums, target) {
//   for (let i = 0; i < nums.length; i++) {
//     for (let j = i + 1; j < nums.length; j++) {
//       if (nums[i] + nums[j] === target) {
//         return [i, j];
//       }
//     }
//   }
// };

// ------------ 0 ---------------
// Solution-2: O(n), O(n)
// Using Hashmap
// var twoSum = function (nums, target) {
//   const hashMap = {};

//   for (let i = 0; i < nums.length; i++) {
//     const rem = target - nums[i];

//     if (hashMap[rem] >= 0) {
//       return [hashMap[rem], i];
//     }

//     hashMap[nums[i]] = i;
//   }
// };

// ------------ 0 ---------------
// Solution-3: {O(n log n) + O(n)}, O(1)
// Greedy approach
var twoSum = function (nums, target) {
  if (nums.length === 2) return nums[0] + nums[1] == target ? 'YES' : 'NO';

  const sortedNums = nums.sort((a, b) => a - b);
  let left = 0;
  let right = sortedNums.length - 1;

  while (left < right) {
    const sum = sortedNums[left] + sortedNums[right];

    if (sum === target) return 'YES';
    else if (sum < target) left++;
    else right++;
  }

  return 'NO';
};

console.log(twoSum([3, 5, 5, 6], 6));
