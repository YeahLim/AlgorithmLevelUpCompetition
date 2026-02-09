# [백준 - 골드 3] 세부

## ⏰  **time**
20분

## :pushpin: **Algorithm**
MST(프림 알고리즘)

## ⏲️**Time Complexity**
$O(N^2)$

## :round_pushpin: **Logic**
- 노드 중심으로 최단거리를 구하면서 그중 가중치가 가장 큰걸 구해야하므로 프림 알고리즘을 사용한다.
- 이때 도달하지 못하는 경우도 있으므로 예외처리를 한다.

## :black_nib: **Review**
- 노드 중심은 프림 알고리즘