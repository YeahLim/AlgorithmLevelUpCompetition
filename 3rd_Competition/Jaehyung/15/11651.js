let fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString().split('\n');

n = Number(input[0]);
let data = [];
for (let i = 1; i <= n; i++) {
  let [x, y] = input[i].split(" ").map(Number);
  data.push([x, y]);
}

function compare(a, b) {
  if (a[1] != b[1]) return a[1] - b[1];
  else return a[0] - b[0];
}

data.sort(compare);

let answer = "";
for (i = 0; i < n; i++) {
  answer += data[i].join(" ") + "\n";
}
console.log(answer);
