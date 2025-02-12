import sys
input = sys.stdin.readline

# N 자리 이친수
N = int(input())

dp = [0 for _ in range(N+1)]
cnt = 0

dp[1] = 1
#print(dp)

for i in range(2, N+1):
    dp[i] = dp[i-1] + dp[i-2]
print(dp[N])