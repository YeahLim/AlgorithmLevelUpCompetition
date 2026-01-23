import sys

input = sys.stdin.readline

n, k = map(int, input().split())

dp = [[0] * (k+1) for _ in range(n+1)]

wv = [[0, 0]]
for i in range(n):
    w, v = map(int, input().split())
    wv.append([w, v])


for i in range(1, n+1):
    w, v = wv[i]
    for j in range(1, k+1):
        if j < w:
            dp[i][j] = dp[i-1][j]
        else:
            dp[i][j] = max(v + dp[i-1][j-w], dp[i-1][j])


print(dp[n][k])