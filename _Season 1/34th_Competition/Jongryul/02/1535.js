const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const n = Number(input[0]);
const hp = [0, ...input[1].split(" ").map(Number)];
const happy = [0, ...input[2].split(" ").map(Number)];
const dp = Array.from({ length: n + 1 }, () =>
  Array.from({ length: 101 }, () => 0)
);
for (let i = 1; i < n + 1; i++) {
  for (let j = 1; j < 101; j++) {
    if (hp[i] <= j) {
      dp[i][j] = Math.max(dp[i - 1][j], dp[i - 1][j - hp[i]] + happy[i]);
    } else {
      dp[i][j] = dp[i - 1][j];
    }
  }
}
console.log(dp[n][99]);
