function arrayAlice(arr1, arr2) {
    let container = []
    for (let i = 0; i < arr1.length; i++) {
        container.push(arr1[i])
    }
    for (let i = 0; i < arr2.length; i++) {
        container.push(arr2[i])
    }
    let arangeArr = []

    for (let a = 0; a < container.length; a++) {
        let small = container[a];
        for (let i = a; i < container.length; i++) {
            if (small < container[i]) {
                small = container[i];
            }
        }
        arangeArr.push(small)
    }
    console.log(arangeArr)
}
const arr1 = [80, 60, 30, 40, 50]
const arr2 = [15, 25, 35, 45, 55]
let result = arrayAlice(arr1, arr2)
console.log(result)