const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().split("\n");
const [n, m] = input[0].split(" ").map(Number);
const arr = input
  .splice(1, m)
  .map(Number)
  .sort((a, b) => a - b);
let mx = 0;
let mxidx = 0;
for (let i = 0; i < m; i++) {
  let tmp;
  if (m - i > n) {
    tmp = arr[i] * n;
  } else {
    tmp = arr[i] * (m - i);
  }
  if (tmp > mx) {
    mx = tmp;
    mxidx = i;
  }
}
console.log(arr[mxidx], mx);
