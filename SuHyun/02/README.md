# [백준 - 골드 5] 마리오 파티 (14550)
 
## ⏰  **time**

40분

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N^3)$

## :round_pushpin: **Logic**

1. 문제풀이

점화식은 다음과 같다.

```
    최대 점수[시간][위치] = 현재 위치 코인 값 + 최대 점수[시간][이전 위치]
```

## :black_nib: **Review**
- DP문제는 점화식을 먼저 세우고 풀어야한다.