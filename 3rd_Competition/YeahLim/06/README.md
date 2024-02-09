# [백준] 2xN 타일링 2 (11727번)

## ⏰  **time**
30분

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
- 점화식
  ```
  dp[i] = dp[i-1] + dp[i-2] * 2
  ```

## :black_nib: **Review**
- 인덱스가 헷갈려서 dp의 크기가 2인데도 dp[2]도 초기화가 가능한 줄 알았다..! 조심조심!
