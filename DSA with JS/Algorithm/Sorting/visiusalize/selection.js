function swap(arr, i, j) {
  var tmp = arr[i];
  arr[i] = arr[j];
  arr[j] = tmp;
}

function selectionSort(arr) {
  let smallest = 0;

  for (let i = 0; i < arr.length; i++) {
    smallest = i;
    for (let j = i + 1; j < arr.length; j++) {
      if (arr[j] < arr[smallest]) {
        smallest = j;
      }
    }
    swap(arr, i, smallest);
  }
  return arr;
}

const arr = [5, 3, 6, 0, 1, 100, 2, 10];
console.log(selectionSort(arr));
