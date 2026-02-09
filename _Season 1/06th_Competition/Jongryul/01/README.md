# [백준 - 실버 5] 거스름돈 (14916번)

## ⏰ **time**

30분

## :pushpin: **Algorithm**

dp

## ⏲️**Time Complexity**

$O(n)$

## :round_pushpin: **Logic**

1. dp배열 만들어 준다.
2. 2, 5원만 있을땐 결국 i-x에서 2원짜리 하나나 5원짜리 하나를 더해주는 거기 때문에, dp[i-2] + 1과 dp[i-5] + 1중 작은값을 골라주면 된다.

## :black_nib: **Review**

- 이런유형의 dp는 아직 못풀어봐서 어려웠는데 이해하니 재밌었다.
