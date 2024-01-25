# [백준 - 골드4] 불!

## ⏰  **time**

54분

## :pushpin: **Algorithm**

BFS

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**
1. 풀이방법
    - 지훈이의 위치가 가장자리면 탈출이 가능하다
    - 이때 불이 동시에 지훈이와 움직이므로 불을 먼저 움직여 지훈이가 갈 수 있는 곳을 한정적으로 만들어야한다.
    - 만약 지훈이가 더이상 갈 곳이 없으면 IMPOSSIBLE을 출력한다.


## :black_nib: **Review**
- 동시에 BFS를 시작해야 한다면 제한 조건(안되는 것) 부터 실행하자
