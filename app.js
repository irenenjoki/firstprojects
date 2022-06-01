import express from 'express';
import {translate} from './app/translator.js';
import {Math} from './app/math.js';
const port=7000;
const app = express();
app.get('/', function(req,res){

    res.send(`hello world!`)
   

});
app.get('/translate', function(req,res){
const word=req.query.word
    res.send(translate(word))});
    app.get('/math', function(req,res){
        const num = Math.floor(Math.random() * (max - min + 1)) + min;
        return num;
        random(1, 10);

    });
app.listen(port,function(){
console.log('Server started on port 7000...');
});



