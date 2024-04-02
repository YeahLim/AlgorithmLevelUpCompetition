const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const [n, m] = input[0].split(" ").map(Number);
const j = Number(input[1]);
let [s, e] = [1, m];
let dif = 0;
let cnt = 0;

for (let i = 2; i < j + 2; i++) {
  const pos = Number(input[i]);
  if (pos < s) {
    dif = s - pos;
    s -= dif;
    e -= dif;
    cnt += dif;
  } else if (pos > e) {
    dif = pos - e;
    s += dif;
    e += dif;
    cnt += dif;
  }
}
console.log(cnt);
