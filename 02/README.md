# [백준 - 골드 5] 2493. 탑
 
## ⏰  **time**

1시간

## :pushpin: **Algorithm**

스텍

## ⏲️**Time Complexity**

$O(NlogN)$

## :round_pushpin: **Logic**

1. 탑의 통신은 본인보다 크거나 같은 높이의 탑만 통신이 가능하다.
   따라서, 최대 높이의 가상의 탑을 하나 stack에 넣어두고
   - 본인보다 크거나 같은 탑이 나올때까지 pop()하면서 확인한다.
   - 만약 본인보다 크거나 같은 탑이 나오면 그 탑의 위치를 출력하고, 본인 탑을 push()한다.

## :black_nib: **Review**
- 
