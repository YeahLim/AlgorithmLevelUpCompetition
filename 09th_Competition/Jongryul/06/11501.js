const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "input.txt";
const input = fs
  .readFileSync(filePath)
  .toString()
  .trim()
  .split("\n")
  .map((line) => line.replace("\r", ""));
const t = Number(input[0]);
for (let tc = 1; tc < t * 2; tc += 2) {
  const n = Number(input[tc]);
  const arr = input[tc + 1].split(" ").map(Number);
  let ben = 0;
  let mx = arr[n - 1];
  for (let i = n - 1; i >= 0; i--) {
    if (arr[i] > mx) {
      mx = arr[i];
    } else {
      ben += mx - arr[i];
    }
  }
  console.log(ben);
}
