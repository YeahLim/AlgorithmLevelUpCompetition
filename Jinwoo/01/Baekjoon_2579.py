import sys
input = sys.stdin.readline

N = int(input())    # 계단의 개수
dp = [0] * (N+1)
point = [0] * (N+1)
for i in range(1, N+1):
    point[i] = int(input()) # 계단별 점수 입력
#print(dp)
#print(point)

# N이 2 이하일때의 예외 처리
if N == 1:
    print(point[1])
    exit()
elif N == 2:
    print(point[1] + point[2])
    exit()

dp[1] = point[1]
dp[2] = point[1] + point[2]

for i in range(3, N+1):
    if (dp[i-2] + point[i]) > (dp[i-3] + point[i-1] + point[i]):
        dp[i] = dp[i-2] + point[i]
    elif dp[i-2] + point[i] < dp[i-3] + point[i-1] + point[i]:
        dp[i] = dp[i - 3] + point[i - 1] + point[i]
    elif dp[i-2] + point[i] == dp[i-3] + point[i-1] + point[i]:
        dp[i] = dp[i-2] + point[i]
print(dp[N])