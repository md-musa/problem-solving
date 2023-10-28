function rotateLeft(d, arr) {
  for (let i = 0; i < d; i++) {
    const con = arr.shift();
    arr.push(con);
  }
  return arr;
}

const result = rotateLeft(3, [1, 2, 3, 4, 5]);
console.log(result);
