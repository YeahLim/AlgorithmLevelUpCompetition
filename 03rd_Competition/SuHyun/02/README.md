# [백준 - 실버 3] 도키도키 간식드리미

## ⏰  **time**
10분

## :pushpin: **Algorithm**
스택

## ⏲️**Time Complexity**
$O(N)$

## :round_pushpin: **Logic**
- 로직 흐름
  - 현재 학생이 자신의 차례면 간식 먹기
  - 대기 줄의 가장 마지막 사람이 자신의 차례가 아닐때 까지 간식 먹기
  - 현재 학생이 자신의 차례면 간식 먹기
  - 이래도 아니면 대기줄 가기
  - 이때 현재 순서가 학생 수 보다 많으면 모두 간식을 먹은 것으로 판정

## :black_nib: **Review**
-  map의 리턴형은 iterator이므로 list로 변환 필요