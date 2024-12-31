let http=require('http')

let server=http.createServer((req,res)=>{
    res.writeHead(200,'OK','content-type:text/html')
    
    let url=req.url;

    if(url == '/'){
        res.end("<h1>Home and page<h1>");
    }
    else if(url == '/about'){
        res.end("<h1>About page</h1>");
    }
    else if(url == '/contect'){
        res.end("<h1>Contect page</h1>");
    }
    else{
        res.end("<h1>Not Found</h1>")
    }
   
})

server.listen(5000,()=>{
    console.log("server created http:5000");
})