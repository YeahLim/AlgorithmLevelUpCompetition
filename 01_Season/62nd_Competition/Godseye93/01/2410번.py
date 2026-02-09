import sys
input = sys.stdin.readline

def solve(N):
    MOD = 1_000_000_000
    dp = [0] * (N + 1)
    dp[0] = 1
    powers = [1 << i for i in range(20) if (1 << i) <= N]
    for p in powers:
        for i in range(p, N + 1):
            dp[i] = (dp[i] + dp[i - p]) % MOD
    return dp[N]

N = int(input())
print(solve(N))