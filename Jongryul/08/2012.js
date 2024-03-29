const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const n = Number(input[0]);
const arr = input.slice(1, n + 1).map(Number);

arr.sort((a, b) => a - b);
let cnt = 0;
for (let i = 0; i < n; i++) {
  cnt += Math.abs(arr[i] - (i + 1));
}
console.log(cnt);
