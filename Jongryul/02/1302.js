const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "input.txt";
const input = fs
  .readFileSync(filePath)
  .toString()
  .trim()
  .split("\n")
  .map((line) => line.replace("\r", ""));

const n = Number(input[0]);
const dic = {};
let mx = 0;
const rlt = [];
for (let i = 1; i < n + 1; i++) {
  const book = input[i];
  if (!dic[book]) {
    dic[book] = 1;
  } else {
    dic[book]++;
  }
  if (dic[book] > mx) {
    mx = dic[book];
  }
}

for (let key in dic) {
  if (dic[key] === mx) {
    rlt.push(key);
  }
}

rlt.sort();

console.log(rlt[0]);
