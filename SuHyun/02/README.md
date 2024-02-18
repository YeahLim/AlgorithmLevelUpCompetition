# [백준 - 골드 5] CCW(11758)

## ⏰  **time**

34분

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N*20)$

## :round_pushpin: **Logic**
1. 점화식

```
    for(int N = 0~20){
        dp[i번째][N] = dp[i-1번째][N - i번째 수] + dp[i-1번째][N + i번째 수]
    }
```

## :black_nib: **Review**
- 0인 경우는 더해도 상관없으니 조건문을 굳이 나누지 말고 더하자