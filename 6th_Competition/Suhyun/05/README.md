# [백준 - 골드 5] 입국심사 (3079)

## ⏰  **time**

40분 (시간초과)

## :pushpin: **Algorithm**

이분탐색

## ⏲️**Time Complexity**

$O(logM)$

## :round_pushpin: **Logic**
1. 문제 풀이

1초 ~ 최대초 까지 일렬로 늘여 놓고 해당 시간에 M명을 모두 심사할 수 있는지 선형탐색을 하면된다.

이때 N은 최대 10억이므로 선형탐색을 진행하면 시간초과가 나기 때문에 이분탐색으로 시간 복잡도를 줄인다.

## :black_nib: **Review**
- 1억이 넘으면 이분탐색을 고민해보자
- 가능한 시간을 모두 늘여놓고 해당 시간이 되는지 판단하는 로직은 문제를 선형으로 바꾼 것이기 대문에 좋은 아이디어인 것 같다