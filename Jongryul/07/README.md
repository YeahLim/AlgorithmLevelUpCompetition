# [백준 - 실버 1 ] 카드 구매하기 (16194번)

https://www.acmicpc.net/problem/16194

## ⏰ **time**

30분

## :pushpin: **Algorithm**

dp

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**

1. 2차반복을 돌면서 dp의 i번째 값과 i-j번째 값 + j번째 값 중 작은값을 갱신해준다.

## :black_nib: **Review**

- 쉬운 문제인데 두번째 반복문에서 j의 최대값을 i로 안주고 n+1로 줬어서 계속 틀렸다..오류 찾아내는데 오래걸렸다.
