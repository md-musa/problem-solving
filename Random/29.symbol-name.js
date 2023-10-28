 const uppercase = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'];
 const lowercase = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
 const number = ['1', '2', '3', '4', '5', '6', '7', '8', '9', '0'];
 const symbol = ['`', '!', '#', '$', '%', '^', '&', '*', '(', ')', '_', '-', '+', '=', ',', '.', '[', ']', '{', '}', '\',', '|', '<', '> '];

 function symbolName(symbol) {
     for (let i = 0; i < uppercase.length; i++) {
         if (symbol === uppercase[i]) {
             return 'Uppercase';
         }
     }
     for (let i = 0; i < lowercase.length; i++) {
         if (symbol === lowercase[i]) {
             return 'Lowercase';
         }
     }
     for (let i = 0; i < number.length; i++) {
         if (symbol === number[i]) {
             return 'Number';
         }
     }
     for (let i = 0; i < symbol.length; i++) {
         if (symbol === symbol[i]) {
             return 'Symbol';
         }
     }
 }

 let result = symbolName('U')
 console.log(result)