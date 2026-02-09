# [백준] 개수 세기 (10807번)

## ⏰  **time**

15분

## :pushpin: **Algorithm**

구현

## ⏲️**Time Complexity**

$O(1)$

## :round_pushpin: **Logic**

- 정수의 개수값 N과 리스트(배열)안에 들어갈 값들 Nlist 그리고 찾으려고 하는 정수 v를 변수로 설정해준다.
- N과 v는 input(sys.stdin.readline())으로 값을 받아주고 Nlist는 list() 함수를 통해 map()으로 배열안에 split()으로 구분된 정수값들을 넣어 배열한다.
- 그리고 Nlist의 배열값에 v값과 같은 수가 몇개 있는지 count()로 찾은 후 출력한다.

## :black_nib: **Review**

* count() - python 리스트 내장 메소드, 매개변수로 입력된 값이 리스트 안에 몇개 있는지 세어 반환해준다.