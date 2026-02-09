import sys
input = sys.stdin.readline

n = int(input())
arr = sorted([tuple(map(int, input().split())) for _ in range(n)])
dp = [1] * n

for i in range(n):
    for j in range(i+1, n):
        if arr[j][1] > arr[i][1]:
            dp[j] = max(dp[j], dp[i]+1)
print(n-max(dp))