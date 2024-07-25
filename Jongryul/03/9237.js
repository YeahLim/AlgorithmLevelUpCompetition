const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const n = Number(input[0]);
const treeArr = input[1]
  .split(" ")
  .map(Number)
  .sort((a, b) => b - a);
let mx = 0;
for (let i = 0; i < n; i++) {
  treeArr[i] += i + 2;
  if (mx < treeArr[i]) {
    mx = treeArr[i];
  }
}
console.log(mx);
