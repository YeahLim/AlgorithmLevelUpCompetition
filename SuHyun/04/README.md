# [백준 - 실버2] 1, 2, 3 더하기 3(15988)

## ⏰  **time**

10분

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 점화식

```java
    dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
```


## :black_nib: **Review**
- 헷갈리면 주어진 경우의 수를 5번까진 해보자
- 일단 여러 조합으로 더해보면 점화식이 나올 때가 있다 