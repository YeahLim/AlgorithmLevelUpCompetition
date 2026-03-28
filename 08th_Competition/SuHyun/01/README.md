# [백준 - 실버 3] 수리공 항승

## ⏰  **time**
20분

## :pushpin: **Algorithm**
그리디

## ⏲️**Time Complexity**
$O(NlogN)$

## :round_pushpin: **Logic**
- 테이프를 연달아 붙이는걸 구현해야 하므로 일단 순서대로 정렬
- 시작위치부터 현재위치까지 테이프를 붙였을 때 가능하면 그대로 다음으로
  - 가능하지 않다면 테이프 개수 추가
- 마지막 남은 테이프 추가

## :black_nib: **Review**
- 최소 -> 그리디 or dp