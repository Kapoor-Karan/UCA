var express = require("express");
var app = express();
app.get('/hello-world',function(req,res){
    res.send('Hello World')
})
app.use("/", express.static("./static"))
app.listen(8080)