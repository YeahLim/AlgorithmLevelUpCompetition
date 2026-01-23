const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const [n, k] = input[0].split(" ").map(Number);
const arr = input[1].split("");
let cnt = 0;
for (let idx = 0; idx < n; idx++) {
  if (arr[idx] === "P") {
    for (let i = idx - k; i <= idx + k; i++) {
      if (i >= 0 && arr[i] === "H") {
        cnt++;
        arr[i] = "";
        break;
      }
    }
  }
}

console.log(cnt);
