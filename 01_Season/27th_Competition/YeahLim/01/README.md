# [백준 - 골드 4] 오큰수 (17298)
 
## ⏰  **time**
1시간

## :pushpin: **Algorithm**
스택

## ⏲️**Time Complexity**
$O(N)$

## :round_pushpin: **Logic**
- peek값보다 현재 값이 큰 경우, answer를 업데이트해준다. 
- 다만 이때 순서를 알수있도록, 스택에는 value값이 아닌 index값을 넣어준다. 

## :black_nib: **Review**
- 스택 문제에선 타겟값을 따로 설정하기보다 peek값과 index값을 중점으로 보자.