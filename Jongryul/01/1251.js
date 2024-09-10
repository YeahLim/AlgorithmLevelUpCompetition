const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("");
const l = input.length;
const rlt = [];
for (let m = 1; m < l - 1; m++) {
  for (let e = m + 1; e < l; e++) {
    const newWord =
      input.slice(0, m).reverse().join("") +
      input.slice(m, e).reverse().join("") +
      input.slice(e, l).reverse().join("");
    rlt.push(newWord);
  }
}
rlt.sort();
console.log(rlt[0]);
