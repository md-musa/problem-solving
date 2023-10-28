function infinitelyDivi(num1, num2, lastNum) {
    let multiply = num1 * num2;
    let container = 0
    for (let i = 0; i < lastNum; i++) {
        if (container + multiply <= lastNum) {
            container += multiply;
            console.log(container)
        }
    }
    return container;
}
let result = infinitelyDivi(2, 3, 67);
// console.log(result)