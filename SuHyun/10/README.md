# [프로그래머스] 최적의 행렬 곱셈

30분

## :pushpin: **Algorithm**

dp

## ⏲️**Time Complexity**

$O(N*logN)$

## :round_pushpin: **Logic**
1. 점화식
```
 dp[start][end] = Math.min(dp[start][mid] + dp[mid][end] + A[start]*A[mid]*A[end],dp[start][end])  (mid > start && mid < end)
```

## :black_nib: **Review**
- 헷갈리면 dp 테이블을 만들어본다
