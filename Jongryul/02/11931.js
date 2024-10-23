const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().split("\n").map(Number);
const n = input[0];
const arr = input.splice(1, n).sort((a, b) => b - a);

console.log(arr.join("\n"));
