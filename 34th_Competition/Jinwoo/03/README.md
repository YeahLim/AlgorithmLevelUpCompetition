# [백준 - 실버 4] 보물 (1026 번)

## ⏰  **time**

15분

## :pushpin: **Algorithm**

- 수학
- 그리디 알고리즘
- 정렬

## ⏲️**Time Complexity**

$O(N logN)$

## :round_pushpin: **Logic**

- 이 문제는 두 배열 A와 B가 주어졌을 때, A를 재배열하여 주어진 함수 S의 값을 최소화하는 문제이다. 
- 함수 S는 각 배열의 대응하는 원소끼리의 곱을 더한 값입니다.
- 식으로 풀이하면 아래와 같다.
```commandline
S = A[0] × B[0] + A[1] × B[1] + ... + A[N-1] × B[N-1]
```
- 배열 A는 재배열 가능하지만, 배열 B는 재배열할 수 없다. 그래서 B의 큰 값에 A의 작은 값을 곱해야 전체 곱의 합이 최소화가 된다.
- 따라서 배열 A는 오름차순으로 정렬하여 작은 값부터 큰 값까지 사용할 수 있게 하였고,
- 배열 B는 내림차순으로 정렬하여 큰 값부터 작은 값까지 사용할 수 있게 하여 각각 대응되는 값을 곱한 값끼리 더해주어 풀이를 작성하였다.

## :black_nib: **Review**

- 그리디 알고리즘의 전형적인 문제로, 각 단계에서 최적의 선택을 함으로써 전체 합을 최소화하는 방식으로 문제를 풀이하였다.
- 정렬을 통해 배열 A와 B의 대응 관계를 최적화하여 문제를 간단하게 해결할 수 있었다.