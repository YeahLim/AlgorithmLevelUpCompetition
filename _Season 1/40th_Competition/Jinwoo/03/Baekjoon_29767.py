import sys
input = sys.stdin.readline

N, K = map(int, input().split())        # N: 교실 수, K: 학생 수
data = list(map(int, input().split()))     # 각 교실의 점수 계수

dp = [0] * N    # 배열을 활용하여 누적합 저장
dp[0] = data[0]

# 교실 1번부터 i + 1 번 까지의 점수 계수의 누적합
for i in range(1, N):
	dp[i] = dp[i-1] + data[i]

# 누적합 배열 정렬
dp.sort(reverse=True)

# 결과 출력
print(sum(dp[:K]))
