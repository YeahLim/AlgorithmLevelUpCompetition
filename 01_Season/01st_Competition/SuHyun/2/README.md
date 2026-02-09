# [프로그래머스] 보행자 천국(2017 카카오코드 예선)

## ⏰  **time**

52분

## :pushpin: **Algorithm**

DP, BFS

## ⏲️**Time Complexity**

$O(N*M)$

## :round_pushpin: **Logic**
1. 점화식
  ```
    dp[자동차의 방향][행][열] = dp[현재 자동차의 방향][현재 행][현재 열] + dp[다음 자동차의 방향][다음 행][다음 열] 
  ```
  이때 한번 방문한 좌표는 다시 방문하지 않도록 BFS를 실행한다.

## :black_nib: **Review**
- Modular 연산이 있으면 모든 수식에 Modular 연산을 제대로 실행했는지 확인해야 한다.
