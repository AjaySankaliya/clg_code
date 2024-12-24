let arr=[10,20,30,31,50,40]

let large=arr[0];

for(let i=0;i<arr.length;i++){
    if(arr[i]>large){
        large=arr[i];
    }
}

console.log(large)