# [백준 - 골드 5] Heat Wave (5966)
 
## ⏰  **time**

10분

## :pushpin: **Algorithm**

다익스트라

## ⏲️**Time Complexity**

$O(NlogN)$

## :round_pushpin: **Logic**

1. 문제풀이

Ts부터 Te까지의 최단거리를 구하면 되는 문제이다.

그러므로 다익스트라를 이용해 Ts부터 모든 노드간의 최단거리를 구하고 Te까지의 최단거리를 출력하면 된다.

## :black_nib: **Review**
- 양방향인지 단방향인지 확인하며 그래프를 만들자