let s = 1;
const arr = Array.from({ length: 10001 }, () => 0);
const rlt = [];
while (s <= 10000) {
  const numbers = String(s).split("").map(Number);
  const idx = [s++, ...numbers].reduce((acc, cur) => acc + cur, 0);
  if (idx <= 10000) {
    arr[idx] = 1;
  }
}

arr.forEach((num, idx) => {
  if (!num && idx) {
    rlt.push(idx);
  }
});

console.log(rlt.join("\n"));
