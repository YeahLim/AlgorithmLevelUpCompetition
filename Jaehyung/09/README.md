# [백준] 소트인사이드 (1427번)

## ⏰ **time**

10분

## :pushpin: **Algorithm**

정렬

## ⏲️**Time Complexity**

O(NlogN)

## :round_pushpin: **Logic**

- ```
  let fs = require('fs');
  let input = fs.readFileSync('/dev/stdin').toString().split('\n');
  
  num = input[0].split('').map(Number)
  num.sort((a, b) => b - a)
  console.log(num.join(''))
  ```

## :black_nib: **Review**
