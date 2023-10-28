function alternateElement(arr) {
    let container = '';
    for (let i = 0; i < arr.length; i += 2) {
        container += " " + arr[i]
    }
    return container;
}
let result = alternateElement([1, 2, 3, 4, 5, 6, 7, 8, 9, 10])
console.log(result)