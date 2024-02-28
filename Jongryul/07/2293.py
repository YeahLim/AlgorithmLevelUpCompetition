import sys
input = sys.stdin.readline

n, k = map(int, input().split())
dp = [0] * (k+1)
dp[0] = 1

arr = [int(input()) for _ in range(n)]

for a in arr:
	for i in range(1, k+1):
		if i - a >= 0:
			dp[i] += dp[i-a]

print(dp[k])