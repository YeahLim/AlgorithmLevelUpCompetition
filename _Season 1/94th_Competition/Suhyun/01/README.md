# [백준 - 골드 3] Watering the Fields

## ⏰  **time**
35분

## :pushpin: **Algorithm**
MST(크루스칼 알고리즘), DFS

## ⏲️**Time Complexity**
$O(N^2)$

## :round_pushpin: **Logic**
- N이 최대 2,000이므로 모든 노드간 경로를 만들어도 1억개보다 작아 제한시간 내로 해결할 수 있다.
- 모든 노드를 잇는 최소 비용을 구하는 문제이므로 모든 경로를 구한 뒤 크루스칼 알고리즘을 사용한다.
- 이때 경로의 비용이 최소 C는 되어야 하므로 C보다 작은건 continue한다.

## :black_nib: **Review**
- 엣지 중심은 크루스칼 알고리즘01