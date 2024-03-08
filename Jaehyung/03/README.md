# [백준] 팩토리얼 0의 개수 (1676번)

## ⏰ **time**

30분

## :pushpin: **Algorithm**

자료구조

## ⏲️**Time Complexity**

O(N)

## :round_pushpin: **Logic**

- ```
  const fs = require('fs');
  const inputData = fs.readFileSync('/dev/stdin').toString().trim();
  
  function factorial(n) {
    return n ? BigInt(BigInt(n) * BigInt(factorial(n - 1))) : 1;
  }
  
  const solution = (n) => {
    const fArr = [...(factorial(n)).toString()];
    let result = 0;
    while(true) {
      const cur = fArr.pop();
      if (cur === '0') { 
        result += 1;
      }
      else break;
    }
    return result
  }
  
  console.log(solution(Number(inputData)));
  ```

## :black_nib: **Review**

- 
