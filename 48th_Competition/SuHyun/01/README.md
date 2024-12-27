# [백준 - 골드 4] 미로탈출
 
## ⏰  **time**
30분

## :pushpin: **Algorithm**
BFS

## ⏲️**Time Complexity**
$O(N^2)$

## :round_pushpin: **Logic**
- N이 1000이기 때문에 N의 2승도 가능하므로 완전탐색(BFS)을 실행한다.
- 이때 상하좌우 뿐만 아니라 스태프의 상태도 저장해야 하므로 방문배열은 3개로 한다.
- 도착하지 못하면 -1을 출력하는 예외도 처리한다.
  
## :black_nib: **Review**
- boolean형 보다 int형 방문배열이 메모리를 아낄 수 있다.
