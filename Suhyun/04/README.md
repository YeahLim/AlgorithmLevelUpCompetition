# [백준 - 실버 2] 상자넣기 (1965)

## ⏰  **time**

5분

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**
1. 문제풀이

가장 긴 감소하는 부분수열의 길이를 구하는 문제이다. 이에 대한 점화식은 다음과 같다.

dp[i] = max(dp[0],dp[1], ... ,dp[i-1]) + 1

## :black_nib: **Review**