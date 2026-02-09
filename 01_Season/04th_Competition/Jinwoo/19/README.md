# [백준] A+B - 8 (11022번)

## ⏰  **time**

3분

## :pushpin: **Algorithm**

수학
구현
사칙연산

## ⏲️**Time Complexity**

$O(1)$

## :round_pushpin: **Logic**

- 테스트케이스를 개수를 입력받을 변수 T를 지정한다. int(sys.stdin.readline())을 이용하여 정수를 입력받는다.
- for문을 통하여 초기값이 0인 i가 T까지 for문을 반복시킨다.
- sys.stdin.readline().split()를 이용하여 공백을 기준으로 구별하여 입력받고, map()함수로 입력받은 문자 2개를 정수로 변환하여 변수 a, b에 넣는다.
- 각 테스트 케이스마다의 문자열과 a값, b값, a + b한 값을 print()로 출력한다.

## :black_nib: **Review**

- 전번 문제에서 a값과 b값을 추가로 출력해주는 문제이다.