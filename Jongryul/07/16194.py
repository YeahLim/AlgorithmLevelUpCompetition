import sys
input = sys.stdin.readline

n = int(input())
arr = [0] + list(map(int, input().split()))
dp = [arr[i] for i in range(n+1)]

for i in range(1, n+1):
    for j in range(1, i):
        if dp[i] > dp[i-j] + dp[j]:
            dp[i] = dp[i-j] + dp[j]
print(dp[n])