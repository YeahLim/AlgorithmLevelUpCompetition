const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "input.txt";
const [n, k] = fs
  .readFileSync(filePath)
  .toString()
  .trim()
  .split(" ")
  .map(Number);
const dp = Array.from({ length: n }, (_, i) => Array(i + 1).fill(0));

for (let i = 0; i < n; i++) {
  for (let j = 0; j < i + 1; j++) {
    if (!j || j === i) {
      dp[i][j] = 1;
    } else {
      dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
    }
  }
}

console.log(dp[n - 1][k - 1]);
