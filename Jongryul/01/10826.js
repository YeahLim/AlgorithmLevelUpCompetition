const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "input.txt";
const n = Number(fs.readFileSync(filePath).toString().trim());
const dp = [0n, 1n];
if (n > 1) {
  for (let i = 2; i <= n; i++) {
    dp[i] = dp[i - 1] + dp[i - 2];
  }
}
console.log(dp[n].toString());
