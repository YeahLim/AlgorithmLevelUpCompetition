import sys
input = sys.stdin.readline

N = int(input())
left = list(map(int, input().split()))
right = list(map(int, input().split()))

dp = [[0] * (N + 1) for _ in range(N + 1)]

for i in range(N - 1, -1, -1):
    for j in range(N - 1, -1, -1):
        dp[i][j] = dp[i + 1][j]
        if left[i] > right[j]:
            dp[i][j] = max(dp[i][j], right[j] + dp[i][j + 1])
        else:
            dp[i][j] = max(dp[i][j], dp[i + 1][j + 1])

print(dp[0][0])