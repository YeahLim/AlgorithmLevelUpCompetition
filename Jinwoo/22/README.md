# [백준] A+B -5 (10925번)

## ⏰  **time**

5분

## :pushpin: **Algorithm**

수학
구현
사칙연산

## ⏲️**Time Complexity**

$O(1)$

## :round_pushpin: **Logic**

- a와 b의 값을 계속 반복해서 찍어낼 반복문 while을 항상 참으로 만들어 반복한다.
- 반복문 안에서 a, b를 stdin으로 입력받고 split()과 map()함수를 이용해 a, b에 정수를 입력받는다.
- if조건문을 만들어 a와 b가 0일때 반복문이 깨지도록 break함수를 걸어준다.
- 조건문이 아닌 상황에서는 a+b를 print()로 출력하여 a와 b가 0일때까지 while문을 계속 반복한다

## :black_nib: **Review**

- 이번 문제풀이는 a와 b가 0일때 반복문이 깨져야함으로 참, 거짓 기준 반복되는 while문을 사용하였고 break함수를 통해 a와 b가 0일때 반복문이 깨지도록 풀이하였다.