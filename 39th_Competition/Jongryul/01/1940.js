const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().split("\n");
const n = Number(input[0]);
const arr = new Set(input[1].split(" ").map(Number));
const rlt = [];
arr.forEach((i) => rlt.push(i));
rlt.sort((a, b) => a - b);
console.log(rlt.join(" "));
