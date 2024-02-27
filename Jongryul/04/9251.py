import sys

input = sys.stdin.readline

a = 'x' + input().rstrip()
b = 'x' + input().rstrip()

la = len(a)
lb = len(b)

dp = [[0] * (lb) for _ in range(la)]

for i in range(la):
    for j in range(lb):
        if not i or not j:
            dp[i][j] = 0
        elif a[i] == b[j]:
            dp[i][j] = dp[i-1][j-1] + 1
        else:
            dp[i][j] = max(dp[i-1][j], dp[i][j-1])
print(dp[la-1][lb-1])
