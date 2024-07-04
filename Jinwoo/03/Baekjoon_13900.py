import sys

N = int(input())                                                            # 입력받을 정수의 개수: N

N_list = list(map(int, sys.stdin.readline().split()))                       # 정수값 입력

result = 0
N_sum = 0

for i in range(N):                                                          # 입력받은 정수값 만큼 반복하여 모든 경우의 곱을 누적합 해주자
    result += N_list[i] * N_sum
    N_sum += N_list[i]

print(result)