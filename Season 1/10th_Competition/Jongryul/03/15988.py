import sys
input= sys.stdin.readline

t = int(input())

dp = [1, 1, 2]
for _ in range(t):
	n = int(input())
	for i in range(len(dp), n+1):
		dp.append((dp[i-3] + dp[i-2] + dp[i-1]) % 1000000009)
	print(dp[n])