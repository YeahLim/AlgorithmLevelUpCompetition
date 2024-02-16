# [백준] A+B - 7 (11021번)

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
- 각 테스트 케이스마다의 문자열과 a + b한 값을 print()로 출력한다.

## :black_nib: **Review**

- 기존 input()함수를 이용할때와 다르게 map()과 stdin.readline()을 통해 반복적인 입력에서 좀 더 효율적인 코딩이 가능해졌다.