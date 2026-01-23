const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "input.txt";
const input = fs
  .readFileSync(filePath)
  .toString()
  .trim()
  .split("\n")
  .map((line) => line.replace("\r", ""));

const [n, d, k, c] = input[0].split(" ").map(Number);
const arr = [];
const cnts = Array(d + 1).fill(0);
let cnt = 0;
let [s, e] = [0, k - 1];
let mx = 0;

for (let i = 1; i < n + 1; i++) {
  arr.push(Number(input[i]));
}

for (let i = 0; i < k; i++) {
  const idx = arr[i];
  if (!cnts[idx]) {
    cnt++;
  }
  cnts[idx]++;
}

if (!cnts[c]) {
  mx = cnt + 1;
} else {
  mx = cnt;
}

while (s < n) {
  cnts[arr[s]]--;
  if (!cnts[arr[s]]) {
    cnt--;
  }
  s++;
  e++;
  if (!cnts[arr[e % n]]) {
    cnt++;
  }
  cnts[arr[e % n]]++;

  if (mx < cnt) {
    mx = cnt;
  }
  if (!cnts[c] && mx < cnt + 1) {
    mx = cnt + 1;
  }
}

console.log(mx);
