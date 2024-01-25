# [백준] 피보나치 함수 (1003번)

## ⏰  **time**
20분

## :pushpin: **Algorithm**
DP

## ⏲️**Time Complexity**
$O(N)$

## :round_pushpin: **Logic**
- 점화식
  ```
			dp[i][0] = dp[i-1][0] + dp[i-2][0];
			dp[i][1] = dp[i-1][1] + dp[i-2][1];
  ```

## :black_nib: **Review**
- 점화식은 빨리 구했는데, 틀렸다고 나와서 한참 찾았다.. 인덱스가 하나 잘못들어갔었다 ㅎㅎ 주의!!
