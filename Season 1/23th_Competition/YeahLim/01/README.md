# [백준 - 골드 5] 동전 1 (2293)
 
## ⏰  **time**

40분

## :pushpin: **Algorithm**

다이나믹 프로그래밍

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
- 점화식
    ```java
        dp[i] = dp[i] + dp[j - coin[i]]
    ```

## :black_nib: **Review**
- 머리가 안돌아간다