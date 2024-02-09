# [백준] 파도반 수열 (9461번)

## ⏰  **time**
16분

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
- 점화식
  ```
  dp[i] = dp[i-3] + dp[i-2]
  ```

## :black_nib: **Review**
- dp 문제 풀때, long 타입인지 int 타입인지 잘 확인해야겠다
