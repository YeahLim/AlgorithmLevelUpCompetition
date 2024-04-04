# [백준 - 실버 2 ] 대칭 차집합 (1269번)

https://www.acmicpc.net/problem/1269

## ⏰ **time**

10분

## :pushpin: **Algorithm**

자료구조

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

1. 각각의 차집합을 더해주는 거니 기본 cnt값을 양쪽의 총 개수로 정한다.
2. set를 이용해 반대쪽 배열에 있는지 확인하고, 있다면 cnt를 2씩 빼준다.
