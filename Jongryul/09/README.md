# [백준 - 골드 4] 가장 긴 증가하는 부분 수열 4 (14002번)

https://www.acmicpc.net/problem/14002

## ⏰ **time**

1시간

## :pushpin: **Algorithm**

dp

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**

1. 부분수열 로직에서 추가로 수열까지 출력해야 하는 문제다.
2. 처음에는 dp에 카운트된 수를 하나하나 늘려가며 출력했는데, 이 경우는 카운트가 같지만 수도 같은(증가하지 않는)경우가 겹치는 문제가 발생했다.
3. 나는 dp를 계산해가며 부모값도 따로따로 저장해줬다.
4. 부모값들을 배열에 넣고 reverse함수로 출력해준다.

## :black_nib: **Review**

- 다른사람들의 풀이를 보니 저렇게 복잡하게 할 필요없이 dp값이 갱신된다면 해당하는 값에 수열까지 함께 저장해주면 됐었다. 메모리는 조금 먹지만 좋은 방법 같다.