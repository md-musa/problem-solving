function reverse(arr) {
  for (let i = 0; i <= parseInt(arr.length / 2); ++i) {
    [arr[i], arr[arr.length - (i + 1)]] = [arr[arr.length - (i + 1)], arr[i]];
  }
  return arr;
}
console.log(reverse([1, 2, 3, 4, 5, 7, 8]));
