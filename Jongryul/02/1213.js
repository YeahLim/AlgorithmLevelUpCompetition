const { reverse } = require("dns");
const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const w = fs.readFileSync(filePath).toString().trim().split("");
w.sort();
const l = w.length;
let i = 0;
const rlt = [];
let tmp = "";
let check = 0;
let check2 = 0;
while (i < l) {
  if (i < l - 1 && w[i] === w[i + 1]) {
    rlt.push(w[i]);
    i += 2;
  } else {
    if (!check) {
      check = 1;
      tmp = w[i];
      i++;
    } else {
      console.log("I'm Sorry Hansoo");
      check2 = 1;
      break;
    }
  }
}

if (!check2) {
  const tmplist = [...rlt].reverse();
  rlt.push(tmp);
  rlt.push(...tmplist);
  console.log(rlt.join(""));
}
