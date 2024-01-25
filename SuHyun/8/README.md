# [백준 - 실버1] 점프

## ⏰  **time**

40분

## :pushpin: **Algorithm**

트라이

## ⏲️**Time Complexity**

$O(N*10)$

## :round_pushpin: **Logic**
1. 풀이방법
    - 공통된 접두사가 있냐 -> 트라이
    - 트라이 탐색중 중간에 끝나는 문자가 있는데 아직 탐색할 문자가 더 남았다면 접두사로 있는 경우이므로 NO를 출력

## :black_nib: **Review**
- 접두사는 startsWith를 이용하면 N^2로 쉽게 해결할 수 있다.