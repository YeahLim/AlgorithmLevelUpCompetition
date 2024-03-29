# [백준 - 골드 3] 개미굴 (14725)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

트라이

## ⏲️**Time Complexity**

$O(N*K)$

## :round_pushpin: **Logic**
1. 풀이과정

층별로 똑같은 데이터는 1개씩만 가질 수 있는 자료구조는 트라이를 응용하면 쉽게 풀 수 있다.

한 층별로 먹이의 종류는 하나이므로 중복을 제거하기 위해 Set이나 Map을 써야한다.
이때 해당 먹이로 다음 동굴도 찾아야 하므로 [먹이 : 동굴]의 관계를 가지고 있다.
=> Map 이용


2. 상세 풀이과정
https://khnemu.tistory.com/21

## :black_nib: **Review**
- 문자열을 반복할 때 String.repeat를 사용하자
- 층별 중복없는 데이터를 표현할 때는 트라이가 좋다. 