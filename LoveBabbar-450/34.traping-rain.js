function handleTrappingRain(arr) {
  let totalUnit = 0;
  if (arr[0] < arr[arr.length - 1]) {
    for (let i = 1; i < arr.length - 1; ++i) {
      let b = arr[0] - arr[i];
      totalUnit += b > 0 ? b : 0;
    }
  } else {
    for (let i = 0; i < arr.length - 1; ++i) {
      let a = arr[arr.length - 1] - arr[i];
      totalUnit += a > 0 ? a : 0;
    }
  }
  return totalUnit;
}
console.log(handleTrappingRain([6, 9, 9]));

// Time Complixity O(n)



const water = [3, 0, 10, 30,1, 4]
function trapedWater(){
 let sum = 0;
 let left = 0
 let right = null;
 for(let i = 1; i < water.length; i++){
   if(water[left] < water[i]){
     right = i;
     if(left < right){
       for(let j = left; j < right; j++){
        sum += water[left] - water[i];
      }
     } else{
      for(let j = left; j < right; j++){
        sum += water[right] - water[j];
      }
     }
     left = right;
     right = null;
   }
 }
 right = water[water.length-1]
 

function x(){

}
}