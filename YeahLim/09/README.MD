# [프로그래머스 - 레벨 3] 아이템 줍기
 
## ⏰  **time**
답안 참고

## :pushpin: **Algorithm**
BFS

## ⏲️**Time Complexity**
$O(N^2)$

## :round_pushpin: **Logic**
- 크기를 2배로 늘려줌
    - 경로가 붙어있는 경우 방지하기 위해서

## :black_nib: **Review**
- 사각형 전부 칠해주고 한번에 내부 없애야됨. 
- 하나씩 칠하고 내부 없앨 경우, 내부에도 루트가 생길 수 있음
- 정답도 나누기 2~