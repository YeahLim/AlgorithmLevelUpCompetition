const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");

const [n, m] = input[0].split(" ").map(Number);
const a = new Set(input[1].split(" ").map(Number));
const b = new Set(input[2].split(" ").map(Number));

let cnt = n + m;

for (i of a) {
  if (b.has(i)) {
    cnt -= 2;
  }
}
console.log(cnt);
