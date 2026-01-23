# [백준 - 실버 5] 폴리오미노 (1343번)

https://www.acmicpc.net/problem/1343

## ⏰ **time**

20분

## :pushpin: **Algorithm**

그리디

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

1. x[i] ~ i+3까지 XXXX라면, AAAA로, i+2까지 XX면 AA(if문 순서로 제어)
2. .부분 예외처리 해주고, while문으로 위 상황일시 그 다음 인덱스로 넘어가게 구현한다.
3. 그 외의 경우에는 못덮는 경우라서 -1로 n을 바꿔주고 break한다.

## :black_nib: **Review**

-
