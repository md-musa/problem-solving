function numReverse(sum) {
    let container = ''
    for (let i = sum.length - 1; i >= 0; i--) {
       container += sum[i];
    }
    return container;
}
let result = numReverse('100')
console.log(result)