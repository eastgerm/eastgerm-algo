//
// Created by kimdong on 2019-08-20.
//

const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let T;

rl.question("", input => {
    T = parseInt(input);
});

rl.on('line', input => {
    const [start,finish] = input.split(' ');
    const from = parseInt(start);
    const to = parseInt(finish);
    let ans = 0;
    for(let i = from; i<=to; i++) ans += (i.toString().match(/0/g) || []).length;
    console.log(ans);
    T--;
    if (T === 0) rl.close();
});

rl.on('close', () => {
    process.exit();
});