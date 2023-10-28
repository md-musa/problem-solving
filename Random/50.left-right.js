function leftRight(string) {
    let container = '';
    for (let i = 0; i < string.length; i++) {
        if (string[i] === 'L') {
            container += string[i - 1];
        } else if (string[i] === 'R') {
            container += string[i + 1];
        } else {
            container += string[i];
        }
    }
    return container;
}
let result = leftRight('1LR1')
console.log(result)