const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs
  .readFileSync(filePath)
  .toString()
  .trim()
  .split("\n")
  .map((line) => line.replace("\r", ""));
const [n, m] = input[0].split(" ").map(Number);
const a = [];
const b = [];

for (let i = 1; i < n + 1; i++) {
  a.push(input[i].split("").map(Number));
}

for (let i = 1 + n; i < n * 2 + 1; i++) {
  b.push(input[i].split("").map(Number));
}

const change = (r, c) => {
  for (let i = r; i < r + 3; i++) {
    for (let j = c; j < c + 3; j++) {
      if (!a[i][j]) {
        a[i][j] = 1;
      } else {
        a[i][j] = 0;
      }
    }
  }
};

let cnt = 0;

for (let i = 0; i < n - 2; i++) {
  for (let j = 0; j < m - 2; j++) {
    if (a[i][j] != b[i][j]) {
      change(i, j);
      cnt++;
    }
  }
}

if (JSON.stringify(a) === JSON.stringify(b)) {
  console.log(cnt);
} else {
  console.log(-1);
}
