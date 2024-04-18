import sys

input = sys.stdin.readline

h, s = map(int, input().split())
flee = [[-1 for _ in range(s + 1)] for _ in range(h + s + 1)]

def dp(k, n):
    if flee[k][n] != -1:
        return flee[k][n]
    if k == 0:
        return 0
    if n == 0:
        return 1

    flee[k][n] = dp(k + 1, n - 1) + dp(k - 1, n - 1)
    return flee[k][n]

print(dp(h, s))
