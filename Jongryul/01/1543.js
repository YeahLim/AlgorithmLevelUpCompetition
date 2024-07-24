const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const word = input[0];
const search = input[1];
let start = 0;
let cnt = 0;

while (start <= word.length - search.length) {
  if (search === word.slice(start, start + search.length)) {
    cnt++;
    start += search.length;
  } else {
    start++;
  }
}
console.log(cnt);
