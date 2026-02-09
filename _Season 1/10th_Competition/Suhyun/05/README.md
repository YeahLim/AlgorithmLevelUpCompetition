# [백준 - 실버 4] 빙고 (2578)

## ⏰  **time**

20분

## :pushpin: **Algorithm**

BFS

## ⏲️**Time Complexity**

$O(N^3)$

## :round_pushpin: **Logic**
1. 문제풀이

빙고 배열과 방문 배열을 만들어 방문배열이 최신화 될 때마다 가로, 세로, 대각선 2개의 빙고 개수를 BFS로 구해 빙고 개수가 3이상인 경우에 바로 해당 횟수를 리턴한다.

## :black_nib: **Review**
- 대각선을 처리할때 오른 대각은 i, N-i임을 생각하자
