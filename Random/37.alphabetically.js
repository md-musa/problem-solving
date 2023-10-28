let alphabeticlly = (word) => {
    let alphabet = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
    let arange = []
    for (let i = 0; i < alphabet.length; i++) {
        for (let x = 0; x < word.length; x++) {
            if (alphabet[i] === word[x][0]) {
                arange.push(word[x]);
            }
        }
    }
    return arange;
}
let result = alphabeticlly(['Hug','God', 'Fool', 'Egg', 'Drems', 'Carry', 'Bread', 'Anounch'])
console.log(result)