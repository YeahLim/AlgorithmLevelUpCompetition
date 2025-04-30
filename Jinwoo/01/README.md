# [백준 - 실버 5] 암기왕 (1417 번)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

- 수학
- 다이나믹 프로그래밍

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 어떤 수 i를 제곱수들의 합으로 표현한다고 할 때, 
- i - j^2 를 만든 뒤, 여기에 j^2 하나를 더한 것으로 생각하면 됨. 
- 즉, dp[i] = min(dp[i - j*j] + 1) (단, j*j <= i)

## :black_nib: **Review**

- 점화식 연습