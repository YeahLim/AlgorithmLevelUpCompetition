# [백준 - 골드 3] 움직이는 미로 탈출 (16954)
 
## ⏰  **time**

30분

## :pushpin: **Algorithm**

DFS

## ⏲️**Time Complexity**

$O(N^4)$

## :round_pushpin: **Logic**

1. 문제풀이

모든 벽은 1초마다 1칸씩 떨어진다.

이때 (미로의 길이)초가 지나면 모든 벽이 미로에서 없어진다.

그러므로 모든 벽이 없어진 (미로의 길이)초 이후에는 미로의 상태가 모두 동일하므로 같은 시간으로 간주한다.

나머지는 9방향 벡터에 맞게 사람을 움직여 맨 위로 올라갈 수 있는지 완전탐색을 하면 해결할 수 있다.

## :black_nib: **Review**
- 중복 방문을 막기 위해 조건이 어떤 것이 있는지 생각하자. 