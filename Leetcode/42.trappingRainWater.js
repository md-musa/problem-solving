/*
 * status           = SUCCESS
 * time complexity  = O(n + m)  --> m = (height - currBigWidthIndex)
 * space complexity = O(1)
 * better solution  = MAYBE
 */

var trap = function (height) {
  let water = 0;
  let tempWater = 0;
  let currBigWidth = height[0];
  let currBigWidthIndex = 0;

  for (let i = 1; i < height.length; i++) {
    if (currBigWidth > height[i]) {
      tempWater += currBigWidth - height[i];
    } else {
      currBigWidth = height[i];
      water += tempWater;
      tempWater = 0;
      currBigWidthIndex = i;
    }
  }

  if (currBigWidthIndex >= 0) {
    let bigWidthFromLast = null;
    for (let i = height.length - 1; i > currBigWidthIndex; i--) {
      if (height[i] > height[i - 1]) {
        bigWidthFromLast = i;
        break;
      }
    }
    for (let i = bigWidthFromLast - 1; i > currBigWidthIndex; i--) {
      if (height[bigWidthFromLast] > height[i]) {
        water += height[bigWidthFromLast] - height[i];
      } else {
        bigWidthFromLast = i;
      }
    }
  }

  return water;
};
//               2  1
const arr1 = [9, 6, 8, 8, 5, 6, 3];
console.log("expected 3 == ", trap(arr1));

// const arr2 = [4, 2, 0, 3, 2, 5];
// console.log("expected 9 == ", trap(arr2));

// const arr3 = [1, 2];
// console.log("expected 0 == ", trap(arr3));

// const arr4 = [1, 2, 1, 2];
// console.log("expected 1 == ", trap(arr4));
