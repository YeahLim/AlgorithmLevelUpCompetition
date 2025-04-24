# [백준 - 골드 5] 1, 2, 3 더하기 4
 
## ⏰  **time**
답안참고

## :pushpin: **Algorithm**
DP

## ⏲️**Time Complexity**
$O(N)$

## :round_pushpin: **Logic**
- 점화식
    ```c++
        dp[i][1] = 1;
        dp[i][2] = dp[i-2][1] + dp[i-2][2];
        dp[i][3] = dp[i-3][1] + dp[i-3][2] + dp[i-3][3];
    ```
## :black_nib: **Review**
- 