# [백준 - 골드 5] 내려가기 (2096번)

https://www.acmicpc.net/problem/2096

## ⏰ **time**

1시간

## :pushpin: **Algorithm**

dp

## ⏲️**Time Complexity**

$O(N*3)$

## :round_pushpin: **Logic**

1. 문제자체는 쉬운데 메모리제한이 4메가라 주의할점이 여러가지 있다.
2. 입력을 한번에 모두 받으면 무조건 메모리초과가 나고, dp또한 길이 3짜리로 일차배열 두개만 만들어서 하나씩 입력받아가며 계산해야 한다.

## :black_nib: **Review**

- 입력을 무조건 한번에 다 받아야 한다는 편견을 없애준것 같다.
