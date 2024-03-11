const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readlinkSync(filePath).toString().trim().split("\n");

const a = input[0];
const b = input[1];

console.log(a);
console.log(b);
