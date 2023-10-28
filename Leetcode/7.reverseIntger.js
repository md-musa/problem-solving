//* status = failed

var reverse = function (x) {
  const st = x.toString();
  let reverse = "";
  for (let i = 0; i < st.length; i++) {
    reverse = st[i] + reverse;
  }
  const toInt = parseInt(st[0] == "-" ? "-" + reverse : reverse);
  return toInt;
};

const result = reverse(-123);
console.log(result);

const convertNumberToBinary = number => {
  return (number >>> 0).toString(2);
};

const x = convertNumberToBinary(1534236469);
console.log(x);
