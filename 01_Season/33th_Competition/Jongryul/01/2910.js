const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().split("\n");
const arr = input[1].split(" ").map(Number);
const j = {};
let cnt = 1;
arr.forEach((num) => {
  if (!j[num]) {
    j[num] = [cnt++, 0];
  } else {
    j[num][1]++;
  }
});

arr.sort((a, b) => j[a][0] - j[b][0]);
arr.sort((a, b) => j[b][1] - j[a][1]);

console.log(arr.join(" "));
