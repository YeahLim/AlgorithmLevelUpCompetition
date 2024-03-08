const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "input.txt";
const input = fs
  .readFileSync(filePath)
  .toString()
  .trim()
  .split("\n")
  .map((w) => w.replace("\r", ""));
const [n, arr] = [Number(input[0]), input.slice(1, input[0] + 1)];
let cnt = 0;
for (let i = 0; i < n; i++) {
  const stack = [];
  const word = arr[i];
  for (let j = 0; j < word.length; j++) {
    if (stack.length && stack[stack.length - 1] === word[j]) {
      stack.pop();
    } else {
      stack.push(word[j]);
    }
  }
  if (!stack.length) {
    cnt += 1;
  }
}
console.log(cnt);
