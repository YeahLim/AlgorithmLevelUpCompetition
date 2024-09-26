# [백준 - 골드 5] A와 B (12904)
 
## ⏰  **time**
30분

## :pushpin: **Algorithm**
문자열, 그리디

## ⏲️**Time Complexity**
$O(N)$

## :round_pushpin: **Logic**
- 목표 문자열 -> 시작 문자열로 변환할 경우 마지막 문자만 제거해주면 됨.
- 시작 문자열 -> 목표 문자열로 변환할 경우, dfs 방식을 사용해야함. 시간초과남.

## :black_nib: **Review**
- 시작 -> 목표가 아닌 목표 -> 시작이 효율적일 때가 있다.