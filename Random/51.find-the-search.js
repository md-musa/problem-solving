
function findTheSearch(text, part) {
    let match = 0;
    for (let i = 0; i < text.length; i++) {
        if (part[0] == text[i]) {
            for (let j = 0; j < part.length; j++) {
                if (text[i + j] == part[j]) {
                    match++
                    if (match == part.length) {
                        return i
                    }
                } else {
                    match = 0;
                }
            }
        }
    }
}
console.log(findTheSearch('fxafoxxjfid', 'xxj'))
// DONE