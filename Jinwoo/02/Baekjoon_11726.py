import sys
input = sys.stdin.readline

N = int(input())    # 2*n 직사각형 크기

dp = [0] * 1001     # 직사각형 최대 크기는 1000
dp[1] = 1
dp[2] = 2

for i in range(3, N+1):
    dp[i] = (dp[i-1] + dp[i-2]) % 10007

print(dp[N])