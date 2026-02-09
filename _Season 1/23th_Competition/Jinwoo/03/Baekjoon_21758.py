import sys

N = int(input())                                                                # 장소의 수: N
N_list = list(map(int, sys.stdin.readline().split()))                           # 각 장소의 데이터 값(꿀벌이 채취할 수 있는 꿀의 값)
#print(N_list)

temp = 0                                                                        # 최대값 저장 변수

sum_list = []                                                                   # 누적합 리스트
sum_list.append(N_list[0])

for i in range(1, N):
    sum_list.append(sum_list[i-1] + N_list[i])                                  # 전의 누적합과 현재값을 더해 누적합 리스트를 만들어준다.
#print(sum_list)

# 벌통의 위치에 따른 경우의 수 나누기, 벌통 위치에 따라 최댓값의 경우의 수가 3개로 나눠진다.

# 왼쪽 끝에 벌통이 있을 때, 꿀벌 위치 오른쪽 끝, 오른쪽 끝 +1
for x in range(1, N-1):
    temp = max(temp, sum_list[N-2] + sum_list[x-1] - N_list[x])

# 오른쪽 끝에 벌통이 있을 때, 꿀벌 위치 왼쪽 끝, 왼쪽 끝 -1
for y in range(1, N-1):
    temp = max(temp, sum_list[N-1] - N_list[0] - N_list[y] + sum_list[N-1] - sum_list[y])

# 중앙에 벌통이 있을 시, 꿀벌 위치 왼쪽 끝, 오른쪽 끝
for z in range(1, N-1):
    temp = max(temp, sum_list[N-2] - N_list[0] + N_list[z])


print(temp)