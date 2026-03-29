# [프로그래머스 레벨 3] 스티커 모으기(2)

## ?  **time**
30분

## :pushpin: **Algorithm**
dp

## ??**Time Complexity**
$O(N)$

## :round_pushpin: **Logic**
- 점화식
    - `dp[i] = dp[i-1] + dp[i-2] + sticker[i]`
- 원형이기 때문에 첫번째와 마지막이 겹치지 않도록 주의해야함
    - 따라서 1. 첫번째 뜯고 마지막 안뜯고
    - 2. 첫번째 안뜯고 마지막 뜯고. 이렇게 두가지로 나눠엇 dp방정식 계산함

## :black_nib: **Review** 


## :black_nib: **C++**
- java의 `Math.max()` = cpp의 `max()`