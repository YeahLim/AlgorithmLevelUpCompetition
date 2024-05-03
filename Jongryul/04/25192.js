const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "input.txt";
const input = fs
  .readFileSync(filePath)
  .toString()
  .trim()
  .split("\n")
  .map((l) => l.replace("\r", ""));
const n = Number(input[0]);
let cnt = 0;
const set = new Set();
let idx = 1;
for (let i = 0; i < n; i++) {
  const s = input[idx++];
  if (s === "ENTER") {
    set.clear();
  } else if (!set.has(s)) {
    set.add(s);
    cnt++;
  }
}
console.log(cnt);
