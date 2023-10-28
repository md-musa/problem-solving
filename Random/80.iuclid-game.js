function iuClidGame(num1, num2) {
    let resultNum = num1;
    for (let i = resultNum; i >= 0; i++) {
        if (num1 > num2) {
            console.log(num1 - num2)
        } else {
            console.log(num2 - num1)
        }
    }
}
iuClidGame(10, 8)