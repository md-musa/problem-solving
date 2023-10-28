let list = {
   potato: 30,
   oil: 100,
   banana: 40,
   sink: 34
}
function howMuchSalary(description) {
   let descriptionSplit = description.split(' ')
   let total = 0;
   for (let i = 0; i < descriptionSplit.length; i++) {
      Object.keys(list).forEach(element => {
         if (descriptionSplit[i] == element) {
            total += list[element]
         }
      });
   }
  return total;
}
const description = 'I am come from kazir hat. I have bought potato and banana sink . I had also my froend Nasir. He oil bought a ';
console.log(howMuchSalary(description))
