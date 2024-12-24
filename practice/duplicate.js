let arr=[1,2,3,2,1]

let dup=[]

for(let i=0;i<arr.length;i++){
    
    let isDuplicate=false

    for(let j=0;j<dup.length;j++){
        if(arr[i] == dup[j]){
            isDuplicate=true
            break
        }
        else{
            isDuplicate=false
        }
    }
    if(!isDuplicate){
        dup.push(arr[i])
    }
}


console.log(dup)
