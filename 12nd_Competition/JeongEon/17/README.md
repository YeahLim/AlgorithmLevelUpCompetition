# [SWEA] 햄버거 다이어트 (5215번 D3️⃣)

## ⏰  **time**

2시간

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N*L)$

## :round_pushpin: **Logic**
1. 일정 칼로리 넘어가지 않게 넣는다. Knapsack
```cpp
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= L; j++) {
                if (w[i] > j) {
                    dp[i][j] = dp[i - 1][j];
                }
                else {
                    if (v[i] + dp[i - 1][j - w[i]] > dp[i - 1][j]) {
                        dp[i][j] = v[i] + dp[i - 1][j - w[i]];
                    }
                    else {
                        dp[i][j] = dp[i - 1][j];
                    }
                }
            }
        }
```

## :black_nib: **Review**
- 흠..  어렵다...
- 사실 이해 못하고 답 찾았다...
