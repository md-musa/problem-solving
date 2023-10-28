function marge(a1, a2) {
  const margedArr = [];
  addToMarged();
  return medianOf([...margedArr, ...a1, ...a2]);

  function addToMarged() {
    while (a1.length > 0 && a2.length > 0) {
      if (a1[0] < a2[0]) {
        margedArr.push(a1[0]);
        a1.shift();
      } else {
        margedArr.push(a2[0]);
        a2.shift();
      }
    }
  }
}
function medianOf(arr) {
  console.log(arr);
  if (arr.length % 2 == 1) {
    return arr[Math.ceil(arr.length / 2) - 1];
  } else {
    const newLocal = arr[arr.length / 2 - 1] + arr[arr.length / 2];
    return newLocal / 2;
  }
}

console.log(marge([2, 3, 5, 8], [10, 12, 14, 16, 18, 20]));
// Time Complexity O(log m , log n)
