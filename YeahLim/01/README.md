# [백준 - 골드 5] 토마토 (7569)
 
## ⏰  **time**
50분

## :pushpin: **Algorithm**
BFS

## ⏲️**Time Complexity**

$O(N^3)$

## :round_pushpin: **Logic**
- 일반적으로 bfs 구현할때는 q가 비워질때까지 돌리지만
- 한 단계씩 익은 토마토만큼만 for문돌리고, day+1
  - 위를 계속 반복해서 day를 구했다.

## :black_nib: **Review**
- web ide에서 못하겠다...
- 3차원으로 bfs돌리는 건 첨이라..! 방향백터에서 3차원에서 대각선 방향까지 다 고려해버렸다. 주의주의
