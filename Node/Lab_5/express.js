const express=require('express')

const app=express();

app.get('/',(req,res)=>{
    res.send("<h1>Hello Express!....");
})

app.listen(3001,()=>{
    console.log("server running");
})