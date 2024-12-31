let http = require('http')

let server = http.createServer((req, res) => {
        res.writeHead(200, 'OK', 'content-type:text/html');
        res.write("<h1>Hello node</h1>")
        res.end()
})
// .listen(3000,()=>{
//     console.log('Server was running : http://localhost//3000');
    
// })

server.listen(3000, () => {
    console.log("server have created http://localhost//3000")
})