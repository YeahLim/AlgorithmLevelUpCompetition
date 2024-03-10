# [백준 - 골드 5] 합분해 (2225번)

https://www.acmicpc.net/problem/2225

## ⏰ **time**

2시간

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**

1. 직접 0 ~ n이 1 ~ k 개일때의 경우의 수를 적어보면 바로 전k의 개수 n이 0에서 현재 n까지 수를 더한것을 알 수 있다.
2. dp 배열은 dp[1][0] (k가 1개일때 n = 0일때의 경우의 수)만 1로 바꿔주고 계산한다.

## :black_nib: **Review**

- dp는 자신감 붙다가도 없어진다....
