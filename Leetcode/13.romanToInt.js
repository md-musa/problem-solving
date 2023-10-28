var romanToInt = function (s) {
  const list = { I: 1, V: 5, X: 10, L: 50, C: 100, D: 500, M: 1000 };
  let total = 0;
  for (let i = 0; i < s.length; i++) {
    if (list[s[i]] < list[s[i + 1]]) total -= list[s[i]];
    else total += list[s[i]];
  }
  return total;
};

console.log(romanToInt("III"));
console.log(romanToInt("IV"));
console.log(romanToInt("IX"));
console.log(romanToInt("MCMXCIV"));
console.log(romanToInt("Iv"));
//        1994
