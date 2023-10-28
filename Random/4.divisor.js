function divisorFunc(num) {
    var container = '';
    for (let i = 0; i < num.length; i++) {
        for (let x = 0; x <= num[i]; x++) {
            if (num[i] % x === 0) {
                container += x
            }
        }
    }
    return container;
}
let result = divisorFunc([4, 5, 10, 44])
console.log(result)