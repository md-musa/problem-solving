function isSorted(arr) {
    let test = [];
    for (let i = 0; i < arr.length - 1; i++) {
        if (arr[i] <= arr[i + 1]) {
            test.push('Yes');
        } else {
            test.push('No');
        }
    }
    for (let i = 0; i < test.length; i++) {
        if (test[i] === 'No') {
            return 'No';
        }
    }
    return 'Yes'

}
let result = isSorted([1, 2, 3, 1, 6])
console.log(result)