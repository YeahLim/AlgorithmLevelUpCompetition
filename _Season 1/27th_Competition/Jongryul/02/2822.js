const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs
  .readFileSync(filePath)
  .toString()
  .trim()
  .split("\n")
  .map(Number);
const score = Array.from({ length: 151 }).fill(0);
for (let i = 0; i < input.length; i++) {
  score[input[i]] = i + 1;
}
const newArr = input.sort((a, b) => b - a).slice(0, 5);
const scores = [];
for (i of newArr) {
  scores.push(score[i]);
}
scores.sort((a, b) => a - b);
console.log(newArr.reduce((ac, curren) => ac + curren));
console.log(scores.join(" "));
