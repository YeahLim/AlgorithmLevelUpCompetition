# [백준 - 골드 3] Dance Dance Revolution (2342)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N*25)$

## :round_pushpin: **Logic**
1. 점화식

시간에 따라 바뀌는 것은 왼발과 오른발이다. 그러므로 시간, 왼발, 오른발 3가지를 이용해 dp 배열을 만들어야 한다.

또한 현재 위치에서 다음 방향으로 오른발, 왼발 2가지의 선택지가 있다. 그러므로 점화식도 다음과 같이 2개의 점화식으로 표현된다.

```
    dp[현재 순서][왼발][현재 방향] = Math.min(dp[현재 순서][왼발][현재 방향],dp[이전 순서][왼발][오른발]+방향에 따른 비용) 
    dp[현재 순서][현재 방향]][오른발] = Math.min(dp[현재 순서][현재 방향][오른발],dp[이전 순서][왼발][오른발]+방향에 따른 비용) 
```

2. 상세 문제 해설 링크

https://khnemu.tistory.com/20

## :black_nib: **Review**
- 모든 조건을 찾아서 dp 배열을 만들다.
- top-bottom 보다 bottom-top이 시간 효율이 압도적으로 좋다.