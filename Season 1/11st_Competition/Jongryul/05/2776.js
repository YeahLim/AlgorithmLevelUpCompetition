const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");

const t = Number(input[0]);
let idx = 1;
const rlt = [];
for (let i = 0; i < t; i++) {
  const n = Number(input[idx++]);
  const note1 = new Set(input[idx++].split(" ").map(Number));
  const m = Number(input[idx++]);
  const note2 = input[idx++].split(" ").map(Number);

  rlt.push(...note2.map((v) => (note1.has(v) ? 1 : 0)));
}

console.log(rlt.join("\n"));
