# [백준 - 골드 5] 진우의 달 여행(Large)
 
## ⏰  **time**
1시간

## :pushpin: **Algorithm**
DP

## ⏲️**Time Complexity**
$O(N^2)$

## :round_pushpin: **Logic**
- 최소값은 이전의 최소값 + 현재값이므로 DP를 이용한다.
- 이때 방향을 따지므로 방향 * 행 * 열 의 DP 배열을 만들어서 최소값을 구하자

## :black_nib: **Review**
- 최소면 DP도 생각하자