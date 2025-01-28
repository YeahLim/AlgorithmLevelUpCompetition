import sys
input = sys.stdin.readline

T = int(input())        # 테스트 케이스 입력
dp = [0] * 11
#print(dp)

for x in range(1, 11):
    if x == 1:
        dp[x] = 1

    elif x == 2:
        dp[x] = 2

    elif x == 3:
        dp[x] = 4

    else:
        dp[x] = dp[x-1] + dp[x-2] + dp[x-3]
#print(dp)

for i in range(T):
    N = int(input())    # 정수 N 입력
    print(dp[N])
