import sys

input = sys.stdin.readline

t, w = map(int, input().split())
j = [0] + [int(input()) for _ in range(t)]
dp = [[0] * (w + 1) for _ in range(t + 1)]

dp[1][0], dp[1][1] = j[1] % 2, j[1] // 2

for i in range(2, t + 1):
    for k in range(w + 1):
        a = j[i] % 2 if k % 2 == 0 else j[i] // 2
        dp[i][k] = max(dp[i - 1][0:k + 1]) + a

print(max(dp[-1]))
