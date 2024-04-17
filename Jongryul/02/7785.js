const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "input.txt";
const input = fs
  .readFileSync(filePath)
  .toString()
  .trim()
  .split("\n")
  .map((line) => line.replace("\r", ""));
const n = Number(input[0]);
const st = new Set();
for (let i = 1; i < n + 1; i++) {
  const [Name, rec] = input[i].split(" ");
  if (rec === "enter") {
    st.add(Name);
  } else {
    st.delete(Name);
  }
}
const rlt = [...st];
rlt.sort();
rlt.reverse();
console.log(rlt.join("\n"));
