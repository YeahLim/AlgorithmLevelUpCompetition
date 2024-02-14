# [백준 - 골드 5] A와 B (12904)

## ⏰  **time**

40분

## :pushpin: **Algorithm**

그리디

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 문제 풀이
top-bottom형식으로 해결하려고 하면 2^n의 시간복잡도가 걸려서 시간내로 해결이 불가능하다.

그러므로 "시작 문자열이 무조건 가능하다"로 생각해 bottom-top으로 생각해 주어진 조건대로 역순으로 진행하면 O(N)으로 실행이 가능하다.

왜냐하면 top-bottom으로 진행할 경우 뒤에 A를 붙이는 경우, B를 붙이는 경우로 새로운 경우의 수가 생성되지만 bottom-top으로 진행하면 이미 뒤에 A와 B는 확정되어 있기 때문에 제거만 하면 되서 경우의 수는 무조건 1개가 나온다.

## :black_nib: **Review**
- top-bottom말고 bottom-top도 생각해보자.