# [백준 - 골드 5] 옥상 정원 꾸미기(6198)

## ⏰  **time**

1시간 (시간초과)

## :pushpin: **Algorithm**

스택

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 풀이과정

스택을 이용해서 항상 감소하는 배열(모노스택)을 만든다. 그러면 가장 최근에 들어오는 빌딩을 이전 빌딩이 볼 수 있다. 그러므로 현재 스택의 크기 -1 만큼 볼 수 있다!

## :black_nib: **Review**
- 모노스택의 개념(감소/증가하는 배열)을 이용해 모노스택을 만드는 과정에서 어떤 것을 추출해낼 수 있는지 생각해보자.