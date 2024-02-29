n = int(input())

dp = [[0] * (n+1) for _ in range(10)]


for i in range(10):
    dp[i][1] = 1
for j in range(2, n+1):
    for i in range(10):
        for k in range(i, 10):
            dp[i][j] = dp[i][j] + dp[k][j-1]

total = 0

for i in range(10):
    total += dp[i][n]

print((total)%10007)