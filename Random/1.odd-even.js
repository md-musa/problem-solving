function oddEvenFunc(num) {
    for (let i = 0; i < num.length; i++) {
        if (num[i] % 2 === 0) {
            console.log('Even')
        }
        else{
            console.log('Odd')
        }
    }
}
let result = oddEvenFunc([2, 4, 14, 35, 667, 33, 1, 0])