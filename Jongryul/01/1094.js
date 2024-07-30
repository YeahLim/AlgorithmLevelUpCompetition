const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const x = Number(fs.readFileSync(filePath).toString());

let bar = [64, 32, 16, 8, 4, 2, 1];
let rlt = 0;
let cnt = 0;
for (let i = 0; i < 7; i++) {
  if (rlt + bar[i] <= x) {
    rlt += bar[i];
    cnt++;
  }
}
console.log(cnt);
