import sys
n, k = map(int, sys.stdin.readline().split())

dp = [[0] * (n+1) for _ in range(k+1)]

for i in range(n+1):
    dp[1][i] = 1

for i in range(2, k+1):
    s = 0
    for j in range(n+1):
        s += dp[i-1][j]
        dp[i][j] = s

print(dp[k][n]%1000000000)