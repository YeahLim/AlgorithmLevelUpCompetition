# [백준 - 골드 4] 여행
 
## ⏰  **time**
40분

## :pushpin: **Algorithm**
DP

## ⏲️**Time Complexity**
$O(N^2)$

## :round_pushpin: **Logic**
- 1 ~ N 가는데 최대값은 1 ~ N-1의 최대값 + N-1 ~ N의 최대값과 같다는 DP의 원리를 이용한다
- 이때 1번 도시도 M번 횟수에 포함되므로 지나온 도시 개수를 1개로 시작해야한다.

## :black_nib: **Review**
- 최대값은 DP
