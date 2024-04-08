# [백준 - 실버 2 ] 점프 점프 (11060번)

https://www.acmicpc.net/problem/11060

## ⏰ **time**

20분

## :pushpin: **Algorithm**

dp

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

1. dp배열을 최대 크기인 1000보다 1많게 설정해 준다.
2. dp[0]을 0으로 초기화 해주고, arr[0]의 숫자범위 안에 있는 dp들은 1로 초기화 해준다.
3. 이제 원래 크기와 자신+1 값중 더 작은값을 갱신해 나간다.
