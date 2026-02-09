import sys

N, K = map(int, input().split())                                                        # N 온도를 측정한 전체 날짜 수, K 연속 합을 구할 일 수

N_list = list(map(int, sys.stdin.readline().split()))
sum_stack = [0]                                                                         # N_list의 온도의 누적합을 담을 리스트
N_sum = 0                                                                               # 누적합을 sum_list에 집어넣기 위한 변수(저장공간)

#print(N, K)
#print(N_list)

for i in range(N):                                                                      # N_list의 누적합 리스트
    N_sum += N_list[i]                                                                  # i번 반복될 때 마다 i번 인덱스의 N_list 값을 N_sum에 저장 후
    sum_stack.append(N_sum)                                                             # 순서대로 축척된 누적 합 값을 sum_list에 넣는다.
# 시간 복잡도 O(N)

result = []

for j in range(N-(K-1)):                                                                # 누적합 리스트에서 K+j번 인덱스 값과 j번째 인덱스 값을 빼면 원하는 K번의 연속합을 구할 수 있다.
    result.append(sum_stack[K+j] - sum_stack[j])
# 시간 복잡도 O(N)

print(max(result))
# 시간 복잡도 O(N)