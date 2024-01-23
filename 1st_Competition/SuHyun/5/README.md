# [프로그래머스] 징검다리 건너기

## ⏰  **time**

1시간(타임오버)

## :pushpin: **Algorithm**

슬라이딩 윈도우, 우선순위 큐

## ⏲️**Time Complexity**

$O(NlogN)$

## :round_pushpin: **Logic**
1. 문제 접근
   
 최대 K개 미만까지 건널 수 있다는 뜻은 **K개 범위안에서 1개라도 남아있으면 건널 수 있다**는 뜻이다.
 그러므로 모든 **K 범위의 최대값**을 구하면 범위 별 사람이 건널 수 잇는 최대 인원수가 나온다.
 하지만 어느 하나의 범위라도 건너지 못하면 모든 징검다리는 건널 수 없다.
 그러므로 **모든 범위의 최소값**이 모든 징검다리를 건널 수 있는 최소값이다.

## :black_nib: **Review**
- 범위가 나오면 '범위 일부분만 해볼까?' 라는 생각을 가져보자