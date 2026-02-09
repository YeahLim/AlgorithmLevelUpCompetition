import sys

input = sys.stdin.readline

N = int(input())
costs = [list(map(int, input().split())) for _ in range(N)]

INF = 1_000_000
ans = INF

for first_color in range(3):
    dp = [[INF] * 3 for _ in range(N)]

    dp[0][first_color] = costs[0][first_color]
    dp[0][(first_color + 1) % 3] = INF
    dp[0][(first_color + 2) % 3] = INF

    for i in range(1, N):
        dp[i][0] = costs[i][0] + min(dp[i - 1][1], dp[i - 1][2])
        dp[i][1] = costs[i][1] + min(dp[i - 1][0], dp[i - 1][2])
        dp[i][2] = costs[i][2] + min(dp[i - 1][0], dp[i - 1][1])

    for last_color in range(3):
        if last_color != first_color:
            ans = min(ans, dp[N - 1][last_color])

print(ans)