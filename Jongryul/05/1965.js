const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "input.txt";
const input = fs.readFileSync(filePath).toString().split("\n");
const n = Number(input[0]);
const arr = input[1].split(" ").map(Number);
const dp = Array(n).fill(1);
for (let i = 0; i < n; i++) {
  for (let j = i + 1; j < n; j++) {
    if (arr[i] < arr[j] && dp[j] < dp[i] + 1) {
      dp[j] = dp[i] + 1;
    }
  }
}

console.log(Math.max(...dp));
