const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs
  .readFileSync(filePath)
  .toString()
  .trim()
  .split("\n")
  .map((line) => line.replace("\r", ""));

const t = Number(input[0]);

for (let i = 1; i < t + 1; i++) {
  const word = input[i];
  const left = [];
  const right = [];
  for (let j = 0; j < word.length; j++) {
    if (word[j] === "<") {
      if (left.length) {
        right.push(left.pop());
      }
    } else if (word[j] === ">") {
      if (right.length) {
        left.push(right.pop());
      }
    } else if (word[j] === "-") {
      left.pop();
    } else {
      left.push(word[j]);
    }
  }
  right.reverse();
  console.log(left.join("") + right.join(""));
}
