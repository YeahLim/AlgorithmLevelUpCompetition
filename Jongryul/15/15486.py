import sys
input = sys.stdin.readline

n = int(input())
arr = [tuple(map(int, input().split())) for _ in range(n)]
mx = 0
dp = [0] * n

for i in range(n):
    t, p = arr[i]
    if i+t-1 < n:
        dp[i+t-1] = max(dp[i+t-1], mx+p)
    mx = max(mx, dp[i])
    dp[i] = max(mx, dp[i])

print(dp[n-1])