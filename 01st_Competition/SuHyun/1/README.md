# [프로그래머스] 산 모양 타일링(2024 KAKAO WINTER INTERNSHIP)

## ⏰  **time**

5분

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 점화식
  ```
     (현재 가능한 삼각형 경우의 수) = (이전 모양에서 삼각형을 추가하는 경우) + (전전 모양에서 평행사변형을 추가하는 경우)
     dp[n] = dp[n-2]+dp[n-1];
  ```
  
 만약 지붕이 있다면 이전 경우의 수에서 평팽사변형도 가능하므로 이를 반영한다
  
  ```
     dp[n] = dp[n-2]+dp[n-1] (if 지붕이 없을때);
             dp[n-2]+dp[n-1]*2 (if 지붕이 있을때);
  ```

## :black_nib: **Review**
- DP를 모르겠으면 직접 해보는 것이 빠르다
