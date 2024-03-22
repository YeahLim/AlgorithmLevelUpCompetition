const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "input.txt";
const n = Number(fs.readFileSync(filePath).toString().trim());

const dp = Array.from({ length: n + 1 }, (_, i) => i);

for (let i = 2; i < n + 1; i++) {
  for (let j = 1; j < i + 1; j++) {
    const s = j ** 2;
    if (s > i) {
      break;
    }
    if (dp[i] > dp[i - s] + 1) {
      dp[i] = dp[i - s] + 1;
    }
  }
}

console.log(dp[n]);
