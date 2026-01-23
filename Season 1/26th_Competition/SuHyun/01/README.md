# [백준 - 골드 5] 무한 수열 (1351)
 
## ⏰  **time**

20분

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(logN)$

## :round_pushpin: **Logic**

1. 문제풀이

점화식은 다음과 같다.

Ai = Ai/P + Ai/Q

그러므로 값이 없는 경우 새로운 Ai을 찾고 값이 있으면 그대로 값을 넣어 AN을 구하면 된다.

## :black_nib: **Review**
- 입력값이 long인지 int인지 잘 확인하자
- DP 배열의 크기가 감이오지 않는다면 Map을 이용해서 만들자