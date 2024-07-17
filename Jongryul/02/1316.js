const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const n = Number(input[0]);
let idx = 1;
let cnt = 0;
for (let i = 0; i < n; i++) {
  const str = input[idx++];
  const set = new Set(str[0]);
  let now = str[0];
  let check = true;
  for (let j = 1; j < str.length; j++) {
    if (str[j] !== now) {
      if (!set.has(str[j])) {
        now = str[j];
        set.add(str[j]);
      } else {
        check = false;
        break;
      }
    }
  }
  if (check) {
    cnt++;
  }
}
console.log(cnt);
