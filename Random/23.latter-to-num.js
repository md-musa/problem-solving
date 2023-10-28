function latterToNum(latterArr) {
    let codeList = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
    let code = '';
    for (let i = 0; i < latterArr.length; i++) {
        for (let u = 0; u < codeList.length; u++) {
            if (latterArr[i] === codeList[u]) {
                code = code + (u + 1);
            }
        }
    }
    return code;
}
let result = latterToNum('CODING')
console.log(result)