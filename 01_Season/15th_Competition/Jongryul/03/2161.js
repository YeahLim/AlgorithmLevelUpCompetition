const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "input.txt";
const n = Number(fs.readFileSync(filePath).toString().trim());
const arr = Array.from({ length: n }, (_, i) => i + 1);
const rlt = [];

for (let i = 0; i < n; i++) {
  rlt.push(arr.shift());
  arr.push(arr.shift());
}
console.log(rlt.join(" "));
