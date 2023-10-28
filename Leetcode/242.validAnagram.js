/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function (s, t) {
  const hashTable = {};

  for (let i = 0; i < s.length; i++) {
    if (hashTable[s[i]]) {
      hashTable[s[i]]++;
    } else {
      hashTable[s[i]] = 1;
    }
  }

  for (let i = 0; i < t.length; i++) {
    if (hashTable[t[i]]) {
      hashTable[t[i]]--;
    } else {
      hashTable[t[i]] = 1;
    }
  }

  for (let key in hashTable) {
    if (hashTable[key] !== 0) {
      return false;
    }
  }

  return true;
};
