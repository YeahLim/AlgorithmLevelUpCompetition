const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs
  .readFileSync(filePath)
  .toString()
  .trim()
  .split("\n")
  .map((line) => line.replace("\r", ""));
const n = Number(input[0]);
let idx = 1;
const arr = [];
for (let i = 0; i < n; i++) {
  arr.push(input[idx++].split(" ").map(Number));
}
arr.sort((a, b) => a[0] - b[0]);
let sec = 0;
for (let i = 0; i < n; i++) {
  if (sec < arr[i][0]) {
    sec = arr[i][0];
  }
  sec += arr[i][1];
}
console.log(sec);
