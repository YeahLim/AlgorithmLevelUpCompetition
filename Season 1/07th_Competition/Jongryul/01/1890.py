import sys
input = sys.stdin.readline

n = int(input())
arr = [list(map(int, input().split())) for _ in range(n)]
dp = [[0] * n for _ in range(n)]

dp[0][0] = 1

for i in range(n):
    for j in range(n):
        if (i, j) == (n-1, n-1):
            continue
        r, c = i+arr[i][j], j+arr[i][j]
        if c < n and dp[i][j]:
            dp[i][c] += dp[i][j]
        if r < n and dp[i][j]:
            dp[r][j] += dp[i][j]

print(dp[n-1][n-1])