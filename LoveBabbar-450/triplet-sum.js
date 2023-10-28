function tripletSum(arr, x){
    for(let i=0;i<arr.length;i++){
        let a = arr[i]
        for(let j= i+1;j<arr.length; ++j){
            let b = arr[j]
            for(let k= j+1;k<arr.length;++k){
              let c=arr[k]
              if(a+b+c===x) return 1
              
            }
        }
    }
    return 0;
}
console.log(tripletSum([1,2,4,6,10], 13))