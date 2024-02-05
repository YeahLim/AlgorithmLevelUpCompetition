# [백준] 평범한 배낭 (12865번)

## ⏰  **time**

1시간(초과)

## :pushpin: **Algorithm**

다이나믹 프로그래밍

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**
- 점화식
  ```
  // MAX (이전의 제일 큰 가치, 현재 무게의 가치 + 현재 무게를 제외한 남은 무게의 가치) 
  dp[i][j] = Math.max(dp[i-1][j], dp[i-1][j-weight] + value);
  ```

## :black_nib: **Review**
- 그 유명한 KNAPSACK 문제 이제야 풀었다! 알고리즘 지식이 늘어서 뿌듯하다!
