const express=require('express')

const app=express();

app.get('/',(req,res)=>{
    res.send("<h1>Home page</h1>")
})
app.get('/about',(req,res)=>{
    res.send("<h1>about page</h1>")
})
app.get('/contact',(req,res)=>{
    res.send("<h1>contact page</h1>")
})
app.get('/menu',(req,res)=>{
    res.send("<h1>menu page</h1>")
})
app.use((req,res)=>{
    res.send("<h1>Not Found</h1>")
})
app.listen(5000,()=>{
    console.log("server running");
})