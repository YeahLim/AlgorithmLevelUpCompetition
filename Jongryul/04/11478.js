const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const s = fs.readFileSync(filePath).toString().trim();

const set = new Set(s.split(""));

for (let i = 0; i < s.length; i++) {
  let tmp = s[i];
  for (let j = i + 1; j < s.length; j++) {
    tmp += s[j];
    if (!set.has(tmp)) {
      set.add(tmp);
    }
  }
}

console.log(set.size);
