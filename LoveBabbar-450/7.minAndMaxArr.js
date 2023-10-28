// soliution 1 worked
function minAndMax(arr) {
  let min = (max = arr[0]);
  for (let i = 1; i < arr.length; i++) {
    if (arr[i] < min) min = arr[i];
    if (arr[i] > max) max = arr[i];
  }
  //   return {min, max};
  console.log({min, max});
}
minAndMax([2, 45, 65, 43, 31, 56, 4, 0, 3]);
// soliution 2 not worked
// function minAndMax(arr, low, high) {
//   let highest = (lowest = arr[0]);
//   if (arr.length / 2 === low) {
//     console.log(highest, lowest);
//     return;
//   }
//   if (arr[low] > arr[high] && arr[low] < lowest) lowest = arr[low];
//   if (arr[high] > arr[low] && arr[high] > highest) highest = arr[high];
//   return minAndMax(arr, low + 1, high - 1);
// }

// const a = [1112, 1, 45, 38, 2, 283];
// minAndMax(a, 0, a.length - 1);
