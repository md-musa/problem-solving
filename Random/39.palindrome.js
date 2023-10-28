function palindrome(name) {
    if (name.length % 2 === 0) {
        for (let i = 0; i < name.length / 2; i++) {
            if (name[i] === name[name.length - (i + 1)]) {
                return 'Yes! it is Palindrome!'
            } else {
                return 'Sorry! it is not Palindrome!'
            }
        }
    } else {
        for (let i = 0; i < parseInt(name.length / 2); i++) {
            if (name[i] === name[name.length - (i + 1)]) {
                return 'Yes! it is Palindrome!'
            } else {
                return 'Sorry! it is not Palindrome!'
            }
        }
    }
}
let result = palindrome('civic')
console.log(result)