# [백준 - 골드 5] Ezreal 여눈부터 가네 ㅈㅈ (20500)
 
## ⏰  **time**

40분

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 문제풀이

DP 식
```
    dp[길이] = dp[길이 -2]*3 + dp[길이 -3]*2
```

## :black_nib: **Review**
- 모르겠으면 경우의 수를 직접 모두 구해서 규칙을 찾자