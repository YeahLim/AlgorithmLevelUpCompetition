# [백준] 스티커 (9456번 🩶1️⃣)

## ⏰  **time**

45분

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N^T)$

## :round_pushpin: **Logic**
1. 포함할 수 있는 수는, 대각선 혹은 그 다음 대각선이다.
```cpp
        dp[0][0] = 0;
        dp[1][0] = 0;
        dp[0][1] = sticker[0][1];
        dp[1][1] = sticker[1][1];

        for (int j = 2; j < n + 1; j++) {
            dp[0][j] = max(dp[1][j - 2], dp[1][j - 1]) + sticker[0][j];
            dp[1][j] = max(dp[0][j - 2], dp[0][j - 1]) + sticker[1][j];
        }
```

## :black_nib: **Review**
- 
