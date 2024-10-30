# [백준 - 골드 5] 캠프 준비 (16938)
 
## ⏰  **time**
30분

## :pushpin: **Algorithm**
구현

## ⏲️**Time Complexity**
$O(2^N)$

## :round_pushpin: **Logic**\

N이 15이하이므로 완전탐색을 사용하여 조합을 만들어 구하면 된다. 이때 고르는 횟수는 2개 이상이어야 하므로 예외처리를 한다.

## :black_nib: **Review**
- 2^N 의 시간복잡도인 경우 15이하면 완전탐색이 가능하다.