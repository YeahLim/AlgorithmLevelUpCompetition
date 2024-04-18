# [백준 - 골드 5] 공주님을 구해라! (17836)
 
## ⏰  **time**

13분

## :pushpin: **Algorithm**

BFS

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**
1. 문제풀이

단순 상하좌우 4방향 BFS에서 그람을 가지고 있는 상태인지 아닌지 포함해야 하므로 방문 배열은 다음과 같다

booelan[그람을 가지고 있는지 여부][행][열] visited = new boolean[2][N][M]

## :black_nib: **Review**
- 모든 조건을 방문배열화 하자