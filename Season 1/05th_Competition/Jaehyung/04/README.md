# [백준] 단어공부 (1157번)

## ⏰ **time**

20분

## :pushpin: **Algorithm**

문자열

## ⏲️**Time Complexity**

O(1)

## :round_pushpin: **Logic**

- ```
  for (let i = 0; i < input.length; i++) {
      let reverseStr = input[i].split("").reverse().join("");
      console.log(input[i] === reverseStr ? "yes" : "no");
  }
  ```

## :black_nib: **Review**
