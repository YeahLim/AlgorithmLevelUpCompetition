# [프로그래머스] 연속 펄스 부분 수열의 합

## ⏰  **time**

1시간(타임오버)

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 점화식
   ```
     dp[현재 숫자를 사용할 때 최대 구간합] = max(dp[현재 숫자를 사용할 때 최대 구간합] , 현재값) 
   ```

## :black_nib: **Review**
- 구간합 = dp
- 최대, 최소라는 말이 나오고 시간 복잡도가 잘 안되면 dp를 먼저 생각해보자
