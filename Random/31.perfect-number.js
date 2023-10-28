function perfectNumfunc(num) {
    let perfectNum = '';
    for (let i = 1; i < num; i++) {
        let container = 0;
        for (let x = 0; x < i; x++) {
            if (i % x === 0) {
                container += x;
            }
        }
        if (i === container) {
            perfectNum += " " + i;
        }
        container = 0;
    }
    return perfectNum;
}
let result = perfectNumfunc(10000)
console.log(result)