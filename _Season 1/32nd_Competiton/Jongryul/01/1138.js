const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs
  .readFileSync(filePath)
  .toString()
  .split("\n")
  .map((line) => line.replace("\r", ""));

const n = Number(input[0]);
const arr = input[1].split(" ").map(Number);
const rlt = Array.from({ length: n }, () => 0);

for (let i = 0; i < n; i++) {
  let cnt = arr[i];
  for (let j = 0; j < n; j++) {
    if (!cnt && !rlt[j]) {
      rlt[j] = i + 1;
      break;
    }
    if (!rlt[j]) {
      cnt--;
    }
  }
}

console.log(rlt.join(" "));
