# [백준 - 골드 4] Bad Cowtractors

## ⏰  **time**
20분

## :pushpin: **Algorithm**
MST(크루스칼 알고리즘)

## ⏲️**Time Complexity**
$O(N^2)$

## :round_pushpin: **Logic**
- 경로 중심으로 최단거리의 합을 구해야 하므로 크루스칼 알고리즘을 사용해야한다.
- 이때 가장 큰 비용의 합을 구해야 한다.
- 모두 연결되어있는지 확인하면 모든 부모의 값이 같은지 확인하면 된다.

## :black_nib: **Review**
- 엣지 중심은 크루스칼 알고리즘
- 최소신장트리는 사이클이 발생하지 않는다