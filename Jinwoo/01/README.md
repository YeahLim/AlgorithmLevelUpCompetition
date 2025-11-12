# [백준 - 실버 5] BABBA (9625 번)

## ⏰  **time**

10분

## :pushpin: **Algorithm**

- DP

## ⏲️**Time Complexity**

$O(K)$

## :round_pushpin: **Logic**

- n장의 카드 중에서 k장을 뽑아 서로 다른 순서로 이어 붙였을 때 나올 수 있는 모든 정수의 개수를 세는 문제
- itertools.permutations를 사용하면 k개를 뽑는 모든 순서 있는 조합을 얻어냈다
- 집합에 저장 후 중복을 제거하여 집합의 크기를 출력하였다.

## :black_nib: **Review**

