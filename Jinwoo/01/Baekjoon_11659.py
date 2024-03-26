import sys

N, M = map(int, input().split())                                                    # N의 개수, 합을 구해야 하는 회수 M
N_list = list(map(int, sys.stdin.readline().split()))
sum_stack = [0]                                                                         # 누적합 리스트 (0번부터 1, 2, 3...N번째 까지의 누적합을 각 인덱스에 저장해놓자), (0번째는 없으므로 첫 인덱스에 0을 삽입)
N_sum = 0                                                                               # 누적합 (초기값을 0으로 초기화)

for _ in range(N):
    N_sum += N_list[_]                                                                  # N_list의 0번째 인덱스 값부터 하나씩 누적하여 더해준다.
    sum_stack.append(N_sum)                                                             # 더한 값을 각각의 인덱스에 저장한다.
# 시간 복잡도 O(N)

#print(N_list)
#print(sum_stack)


for _ in range(M):                                                                      # M만큼 반복하여
    i, j = map(int, sys.stdin.readline().split())                                       # i, j 범위값을 입력 받는다.

    print(sum_stack[j] - sum_stack[i-1])                                                # i부터 j까지의 범위값을 구하기 위해 j - (i-1) 를 해준다.
# 시간 복잡도 O(N)