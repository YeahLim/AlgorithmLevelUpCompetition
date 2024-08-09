const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const n = Number(input[0]);
const set = new Set(["ChongChong"]);
let idx = 1;
for (let i = 0; i < n; i++) {
  const [a, b] = input[idx++].split(" ").map((x) => x.trim());
  if (set.has(a) || set.has(b)) {
    set.add(a);
    set.add(b);
  }
}
console.log(set.size);
