const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs
  .readFileSync(filePath)
  .toString()
  .trim()
  .split("\n")
  .map((line) => line.replace("\r", ""));
const [n, m] = input.shift().split(" ").map(Number);
const arr = [Array.from({ length: m + 1 }, () => 0)];
const dp = [Array.from({ length: m + 1 }, () => 0)];
for (let i = 0; i < n; i++) {
  arr.push([0, ...input[i].split(" ").map(Number)]);
  dp.push(Array.from({ length: m + 1 }, () => 0));
}

for (let i = 1; i < n + 1; i++) {
  for (let j = 1; j < m + 1; j++) {
    dp[i][j] = Math.max(
      dp[i - 1][j] + arr[i][j],
      dp[i][j - 1] + arr[i][j],
      dp[i - 1][j - 1] + arr[i][j]
    );
  }
}

console.log(dp[n][m]);
