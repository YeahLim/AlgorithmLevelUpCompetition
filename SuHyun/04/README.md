# [백준 - 골드 4] 소수 경로(1963)

## ⏰  **time**

20분

## :pushpin: **Algorithm**

에라토스테네스의 체, BFS

## ⏲️**Time Complexity**

$O(N*10*4)$

## :round_pushpin: **Logic**
1. 풀이과정

모든 소수를 에라토스테네스의 체로 구한다.

이후 각 자리수에 0~10을 넣어서 4자리수를 만든 후 소수를 판정해 다음 소수로 탐색하는 방법을 반복하여 목표 소수를 찾는다.

## :black_nib: **Review**