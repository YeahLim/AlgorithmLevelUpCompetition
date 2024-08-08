# [백준 - 골드 4] 파이프 옮기기 2 (17069)
 
## ⏰  **time**

30분

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**

1. 문제풀이

점화식은 다음과 같다.

```
    dp[가로로 움직인 경우][행][열] = dp[가로로 움직인 경우][행][열-1] + dp[대각으로 움직인 경우][행-1][열-1]
    dp[세로로 움직인 경우][행][열] = dp[세로로 움직인 경우][행-1][열] + dp[대각으로 움직인 경우][행-1][열-1]
    dp[대각으로 움직인 경우][행][열] = dp[가로로 움직인 경우][행-1][열-1] + dp[세로로 움직인 경우][행-1][열] + dp[대각으로 움직인 경우][행-1][열-1]
```

이때 경우의 수는 int 범위를 넘으므로 long형으로 해야한다.

또한 첫번째 줄을 초기화할 때 벽이 있는경우도 고려해야한다.

## :black_nib: **Review**
- 각 경우의 수별로 결과를 위한 경우의 수가 어떤 것인지 생각하자 
- int 범위가 넘는지 확인하자