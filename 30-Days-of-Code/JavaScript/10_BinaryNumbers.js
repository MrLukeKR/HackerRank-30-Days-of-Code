'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.replace(/\s*$/, '')
        .split('\n')
        .map(str => str.replace(/\s*$/, ''));

    main();
});

function readLine() {
    return inputString[currentLine++];
}

function main() {
    const n = parseInt(readLine(), 10);
    const nBin = n.toString(2);

    var count = 0;
    var highest = 0;
    for (var i = 0; i < nBin.length; i++){
        if (nBin[i] == 0)
            count = 0;
        else
            count += 1;

        if (count > highest)
            highest = count;
    }

    console.log(highest);
}
