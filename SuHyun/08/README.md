# [백준 - 골드 5] 회문 (17609)

## ⏰  **time**

1시간(시간초과)

## :pushpin: **Algorithm**

문자열

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 문제풀이

문자열을 뒤집기 위해 StringBuidler의 reverse를 이용해 회문을 판단한다.

유사회문을 판단하기 위해 서로 다른 문자가 있다면 해당 문자를 지우고 회문을 판단한다.

## :black_nib: **Review**
- 회문 = StringBuilder