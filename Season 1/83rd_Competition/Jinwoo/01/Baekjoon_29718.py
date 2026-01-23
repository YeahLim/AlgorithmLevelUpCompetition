import sys
input = sys.stdin.readline

N, M = map(int, input().split())

# 각 열의 총 박수 수 계산
column_sum = [0] * M
for _ in range(N):
    row = list(map(int, input().split()))
    for j in range(M):
        column_sum[j] += row[j]

A = int(input())

# 누적 합 방식으로 슬라이딩 윈도우 계산
current_sum = sum(column_sum[:A])
max_sum = current_sum

for i in range(A, M):
    current_sum += column_sum[i] - column_sum[i - A]
    max_sum = max(max_sum, current_sum)

print(max_sum)
