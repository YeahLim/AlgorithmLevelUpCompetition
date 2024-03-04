n = int(input())

dp = [-1] * (n+1)
if n >= 2:
    dp[2] = 1
if n >= 5:
    dp[5] = 1

for i in range(3, n+1):
    if dp[i-2] != -1:
        dp[i] = dp[i-2] + 1
    if dp[i-5] != -1 and i > 5:
        dp[i] = min(dp[i], dp[i-5] + 1)
print(dp[n])
