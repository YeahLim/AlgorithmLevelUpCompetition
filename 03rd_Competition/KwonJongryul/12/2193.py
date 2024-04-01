n = int(input())

dp = [0, 1] + ([0] * (n))



for i in range(2, n+1):
	dp[i] = dp[i-2]+dp[i-1]


print(dp[n])
