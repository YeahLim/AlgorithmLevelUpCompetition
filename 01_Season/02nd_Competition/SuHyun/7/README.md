# [백준 - 실버1] 점프

## ⏰  **time**

1시간

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N^3)$

## :round_pushpin: **Logic**
1. 풀이방법
   - N,N번째로 갈 수 있는 경우의 수는 위의 있는 칸과 왼쪽에 있는 칸에서 이동할때 가능한 칸의 경우의 수와 같다.
   - N,N번째에서 가능한 왼쪽,위쪽 칸을 찾아서 bottom-top형식으로 해결할 수 있다.
   
```java
   dp[i][j] 
        = dp[i-1+board[i-1][j]] 
            + dp[i-2+board[i-2][j]]
            + ...
            + dp[0+board[0]][j]
            + dp[i][j-1 + board[i][j-1]]
            + dp[i][j-2 + board[i][j-2]]
            + ...
            + dp[i][0 + board[i][0]] (이때 board[][]+이전 행/열값이 기존 행/열값과 동일해야한다.)
```


## :black_nib: **Review**
- top-bottom으로 어떻게 풀지도 생각해보자
- 보통 top-bottom은 이중 포문으로 이루어져있다.
  - 이때 문제도 오른쪽, 아래 방향으로 움직인다고 했으니 이중 포문의 인덱스도 오른쪽, 아래 방향으로 해보면 발상하기 쉬울것이다.
