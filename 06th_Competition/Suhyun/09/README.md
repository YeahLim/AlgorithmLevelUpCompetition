# [백준 - 골드 3] 마법사 상어와 파이어스톰 (20058)

## ⏰  **time**

40분

## :pushpin: **Algorithm**

구현

## ⏲️**Time Complexity**

$O(N^3)$

## :round_pushpin: **Logic**
1. 문제 풀이

배열을 돌려야 하는 영역을 지정해줘야 하는데 좌표계산이 복잡하다면 일단 해당 영역의 배열을 새로 만들고 시계방향으로 돌린 후 다시 기존 배열에 값을 복사하면 된다.

전체 얼음 개수는 전체 배열의 값을 탐색하면 된다.

영역의 최대 크기는 bfs로 영역을 탐색한 후 가장 큰것을 출력하면 된다.

## :black_nib: **Review**
- 시계방향 돌리기는 반시계 방향 돌리기의 x,y값을 반대로 한 것이다.