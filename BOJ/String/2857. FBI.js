//
// Created by kimdong on 2019-08-16.
//

const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let num = 1;
let ans = '';

rl.on('line', input => {
    if(input.includes('FBI')) ans += `${num} `;
    num++;
    if(num === 6) rl.close();
});

rl.on('close',() => ans === '' ? console.log("HE GOT AWAY!") : console.log(ans));