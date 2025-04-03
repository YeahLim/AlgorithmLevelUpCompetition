const fs = require("fs");
const filePath = "input.txt";
const input = fs
  .readFileSync(filePath)
  .toString()
  .trim()
  .split("\n")
  .map((line) => line.replace("\r", ""));

const n = input[0].split("").map(Number);
const arr = Array.from({ length: n.length }, () => Array(9).fill("."));
const makeArr = (r, c, num) => {
  let cnt = 0;
  for (let i = 0; i < 3; i++) {
    for (let j = 0; j < 3; j++) {
      if (cnt === num) return;
      arr[i + r][j + c] = "#";
      cnt++;
    }
  }
};
let idx = 0;

for (let i = 0; i < n.length; i += 3) {
  for (let j = 0; j < 9; j += 3) {
    if (idx >= n.length) continue;
    const num = n[idx++];
    makeArr(i, j, num);
  }
}

for (a of arr) {
  console.log(a.join(""));
}
