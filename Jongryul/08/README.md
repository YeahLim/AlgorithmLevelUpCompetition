# [백준 - 실버 3 ] 등수 매기기 (2012번)

https://www.acmicpc.net/problem/2012

## ⏰ **time**

30분

## :pushpin: **Algorithm**

그리디

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

1. 정렬 후, 예상등수와 매긴 등수를 절댓값으로 더해가면 된다.

## :black_nib: **Review**

- python에선 쉽게 풀었고 똑같은 로직인데 이상하게 nodejs에선 틀렸다. 이유를 찾아보니 sort가 js에서는 다르게 동작해서 추가적인 구문을 써줘야 했다.
