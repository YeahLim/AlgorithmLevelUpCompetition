n, k = map(int, input().split())
dp = [[0] * i for i in range(1, n+1)]

for i in range(n):
	for j in range(i+1):
		if j == i or not j:
			dp[i][j] = 1
		else:
			dp[i][j] = dp[i-1][j-1] + dp[i-1][j]
print(dp[n-1][k-1])