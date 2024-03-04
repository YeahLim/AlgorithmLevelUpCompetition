import sys
input = sys.stdin.readline

n, GG = map(int, input().split())
GG_GG, GG_GB, GB_GG, GB_GB = map(float, input().split())

dp = [[0 for _ in range(2)] for _ in range(n+1)]
dp[0][GG] = 1

for i in range(n):
    dp[i+1][0] = dp[i][0]*GG_GG + dp[i][1]*GB_GG
    dp[i+1][1] = dp[i][0]*GG_GB + dp[i][1]*GB_GB

good = round(dp[n][0]*1000)
bad = round(dp[n][1]*1000)

print(good, bad, sep='\n')
