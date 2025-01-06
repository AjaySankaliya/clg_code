const express=require('express')
const fs=require('fs')

const app=express()


app.get('/',(req,res)=>{
    fs.readFile('home.txt','utf-8',(err,data)=>{
        res.send(data)
    })
})
app.get('/about',(req,res)=>{
    fs.readFile('about.txt','utf-8',(err,data)=>{
        res.send(data)
    })
})
app.get('/contact',(req,res)=>{
    fs.readFile('contact.txt','utf-8',(err,data)=>{
        res.send(data)
    })
})
app.use((req,res)=>{
    res.send("Not Found")
})
app.listen(3000,()=>{
    console.log("server running")
})

