const express=require('express')
const app=express()

const path="D:/139/Node/Lab_6"
// app.use(express.static(path))

app.get('/',(req,res)=>{
    // res.send("<h1>Hello World!</h1>")
    res.sendFile(path,'./')
})
app.listen(5000)