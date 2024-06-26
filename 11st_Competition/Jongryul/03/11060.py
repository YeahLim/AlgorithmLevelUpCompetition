import sys
input = sys.stdin.readline
n = int(input())
arr = list(map(int, input().split()))
dp = [1e9] * n
dp[0] = 0
for i in range(1, arr[0]+1):
    if i < n:
        dp[i] = 1

for i in range(1, n):
    for j in range(1, arr[i]+1):
        k = i + j
        if k < n:
            dp[k] = min(dp[k], dp[i] + 1)
if dp[n-1] != 1e9:
    print(dp[n-1])
else:
    print(-1)
