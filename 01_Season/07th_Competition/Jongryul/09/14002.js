const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";

const input = fs.readFileSync(filePath).toString().trim().split("\n");
const n = Number(input[0]);
const arr = input[1].split(" ").map(Number);
const dp = Array(n).fill(1);
const parent = Array.from({ length: n }, (_, i) => i);

for (let i = 0; i < n; i++) {
  for (let j = i + 1; j < n; j++) {
    if (arr[i] < arr[j] && dp[i] + 1 > dp[j]) {
      dp[j] = dp[i] + 1;
      parent[j] = i;
    }
  }
}

let mx = dp[0];
let max_idx = 0;

for (let i = 1; i < n; i++) {
  if (dp[i] > mx) {
    mx = dp[i];
    max_idx = i;
  }
}

console.log(mx);

const rlt = [];
let p = max_idx;
while (true) {
  rlt.unshift(arr[p]);
  if (arr[p] === arr[parent[p]]) {
    break;
  }
  p = parent[p];
}
console.log(rlt.join(" "));
