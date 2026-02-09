const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const n = Number(input[0].replace("\r", ""));
const arr = input[1].split(" ").map(Number);
const dp = Array.from({ length: n }).fill(1);
const dp2 = Array.from({ length: n }).fill(1);

for (let i = 0; i < n - 1; i++) {
  if (arr[i] <= arr[i + 1]) {
    dp[i + 1] = dp[i] + 1;
  }
  if (arr[i] >= arr[i + 1]) {
    dp2[i + 1] = dp2[i] + 1;
  }
}

console.log(Math.max(...dp2, ...dp));
