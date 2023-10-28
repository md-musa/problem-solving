//* status = success

function validate(str) {
  const ch = {};
  let con = '';
  const speCh = 'abcdefghijklmnopqrstuvwxyz0123456789';
  for (let i = 0; i < speCh.length; i++) {
    ch[speCh[i]] = speCh[i];
  }

  for (let i = 0; i < str.length; i++) {
    const toLow = str[i].toLowerCase();
    if (toLow === ch[toLow] && str[i] != ' ') {
      con += toLow;
    }
  }
  return con;
}
var isPalindrome = function (s) {
  const characters = validate(s);
  const right = parseInt((characters.length - 1) / 2);

  for (let i = 0; i <= right; i++) {
    if (characters[i] !== characters[characters.length - 1 - i]) return false;
  }
  return true;
};
// console.log(isPalindrome("A man, a plan, a canal: Panama"));
