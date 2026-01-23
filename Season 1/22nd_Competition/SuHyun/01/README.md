# [백준 - 골드 5] 백도어 (17396)
 
## ⏰  **time**

20분

## :pushpin: **Algorithm**

다익스트라

## ⏲️**Time Complexity**

$O(NlogN)$

## :round_pushpin: **Logic**

1. 문제풀이

0부터 N-1까지의 최단거리를 구하면 되므로 다익스트라를 이용하면 쉽게 풀 수 있다.

이때 N-1번이 아닌이상 시야가 보이면 움직일 수 없으므로 해당 분기점은 제외한다.

## :black_nib: **Review**
- 노드간 최단거리 = 다익스트라