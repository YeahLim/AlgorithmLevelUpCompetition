import sys
input = sys.stdin.readline
n, m = map(int, input().split())

arr = [list(map(int, input().split())) for _ in range(n)]
dp = [arr[0]]+[[0] * m for _ in range(n-1)]

for i in range(n):
	for j in range(m):
		for dr, dc in [(1, 0), (0, 1), (1, 1)]:
			r, c = dr + i, dc + j
			if r < n and c < m:
				dp[r][c] = max(dp[r][c], dp[i][j] + arr[r][c])


print(dp[n-1][m-1])