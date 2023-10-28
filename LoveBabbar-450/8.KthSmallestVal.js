// // Not solved yet
function KthSmallestVal(arr, k) {
  let sm = null;
  if (k === 0) {
    console.log(sm);
    return;
  }
  for (let i = 0; i < arr.length; i++) {
    if (!(arr[i] < sm)) {
      if (k === 1) sm = arr[i];
      arr[i] = null;
    }
  }
  return KthSmallestVal(arr, k - 1);
}

KthSmallestVal([7, 10, 4, 20, 15], 4);
