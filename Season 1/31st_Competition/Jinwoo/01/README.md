# [백준 - 실버 5] 분수 찾기 (1193 번)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

- 수학
- 구현

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 몇번째 줄에 몇번째 위치의 분수가 무엇인지 알아내면 된다.

`while num > line:
    num -= line
    line += 1`

- 위의 해당 loop를 사용해 몇번째 줄이고 몇번째 위치인지 알아 낼 수 있다.
- 만약, 5번째 인덱스 값을 찾는다면

`num line
5 1
4 2
2 3 `

이 되면서 루프문이 종료될 것 이다.

## :black_nib: **Review**

- 해당 문제의 순서를 분석하는데에 오래 걸렸다.