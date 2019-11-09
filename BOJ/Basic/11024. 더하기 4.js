//
// Created by kimdong on 2019-08-16.
//

const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let cnt;

rl.question("",input => {
    cnt = parseInt(input);
});

rl.on('line', input => {
    let sum = 0;
    input.split(' ').forEach(num => sum += parseInt(num));
    console.log(sum);
    cnt--;
    if(cnt === 0) rl.close();
});

rl.on('close',() => {
    process.exit();
});