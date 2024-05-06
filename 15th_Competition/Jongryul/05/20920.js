const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "input.txt";
const input = fs
  .readFileSync(filePath)
  .toString()
  .trim()
  .split("\n")
  .map((l) => l.replace("\r", ""));

const [n, m] = input[0].split(" ").map(Number);
const json = {};
for (let i = 1; i < n + 1; i++) {
  const s = input[i];
  if (json[s]) {
    json[s] += 1;
  } else if (s.length >= m) {
    json[s] = 1;
  }
}
const arr = [];
for (let key in json) {
  arr.push(key);
}

arr.sort();
arr.sort((a, b) => b.length - a.length);
arr.sort((a, b) => json[b] - json[a]);

console.log(arr.join("\n"));
