# [백준] 피보나치 수 (2747번)

## ⏰ **time**

20분

## :pushpin: **Algorithm**

행렬

## ⏲️**Time Complexity**

O(1)

## :round_pushpin: **Logic**

- ```
  let num = Number(input[0]);
  let arr = new Array(num + 1).fill(0);
  arr[1] = 1;
  for (let i = 2; i <= num; i++) {
    arr[i] = arr[i - 2] + arr[i - 1];
  }
  ```

## :black_nib: **Review**

- 9009번 문제 풀기 전에 풀어보았다
- 
