# [백준] 감시 (15683)

## ⏰  **time**
시간초과

## :pushpin: **Algorithm**

시뮬레이션

## ⏲️**Time Complexity**

$O(4^N)$
`4방향 중 하나를 골라 모든 CCTV 조합`

## :round_pushpin: **Logic**
1. type에 따라 cctv 감시 영역을 구한다
    - 이때 4방향의 모든 경우를 구한다
2. depth가 cctv의 개수일 경우, 사각지대의 영역을 구한다

## :black_nib: **Review**
- 2차원 배열 clone할 때, 2차원 배열을 자체로 `map.clone()`해버리는 실수해서, 디버깅 오래해버렸다. 
    - 2차원 배열 clone시 `map[i].clone()`!!!!
