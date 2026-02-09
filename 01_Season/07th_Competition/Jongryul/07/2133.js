const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";

const input = fs.readFileSync(filePath).toString();

const n = Number(input);

const dp = [...new Array(n + 1)].map(() => 0);
[dp[0], dp[2]] = [1, 3];

for (let i = 4; i <= n; i++) {
  if (i % 2 === 0) {
    dp[i] = dp[i - 2] * 4 - dp[i - 4];
  }
}

console.log(dp[n]);
