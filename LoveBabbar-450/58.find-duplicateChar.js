function duplicateChar(text) {
  let dupChar = "";
  for (let i = 0; i < text.length; i++) {
    for (let j = i + 1; j < text.length; j++) {
      if (text[i] === text[j]) {
        dupChar += text[i] !== " " ? text[i] : "";
        break;
      }
    }
  }
  return dupChar;
}

const txt = "hello, I am Musa from bangladesh";
console.log(duplicateChar(txt));
