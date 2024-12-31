let fs=require('fs')
let http=require('http')

let server=http.createServer((req,res)=>{
    res.writeHead(200,'OK','content-type:text/html')
    
    let url=req.url;

    if(url == '/'){
        fs.readFile('home.txt','utf-8',(err,data)=>{
            if(err){
                console.log("error")
            }
            res.end(data);
        })
    }
    else if(url == '/about'){
        fs.readFile('about.txt','utf-8',(err,data)=>{
            if(err){
                console.log("error")
            }
            res.end(data);
        })
    }
    else if(url == '/contect'){
        fs.readFile('contect.txt','utf-8',(err,data)=>{
            if(err){
                console.log("error")
            }
            res.end(data);
        })
    }
    else{
        res.end("<h1>Not Found</h1>")
    }   
   
})

server.listen(5000,()=>{
    console.log("server created http:5000");
})