const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "input.txt";
const s = fs.readFileSync(filePath).toString().trim();

const Check = (s) => {
  let idx = 0;
  const check = ["U", "C", "P", "C"];
  for (let i = 0; i < s.length; i++) {
    if (s[i] === check[idx]) {
      idx++;
      if (idx === 4) {
        return "I love UCPC";
      }
    }
  }
  return "I hate UCPC";
};
console.log(Check(s));
