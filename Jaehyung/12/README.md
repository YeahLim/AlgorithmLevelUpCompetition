# [백준] 잃어버린 괄호 (1541번)

## ⏰ **time**

40분

## :pushpin: **Algorithm**

탐욕

## ⏲️**Time Complexity**

O(N)

## :round_pushpin: **Logic**

- ```
  input = "55-50+40";
  let arr1 = input.split("-");
  let arr2 = [];
  for (let num of arr1) {
    let sum = 0;
    let num2 = num.split("+");
    for (let i of num2) {
      sum += Number(i);
    }
    arr2.push(sum);
  }
  
  let answer = arr2[0];
  for (let j = 1; j < arr2.length; j++) {
    answer -= arr2[i];
  }
  console.log(answer);
  ```

## :black_nib: **Review**

- 아이디어 생각 하느라 시간이 좀 걸렸다
