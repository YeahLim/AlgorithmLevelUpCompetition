# [백준] 동전 0 (11047번)

## ⏰ **time**

20분

## :pushpin: **Algorithm**

탐욕

## ⏲️**Time Complexity**

O(N)

## :round_pushpin: **Logic**

- ```
  let n = Number(input[0].split(' ')[0])
  let price = Number(input[0].split(' ')[1])
  
  let coin = input.slice(1).map(Number)
  
  let count = 0
  for (i=n-1; i>=0; i--) {
    if (coin[i] <= price) {
      while (coin[i] <= price){
        price -= coin[i]
        count += 1
      }
    }
  }
  
  console.log(count)
  ```

## :black_nib: **Review**

- js로 알고리즘 풀면서 while을 처음 사용했다
