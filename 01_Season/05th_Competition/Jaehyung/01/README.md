# [백준] 피보나치 (9009번)

## ⏰ **time**

1시간

## :pushpin: **Algorithm**

그리디

## ⏲️**Time Complexity**

O(N)

## :round_pushpin: **Logic**

- ```
  pibo = [];
  pibo.push(0);
  pibo.push(1);
  while (pibo[pibo.length - 1] < 1e9)
    pibo.push(pibo[pibo.length - 2] + pibo[pibo.length - 1]);
  
  let testCases = Number(input[0]);
  for (let tc = 1; tc <= testCases; tc++) {
    let n = Number(input[tc]);
    let result = [];
    let i = pibo.length - 1;
    while (n > 0) {
      if (n >= pibo[i]) {
        n -= pibo[i];
        result.push(pibo[i]);
      }
      i--;
    }
    let answer = "";
    for (let i = result.length - 1; i >= 0; i--) answer += result[i] + " ";
    console.log(answer);
  }
  ```

## :black_nib: **Review**

- 어렵다 다시풀어보기
