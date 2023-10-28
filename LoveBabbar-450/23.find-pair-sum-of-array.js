function getPairsCount(arr, k) {
  let count = 0;
  for (let i = 0; i < arr.length; i++) {
    for (let j = 0; j < arr.length; j++) {
      if (arr[i] + arr[i + j + 1] === k) {
        count++;
      }
    }
  }
  return count;
}
console.log(getPairsCount([1, 1, 1, 1], 2));
