import sys
input = sys.stdin.readline

n = int(input())

dp = [0] * (n+1)
arr = []
for _ in range(n):
    arr.append(tuple(map(int, input().rstrip().split())))
for i in range(n):
    for j in range(i+arr[i][0], n+1):
        dp[j] = max(dp[j], arr[i][1] + dp[i])
print(dp[-1])