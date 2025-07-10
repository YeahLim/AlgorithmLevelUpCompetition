import sys

input = sys.stdin.readline

N = int(input())
open1, open2 = map(int, input().split())
M = int(input())
targets = [int(input()) for _ in range(M)]

dp = {}
INF = float('inf')


def solve(idx, left, right):
    if idx == M:
        return 0
    if (idx, left, right) in dp:
        return dp[(idx, left, right)]

    target = targets[idx]
    cost1 = abs(left - target) + solve(idx + 1, target, right)
    cost2 = abs(right - target) + solve(idx + 1, left, target)

    dp[(idx, left, right)] = min(cost1, cost2)
    return dp[(idx, left, right)]


result = solve(0, min(open1, open2), max(open1, open2))
print(result)