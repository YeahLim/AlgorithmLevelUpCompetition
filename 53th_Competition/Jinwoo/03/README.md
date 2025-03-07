# [백준 - 실버 3] 이친수 (2193 번)

## ⏰  **time**

20분

## :pushpin: **Algorithm**

- 다이나믹 프로그래밍

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 다음 조건에 충족하는 이친수를 구하는 문제

### 조건
- 이친수는 0으로 시작하지 않는다. 
- 이친수에서는 1이 두 번 연속으로 나타나지 않는다. 즉, 11을 부분 문자열로 갖지 않는다.

### 점화식 세워보기
```commandline
dp[i] = dp[i-2] + dp[i-1]
```
- 이전 숫자가 0 일 경우 경우가 2씩 늘어난다.
- 이 문제도 어느정도 반복해보면 점화식을 세울 수 있었다.

## :black_nib: **Review**

- dp[2]까지 1로 값을 선언해주었는데 N이 1부터여서 런타임 에러가 났다.
- 풀이 전 입력 조건을 잘 살펴보자.