import sys
input = sys.stdin.readline

n = int(input())
di = [-1, 0, 1]
max_dp = [0] * 3
min_dp = [0] * 3


for _ in range(n):
	arr = list(map(int, input().split()))
	max_tmp = [0] * 3
	min_tmp = [0] * 3
	for i in range(3):
		mx = 0
		mn = 1e6
		for dc in di:
			c = i + dc
			if 0 <= c < 3:
				mx = max(mx, max_dp[c] + arr[i])
				mn = min(mn, min_dp[c] + arr[i])
		max_tmp[i] = mx
		min_tmp[i] = mn
	max_dp = max_tmp
	min_dp = min_tmp

print(max(max_dp), min(min_dp))