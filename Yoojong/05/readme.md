# [백준 - 골드 4] 최단 경로 (1753)
 
## ⏰  **time**

3시간

## :pushpin: **Algorithm**

dijkstra

## ⏲️**Time Complexity**

$O(V*E)$

## :round_pushpin: **Logic**
1. 문제풀이
heapq를 통해 최단 거리인 것들을 우선순위로 pop하여 최신화한다.

## :black_nib: **Review**
- 최단 경로니까 당연히 bfs 인줄 알고 풀었는데 메모리 초과가 나왔다. 다익스트라인 인접리스트를 활용하여 메모리 초과를 없앴다.
