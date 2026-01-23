const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");

const [n, m] = input[0].split(" ").map(Number);
const arr = input[1].split(" ").map(Number);
const q = Array.from(Array(n), (_, i) => i + 1);
let cnt = 0;
for (let i = 0; i < m; i++) {
  if (arr[i] !== q[0]) {
    const idx = q.findIndex((e) => e === arr[i]);
    const gap = q.length - idx;
    if (idx > gap) {
      while (arr[i] !== q[0]) {
        q.unshift(q.pop());
        cnt++;
      }
    } else {
      while (arr[i] !== q[0]) {
        q.push(q.shift());
        cnt++;
      }
    }
  }
  q.shift();
}

console.log(cnt);
