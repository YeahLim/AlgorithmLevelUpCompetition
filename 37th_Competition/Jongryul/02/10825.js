const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs
  .readFileSync(filePath)
  .toString()
  .trim()
  .split("\n")
  .map((line) => line.replace("\r", ""));
const n = Number(input[0]);
const arr = input.slice(1, n + 1).map((line) => line.split(" "));
arr.map((a) => a.map((b, idx) => (idx >= 1 ? Number(b) : b)));
arr.sort();
arr.sort((a, b) => b[3] - a[3]);
arr.sort((a, b) => a[2] - b[2]);
arr.sort((a, b) => b[1] - a[1]);

const rlt = arr.map((a) => a[0]);

console.log(rlt.join("\n"));
