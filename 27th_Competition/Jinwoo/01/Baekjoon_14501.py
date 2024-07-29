import sys
N = int(input())

dp = [0 for i in range((N+1))]                                      # i번째까지 일했을 때 받을 수 있는 최대 수익
print(dp)

schedul = []                                                        # [상담 일수, 비용] 이렇게 2중 배열로 값 저장
for i in range(N):
    schedul.append(list(map(int, sys.stdin.readline().split())))
print(schedul)


for i in range(N):                                                  # "i 번째까지 일했을 때 얻는 최대 수익"을 계산하기 위한 i를 기준으로 둔다.
    print(i, "일차 최대 벌이를 구해보자")
    for j in range(i+schedul[i][0], N+1):                           # i + "상담 기간" 값부터

        if dp[j] < dp[i] + schedul[i][1]:                           # 전에 입력했던 최대 수익보다 클 경우
            dp[j] = dp[i] + schedul[i][1]                           # j를 기준으로 상담을 진행했었을 때 얻는 최대 수익을 dp[j]에 저장
            print("--------j:", j, ", i:", i, "--------")
            print(dp)
            print(" ")
        else:
            print("기존 최대 수익을 넘지 못함 pass")

print(dp)
print(dp[-1])