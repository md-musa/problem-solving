/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function (strs) {
  if (strs.length === 0) return "";
  if (strs[0] == "") return "";

  let prefix = "";

  for (let i = 0; i < strs[0].length; i++) {
    let char = strs[0][i];
    for (let j = 0; j < strs.length; j++) {
      if (char !== strs[j][i]) return prefix;
    }
    prefix = prefix + char;
  }
  return prefix;
};

const result = longestCommonPrefix([""]);
console.log(result);
