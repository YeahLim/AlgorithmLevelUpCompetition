# [백준 - 실버 2] 스택 수열 (1874 번)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

- 자료 구조 
- 스택

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 스택에는 1부터 n까지의 수를 오름차순으로만 push 가능 
- 목표 수열을 앞에서부터 하나씩 확인하며 처리 
- 현재 보고 있는 값 num에 대해 num이 나올 때까지 current 값을 스택에 push 
- 스택의 top이 num이면 pop 
- top이 num이 아니면 → 해당 수열은 생성 불가능 
- 모든 수를 정상적으로 처리하면 push(+), pop(-) 기록을 출력

## :black_nib: **Review**

- 