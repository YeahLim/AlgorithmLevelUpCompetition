const fs = require("fs");
const filePath = "input.txt";
const input = fs
  .readFileSync(filePath)
  .toString()
  .trim()
  .split("\n")
  .map((line) => line.replace("\r", ""));
const n = Number(input[0]);
const arr = input.splice(1, n + 1).map(Number);

let start = 1;
let rlt = -1;

while (start <= n) {
  rlt++;
  for (let i = 0; i < n; i++) {
    if (arr[i] === start) {
      start++;
    }
  }
}

console.log(rlt);
// console.log(arr);
