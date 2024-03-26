const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "input.txt";
const input = fs.readFileSync(filePath).toString().trim();
const n = Number(input);

const dp = Array.from({ length: n + 1 }, (_, i) => n - i);
const parent = Array.from({ length: n + 1 }, (_, i) => i);
const rlt = [1];
let idx = 1;

for (let i = n; i > 0; i--) {
  if (i != n && dp[i] >= dp[i + 1] + 1) {
    parent[i] = i + 1;
    dp[i] = dp[i + 1] + 1;
  }
  if (i / 3 === Math.ceil(i / 3) && dp[i / 3] > dp[i] + 1) {
    parent[i / 3] = i;
    dp[i / 3] = dp[i] + 1;
  }
  if (i / 2 === Math.ceil(i / 2) && dp[i / 2] > dp[i] + 1) {
    parent[i / 2] = i;
    dp[i / 2] = dp[i] + 1;
  }
}

while (idx !== n) {
  rlt.push(parent[idx]);
  idx = parent[idx];
}
rlt.reverse();
console.log(dp[1]);
console.log(rlt.join(" "));
