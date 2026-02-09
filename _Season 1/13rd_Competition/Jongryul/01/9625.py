k = int(input())

dp = [[1, 0], [0, 1]]
for i in range(len(dp)-1, k+1):
	dp.append([dp[i][0] + dp[i-1][0], dp[i][1] + dp[i-1][1]])
print(*dp[k])