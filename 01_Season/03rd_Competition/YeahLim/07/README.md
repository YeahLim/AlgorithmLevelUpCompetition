# [백준] Four Squares (17626번)

## ⏰  **time**
40분

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
- 점화식
  ```
  dp[i] = dp[i-1] + 1
  dp[i] = dp[i-j*j] + 1
  ```

## :black_nib: **Review**
- 첨에 규칙찾아서 풀었는데, 틀려서 보니 예외가 많았다... 다른 풀이를 참고 했다
