import sys
input = sys.stdin.readline

# 집의 수
N = int(input())
cost = [[0, 0, 0] for _ in range(N+1)]
dp = [[0, 0, 0] for _ in range(N+1)]
# print(dp)

for i in range(1, N+1):
    cost[i] = list(map(int, input().split()))
# print(cost)

for j in range(1, N+1):
    dp[j][0] = min(dp[j-1][1], dp[j-1][2]) + cost[j][0]
    dp[j][1] = min(dp[j-1][0], dp[j-1][2]) + cost[j][1]
    dp[j][2] = min(dp[j-1][0], dp[j-1][1]) + cost[j][2]
# print(dp)

print(min(dp[N][:3]))