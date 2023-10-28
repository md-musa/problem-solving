// * status = success
var isValid = function (s) {
  if (s.length < 2) return false;
  const stack = [];
  const rightBrackets = {
    "(": "(",
    "{": "{",
    "[": "[",
  };

  const handleBracketMatch = (a, b) => {
    if (a == "(" && b == ")") return true;
    if (a == "{" && b == "}") return true;
    if (a == "[" && b == "]") return true;
    return false;
  };

  for (let i = 0; i < s.length; i++) {
    if (rightBrackets[s[i]]) stack.push(s[i]);
    else {
      if (handleBracketMatch(stack[stack.length - 1], s[i])) {
        stack.pop();
      } else return false;
    }
  }
  if (stack.length) return false;
  else return true;
};
const result = isValid("(");
console.log(result);

// valid parentheses
