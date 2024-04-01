# [백준] ATM (11399번)

## ⏰ **time**

20분

## :pushpin: **Algorithm**

탐욕

## ⏲️**Time Complexity**

O(N)

## :round_pushpin: **Logic**

- ```
  let n = Number(input[0]);
  let data = input[1].split(" ").map(Number);
  data.sort((a,b) => a - b)
  
  let k = n
  let answer = 0
  for (let i=0; i<n; i++) {
    answer += data[i] * k
    k -= 1
  }
  console.log(answer)
  ```

## :black_nib: **Review**
