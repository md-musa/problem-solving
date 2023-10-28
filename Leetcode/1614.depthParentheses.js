/*
 * status           = SUCCESS
 * time complexity  = O(n)
 * space complexity = O(1)
 * better solution  = MAYBE
 */

var maxDepth = function (s) {
  let count = 0;
  let max = 0;

  for (let i = 0; i < s.length; i++) {
    if (s[i] == "(") count++;
    else if (s[i] == ")") count--;

    if (max < count) max = count;
  }
  return max;
};

const s = "1";
const result = maxDepth(s);
console.log(result);
