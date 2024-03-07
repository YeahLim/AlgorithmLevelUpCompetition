# [백준 - 골드 4] 타일 채우기 (2133번)

https://www.acmicpc.net/problem/2133

## ⏰ **time**

1시간

## :pushpin: **Algorithm**

dp

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

1. 타일을 만들수 있는 규칙을 살펴보면, 첫번째로 n이 홀수인 경우는 모두 만들수 없다.
2. n == 0인 경우는 아무것도 넣지 않으면 한 경우로 칠 수 있다.
3. 규칙을 보면 짝수일 경우에 dp[i - 2] \* 4 - dp[i-4]인것을 확인할 수 있다.

## :black_nib: **Review**

- 직접그리다 힘들어서 테스트 케이스만 던져준걸 좀 봤다..이런 문제 직접 안그리고도 풀수있는지 궁금하다.
