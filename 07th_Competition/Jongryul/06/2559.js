const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";

let input = fs
  .readFileSync(filePath)
  .toString()
  .trim()
  .split("\n")
  .map((line) => line.replace("\r", ""));

const [n, k] = input[0].split(" ").map(Number);
const arr = input[1].split(" ").map(Number);

let tmp = arr.slice(0, k).reduce((a, b) => (a += b), 0);
let mx = tmp;

for (let i = k; i < n; i++) {
  tmp -= arr[i - k];
  tmp += arr[i];
  mx = Math.max(mx, tmp);
}

console.log(mx);
