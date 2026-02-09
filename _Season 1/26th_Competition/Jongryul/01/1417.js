const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs
  .readFileSync(filePath)
  .toString()
  .trim()
  .split("\n")
  .map((line) => Number(line));

let cnt = 0;
let me = input[1];
const newArr = input.slice(2, input.length).sort((a, b) => b - a);

while (newArr[0] >= me) {
  me++;
  cnt++;
  newArr[0]--;
  newArr.sort((a, b) => b - a);
}

console.log(cnt);
