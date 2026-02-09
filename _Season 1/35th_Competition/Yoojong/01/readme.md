# [백준 - 골드] 2096. 내려가기 

## ⏰  **time**
30분

## :pushpin: **Algorithm**
다이나믹 프로그래밍

## ⏲️**Time Complexity**
$O(N)$

## :round_pushpin: **Logic**
   ```python
for _ in range(N - 1):
    arr = list(map(int, sys.stdin.readline().split()))
    maxDP = [arr[0] + max(maxDP[0], maxDP[1]), arr[1] + max(maxDP), arr[2] + max(maxDP[1], maxDP[2])]
    minDP = [arr[0] + min(minDP[0], minDP[1]), arr[1] + min(minDP), arr[2] + min(minDP[1], minDP[2])]
   ```

## :black_nib: **Review**
- 
