const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");

const n = Number(input[0]);
const arr = [...[0], ...input[1].split(" ").map(Number)];
const dp = Array.from({ length: n + 1 }, (_, i) => arr[i]);

for (let i = 0; i < n + 1; i++) {
  for (let j = 0; j < i; j++) {
    if (dp[i] > dp[i - j] + dp[j]) {
      dp[i] = dp[i - j] + dp[j];
    }
  }
}

console.log(dp[n]);
