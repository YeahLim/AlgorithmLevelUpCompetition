# [백준 - 실버2] 1, 2, 3 더하기 5(15990)

## ⏰  **time**

1시간(초과)

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 점화식
```
dp[n][끝자리가 1] = dp[n-3][끝자리가 2]+dp[n-3][끝자리가 3]
dp[n][끝자리가 2] = dp[n-2][끝자리가 1]+dp[n-2][끝자리가 3]
dp[n][끝자리가 3] = dp[n-1][끝자리가 1]+dp[n-1][끝자리가 2]
```

## :black_nib: **Review**
- 조건이 있다면 조건을 배열에 추가한다