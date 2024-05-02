# [백준 - 골드 4] 전생했더니 슬라임 연구자였던 건에 대하여 (Hard) (14698)
 
## ⏰  **time**

20분

## :pushpin: **Algorithm**

그리디

## ⏲️**Time Complexity**

$O(NlogN)$

## :round_pushpin: **Logic**
1. 문제풀이

가장 작은 곱셈의 합을 구하기 위해선 가장 작은 숫자를 우선적으로 곱하면 된다.

이때 정렬을 위해 우선순위 큐를 만들고 나머지 분배법칙에 의하여 주어진 값을 나누어 총합을 구하자

## :black_nib: **Review**
- (a*b)% mod == ( a%mod * b%mod ) % mod