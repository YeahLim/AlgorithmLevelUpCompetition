const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "input.txt";
const input = fs
  .readFileSync(0, "utf-8")
  .toString()
  .trim()
  .split("\n")
  .map(Number);
const n = input[0];
const arr = input.slice(1, n + 1);
arr.sort((a, b) => b - a);

let rlt = 0;

for (let i = 0; i < n; i += 3) {
  rlt += arr[i];
  if (i + 1 < n) {
    rlt += arr[i + 1];
  }
}

console.log(rlt);
