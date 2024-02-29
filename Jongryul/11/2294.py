import sys
input = sys.stdin.readline

n, k = map(int, input().split())
coins = [int(input()) for _ in range(n)]
dp = [1e9] * (k+1)
dp[0] = 0

for i in range(1, k+1):
    for c in coins:
        if i - c >= 0:
            dp[i] = min(dp[i-c]+1, dp[i])

if dp[k] != 1e9:
    print(dp[k])
else:
    print(-1)