# [백준 - 실버 3] 2xn 타일링 (11726 번)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

- 다이나믹 프로그래밍

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 2*n의 직사각형을 1*2, 2*1 직사각형으로 채우는 경우의 수를 구하는 문제이다.
- n이 1부터 n까지 반복하다 보니 `dp[n] = dp[n-1] + dp[n-2]` 점화식을 세울 수 있었다.

## :black_nib: **Review**

- 점화식을 세우는 것이 중요