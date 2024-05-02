import sys

input = sys.stdin.readline

digits = list(map(int, input().strip()))
n = len(digits)
dp = [[0] * 35 for _ in range(n)]
dp[0][digits[0]] = 1

for i in range(1, n):
    for j in range(1, 35):
        next_number = 10 * j + digits[i]
        if 10 <= next_number <= 34:
            dp[i][next_number] += dp[i-1][j]
        dp[i][digits[i]] += dp[i-1][j]

print(sum(dp[-1][1:]))
