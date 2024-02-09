# [백준] 설탕 배달 (2839번)

## ⏰ **time**

40분

## :pushpin: **Algorithm**

탐욕

## ⏲️**Time Complexity**

O(N)

## :round_pushpin: **Logic**

- ```
  let num = Number(input[0]);
  
  let answer = 0;
  let flag = false;
  
  while (num >= 0) {
    if (num == 0 || num % 5 == 0) {
      answer += parseInt(num / 5);
      console.log(answer);
      flag = true;
      break;
    }
    num -= 3;
    answer += 1;
  }
  
  if (!flag) {
    console.log(-1);
  }
  ```

## :black_nib: **Review**

- 이제 좀 어렵다..
