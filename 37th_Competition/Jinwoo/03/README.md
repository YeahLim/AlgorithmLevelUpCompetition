# [백준 - 실버 4] 듣보잡 (1764 번)

## ⏰  **time**

20분

## :pushpin: **Algorithm**

- 트리
- 재귀

## ⏲️**Time Complexity**

$O(N + M + K log K)$

## :round_pushpin: **Logic**

- 두개의 명단이 주어졌을 때, 듣도 못한 사람과 보도 못한 사람 명단에서 겹치는 사람(듣보잡)을 찾아 출력하는 문제이다.
- 즉, 두 집합에서 공통으로 존재하는 이름을 찾는 문제이다.
- 집합간의 교집합을 구하는 문제에서는 set()을 활용하여 자료구조 중복을 허용하지 않고 교집합을 구할 수 있다.

## :black_nib: **Review**

- 단순히 두 리스트를 비교를 하게 되면 N, M의 최대가 500,000 이므로 시간 초과가 발생하게 된다.
- 따라서 set()을 활용하여 각 이름ㅇ르 집합에 저장한 후 교집합을 구하는 과정이 시간 복잡도가 발생하지 않고 효율적으로 문제 풀이를 진행할 수 있었다.