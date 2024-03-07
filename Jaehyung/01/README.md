# [백준] 수 찾기 (1920번)

## ⏰ **time**

20분

## :pushpin: **Algorithm**

행렬

## ⏲️**Time Complexity**

O(N)

## :round_pushpin: **Logic**

- ```
  let [N, A, M, B] = input.map((v) => v.split(" "));
  
  let array = new Set(A);
  let result = B.map((v) => (array.has(v) ? 1 : 0));
  
  console.log(result.join("\n"));
  
  ```

## :black_nib: **Review**

- 이진 탐색으로 푸는 방법이 있던데 나중에 해보겠다 하고싶으면..
