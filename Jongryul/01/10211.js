const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const t = Number(input[0]);

let idx = 1;
const rlt = [];
for (let i = 0; i < t; i++) {
  const n = Number(input[idx++]);
  const dp = input[idx++].split(" ").map(Number);
  for (let j = 1; j < n; j++) {
    dp[j] = Math.max(dp[j], dp[j - 1] + dp[j]);
  }
  rlt.push(Math.max(...dp));
}
console.log(rlt.join("\n"));
