# [백준] 팰린드롬수 (1259번)

## ⏰ **time**

20

## :pushpin: **Algorithm**

문자열

## ⏲️**Time Complexity**

O(N)

## :round_pushpin: **Logic**

- ```
  for (let i = 0; i < input.length; i++) {
  	let reverseStr = input[i].split("").reverse().join("");
  	console.log(input[i] === reverseStr ? "yes" : "no");
  }
  ```

## :black_nib: **Review**

- 삼항연산자로 좀 더 코드를 간결하게 해보았다
