# [백준 - 골드 5] A와 B 2
 
## ⏰  **time**
20분

## :pushpin: **Algorithm**
문자열

## ⏲️**Time Complexity**
$O(N)$

## :round_pushpin: **Logic**
- T에서부터 규칙에 따라 S로 만드는 것을 반복한다면 단순하게 계산했을 시 시간 복잡도는 2^N이다.
- 하지만 매번 앞자리가 B이면서 뒷자리가 A일수는 없으므로 2^N보다 작다.
- 완전탐색을 돌려보자

## :black_nib: **Review**
- N이 작으면 일단 구현으로 풀어보자
