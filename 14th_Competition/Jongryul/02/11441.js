const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const n = Number(input[0]);
const arr = input[1].split(" ").map(Number);
const m = Number(input[2]);
const rlt = [];

for (let i = 1; i < n; i++) {
  arr[i] = arr[i - 1] + arr[i];
}

for (let i = 3; i < m + 3; i++) {
  const [s, e] = input[i].split(" ").map((num) => Number(num) - 1);
  if (s > 0) {
    rlt.push(arr[e] - arr[s - 1]);
  } else {
    rlt.push(arr[e]);
  }
}

console.log(rlt.join("\n"));
