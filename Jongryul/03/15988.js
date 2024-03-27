const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "input.txt";
const input = fs
  .readFileSync(filePath)
  .toString()
  .trim()
  .split("\n")
  .map((line) => line.replace("\r", ""));

const t = Number(input[0]);
const dp = [1, 1, 2];

for (let tc = 0; tc < t; tc++) {
  const n = Number(input[tc + 1]);

  for (let i = dp.length; i < n + 1; i++) {
    dp.push((dp[i - 1] + dp[i - 2] + dp[i - 3]) % 1000000009);
  }
  console.log(dp[n]);
}
