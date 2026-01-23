# [백준] 합 (8393번)

## ⏰  **time**

2분

## :pushpin: **Algorithm**

구현

## ⏲️**Time Complexity**

$O(1)$

## :round_pushpin: **Logic**

- 1부터 n까지의 합을 구할때의 n 변수에 int(input())함수를 통해 정수를 입력받습니다.
- 1부터 n까지의 합을 총합하는 Plus 변수를 만들어 0을 집어넣습니다.
- 그리고 for문을 통해 Plus에 초기값 i + 1값을 i가 n이 될때까지 반복해줍니다.
- 반복문이 끝나면 Plus를 print()를 통하여 출력하여 줍니다.

## :black_nib: **Review**

- 이 문제풀이에선 for문의 초기값 i가 0부터 시작하므로 1부터 n까지의 합을 총합하는 Plus 변수에 i + 1를 더하여 반복하였다.
- 파이썬도 for문의 초기값 설정을 C언어에서처럼 설정을 따로 하는 방법을 생각해봐야겠다.