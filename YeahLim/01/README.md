# [백준 - 골드 5] 동전 2 (2294)
 
## ⏰  **time**
35분

## :pushpin: **Algorithm**
DP

## ⏲️**Time Complexity**
$O(N^2)$

## :round_pushpin: **Logic**
- 처음에 점화식을 구하려했는데, 시간복잡도가 `O(N*K = 1000000)`이기 때문에 코인 종류별로 쓱 돌아도 무관했다.

## :black_nib: **Review**
- 이러한 동전문제에서 코인이 서로 약수, 배수가 아닌 경우 DP로 풀어야한다.
- DP문제도 이중 for문을 사용할 수 있다.