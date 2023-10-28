//* status = success

var lengthOfLastWord = function (s) {
  let str = s.trim();
  if (str == "") return 0;
  let count = 0;

  for (let i = str.length - 1; i >= 0; i--) {
    if (str[i] != " ") count++;
    else return count;
  }
  return count;
};
console.log(lengthOfLastWord("world theree"));
