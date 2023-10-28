function smallestSubArr(arr, x){
    let a=x;
    let count = 0;
    while(a > 0){
        let big = arr[0]
        for(let i=0; i < arr.length; ++i){
            // if(arr[i]>a) return [1, arr[i]]
            if(arr[i+1] > big && arr[i+1] < a){
                big = arr[i+1]
                a -= big;
                count++;
            }
            if(a===0) return count;
        }
    }  
}
console.log(smallestSubArr([1,4,34,85,23,9], 100))