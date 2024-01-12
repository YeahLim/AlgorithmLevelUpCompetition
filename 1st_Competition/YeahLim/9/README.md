# [백준] 계단 오르 (2579번)

## ⏰  **time**
21분

## :pushpin: **Algorithm**
DP

## ⏲️**Time Complexity**
$O(N)$

## :round_pushpin: **Logic**
- 점화식
  ```
  dp[i] = Math.max(dp[i-2], stair[i-1] + dp[i-3]) + stair[i];
  ```
  이 식의 주의할점은 `stair[i-1] + dp[i-3]`에서 `stair[i-1]`이 `dp[i-1]가 아니라는 것이다!

## :black_nib: **Review**
- 아주 기본적인 DP문제인데 오랜만이었다
