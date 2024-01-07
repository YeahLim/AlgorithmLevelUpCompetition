# [프로그래머스] 거스름돈

## ⏰  **time**

1시간

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**
1. dp 초기화
  ```
  // dp 초기화 : 0원일 때
  if (j == 0) {
      dp[i][j] = 1;
  }
  ```

2. 점화식
  ```
    dp[i][j] = (dp[i-1][j] + dp[i][j - money[i-1]])
  ```
- 단, `dp[i][j - money[i-1]]`의 인덱스 범위안에 없는 경우 `0`으로 치환한다
   

## :black_nib: **Review**
- `money`의 0번째 인덱스는 단순 i-1일때 인덱스에러 방지용이었다. 실제로 1부터 money 종류와 대응하는 것이었는데 헷갈렸다. 인덱스 주의해야겠다!!!! 
- 처음 풀어보는 유형의 DP였다. 냅색 유형의 유명한 문제라고 한다. 관련 문제 더 풀어야겠다.
