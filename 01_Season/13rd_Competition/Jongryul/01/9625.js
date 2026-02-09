const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "input.txt";
const k = Number(fs.readFileSync(filePath).toString().trim());

const dp = [
  [1, 0],
  [0, 1],
];

for (let i = dp.length - 1; i < k + 1; i++) {
  dp.push([dp[i][0] + dp[i - 1][0], dp[i][1] + dp[i - 1][1]]);
}
console.log(dp[k][0], dp[k][1]);
