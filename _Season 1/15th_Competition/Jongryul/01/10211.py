import sys
input = sys.stdin.readline

t = int(input())
for _ in range(t):
	n  = int(input())
	arr = list(map(int, input().split()))
	dp = [i for i in arr]
	for i in range(1, n):
		dp[i] = max(dp[i], dp[i-1] + dp[i])
	print(max(dp))