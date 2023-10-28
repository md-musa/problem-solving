function vowelConsonantPrint(sentence) {
    let vowelList = [];
    let vowel = 'AEIOUaeiou';
    for (let i = 0; i < sentence.length; i++) {
        for (let k = 0; k < vowel.length; k++) {
            if (sentence[i] === vowel[k]) {
                vowelList.push(sentence[i]);
            }
        }
    }
    let vowelChar = ''
    for (let x = 0; x < vowelList.length; x++) {
        vowelChar += " " + vowelList[x];
    }
    return vowelChar;
}
let sentence = 'Amar sonar Bangla, Ami tomai valobasi';
let result = vowelConsonantPrint(sentence)
console.log(result)