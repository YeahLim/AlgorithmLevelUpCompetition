const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs
  .readFileSync(filePath)
  .toString()
  .trim()
  .split("\n")
  .map((l) => l.replace("\r", ""));

const t = Number(input[0]);
const rlt = [];
let idx = 1;

for (let i = 0; i < t; i++) {
  let [j, n] = input[idx++].split(" ").map(Number);

  const arr = [];
  for (let k = 0; k < n; k++) {
    const [a, b] = input[idx++].split(" ").map(Number);
    arr.push(a * b);
  }
  arr.sort((a, b) => b - a);
  let cnt = 0;
  for (let k = 0; k < n; k++) {
    cnt++;
    j -= arr[k];
    if (j <= 0) {
      rlt.push(cnt);
      break;
    }
  }
}
console.log(rlt.join("\n"));
