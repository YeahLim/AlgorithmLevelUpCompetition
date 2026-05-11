# [프로그래머스 - level 2] 다음 큰 숫자

## ⏰  **time**
10분

## :pushpin: **Algorithm**
구현

## ⏲️**Time Complexity**
$O(N)$

## :round_pushpin: **Logic**
- 다음 숫자부터 bin 함수를 사용해 이진수로 만든다
  - 1의 개수만 세기 때문에 앞에 0b는 무시해도 된다
- 1의 개수를 for문으로 세어서 입력값의 이진수 1개의 개수와 비교하면서 같은걸 탐색한다

## :black_nib: **Review**
- bin 함수로 이진수를 만들 수 있다