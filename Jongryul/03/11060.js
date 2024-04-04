const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const n = Number(input[0]);
const arr = input[1].split(" ").map(Number);
const dp = Array(n).fill(1001);
dp[0] = 0;
for (let i = 1; i < arr[0] + 1; i++) {
  dp[i] = 1;
}

for (let i = 1; i < n; i++) {
  for (let j = 1; j < arr[i] + 1; j++) {
    const k = i + j;
    if (k < n) {
      dp[k] = Math.min(dp[k], dp[i] + 1);
    }
  }
}
if (dp[n - 1] != 1001) {
  console.log(dp[n - 1]);
} else {
  console.log(-1);
}
