# [백준 - 골드 5] CCW(11758)

## ⏰  **time**

20분

## :pushpin: **Algorithm**

BFS

## ⏲️**Time Complexity**

$O(N*M)$

## :round_pushpin: **Logic**
1. 문제 풀이

목표점이 하나고 시작점이 많으므로 목표점을 반대로 시작점으로 잡아 나머지 기존 시작점을 목표점으로 하여 경로 탐색을 하면 된다.

이때 N*M의 최대 크기는 100,000이므로 BFS로도 충분히 가능하기 때문에 구현하기 쉬운 BFS를 이용해 문제를 해결하면 된다.

## :black_nib: **Review**
- BFS도 경로탐색 중 하나임을 명심하자