# [백준 - 실버 4] 별 찍기 - 19  (10994 번)

## ⏰  **time**

40분

## :pushpin: **Algorithm**

- 구현
- 재귀

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 반복문 대신 재귀함수의 구조를 통해 별찍기 문제를 풀어보았다.
- 재귀함수를 실행할 때 출력하는 부분을 사각형의 윗부분을 출력하게 하였고
- 조건이 도달했을때 사각형의 중앙줄을 출력한 후 재귀함수 반복을 멈춘다.
- 그리고 함수를 나올대 출력하는 부분을 사각형 아랫부분을 출력하도록 풀이를 진행하였다.

## :black_nib: **Review**

- for문을 활용하여 반복문으로 풀이하면 쉽게 풀이할 수 있었지만
- 재귀함수를 통해 이번 문제의 별찍기 구조를 파악할 수 있었다.