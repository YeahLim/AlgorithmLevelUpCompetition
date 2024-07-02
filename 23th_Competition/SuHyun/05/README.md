# [백준 - 실버 1] 회전 초밥 (2531)
 
## ⏰  **time**

21분

## :pushpin: **Algorithm**

슬라이딩 윈도우

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

1. 문제풀이

일정한 크기의 정해진 영역에 초밥이 몇 종류가 있는 지 판단하면 되는 문제이다.

앞뒤가 연결된 모습이므로 배열을 2배로 늘려 표현한다.

이 때 해당 영역에 쿠폰 초밥이 없으면 추가로 계산해야 되는 점을 유의하자.

## :black_nib: **Review**
- 원 모양의 연속된 모습이면 2*N의 배열을 만들어 N길이만큼 탐색하면 된다.
- 종류를 판단할 땐 Map을 이용하면 탐색 시간을 빠르게 줄일 수 있다.