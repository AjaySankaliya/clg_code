const express=require('express')

const app=express()

const students=[
    {id:1,name:'ajay'},
    {id:2,name:'jay'}
]

app.get('/:id',(req,res)=>{
    const id=parseInt(req.params.id);
    const student=students.find(f=>f.id===id)
    res.send(student.name)
})

app.listen(3001,()=>{
    console.log("server created")
})