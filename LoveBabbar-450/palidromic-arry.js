function plindromicArr(arr) {
  for (let i = 0; i < arr.length; ++i) {
    if (arr[i] != arr[i].toString().split("").reverse().join("")) {
      return "Its not Palindrome..";
    }
  }
  return "Its Palindrome..";
}
console.log(plindromicArr([121, "333", 11]));

// Time complixity O(n)
