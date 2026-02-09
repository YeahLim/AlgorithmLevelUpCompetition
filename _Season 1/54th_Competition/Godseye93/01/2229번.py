import sys

input = sys.stdin.readline

N = int(input())
students = list(map(int, input().split()))

dp = [0] * (N + 1)

for i in range(1, N + 1):
    max_score = 0
    min_score = float('inf')
    for j in range(i, 0, -1):
        max_score = max(max_score, students[j - 1])
        min_score = min(min_score, students[j - 1])
        dp[i] = max(dp[i], dp[j - 1] + max_score - min_score)

print(dp[N])