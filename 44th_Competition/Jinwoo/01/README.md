# [백준 - 실버 5] 수들의 합 (1789 번)

## ⏰  **time**

30 분

## :pushpin: **Algorithm**

- 수학
- 그리디 알고리즘

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 서로 다른 N개의 자연수의 합인 S를 입력 받고, 이때 자연수의 N의 최대값이 얼마인지 구해보는 문제이다.
- 이 경우 큰 수를 넣을수록 N이 작아진다.
- ex) S = 200, N = 101, 99 = 2개
- 따라서 작은 수부터 차례대로 대입해보는 방법을 활용하였다.
- 반복문을 통해 S를 temp로 빼주었고 다음 반복문에서 1을 증가 시켰다.
- 조건문을 걸어 뺀 S가 0보다 클 경우는 temp를 추가하여 다음 반복문에 S를 빼게 하였고
- 뺀 S가 0으로 떨어질 경우는 숫자가 딱 맞아 떨어지는 경우이다.
- 하지만 뺀 S가 0보다 작은 경우는 맞아 떨어지지 않은 경우이므로 이전 반복문에서 추가된 temp 값을 빼주어야 한다.
- 이러한 방법으로 풀이를 진행하여 N의 최대값을 구해볼 수 있었다.

## :black_nib: **Review**

- 그리디 알고리즘은 최적의 해를 구하는 데에 사용되는 근사적인 방법
- 여러 경우 중 하나를 결정해야 할 때마다 그 순간에 최적이라고 생각되는 것을 선택해 나가는 방식이다.
- 반복문에서 각 조건에 따라 자연수 N의 수를 추가할 것인지, 그리고 반복문을 끝낼 때 맞아 떨어지는지를 구분할 수 있게 하여 그리디 알고리즘이라 생각이 든다.