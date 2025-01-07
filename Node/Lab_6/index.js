const express=require('express')

const app=express()

const middleware=(req,res,next)=>{
    console.log("middleware execute")
    next()
}
// app.use(middleware)
app.get('/',middleware,(req,res)=>{
    res.send("<h1>Middleware executed......</h1>")
})
app.listen(3001,()=>{
    
})