//* status = success

var searchInsert = function (nums, target) {
  let low = 0,
    high = nums.length - 1,
    mid;

  while (low <= high) {
    mid = parseInt((low + high) / 2);

    if (nums[mid] === target) return mid;
    else if (nums[mid] < target) low = mid + 1;
    else high = mid - 1;
  }

  if (nums[low] < target) {
    return low + 1;
  } else {
    return low;
  }
};
