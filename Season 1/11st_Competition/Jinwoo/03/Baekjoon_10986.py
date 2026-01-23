import sys

N, M = map(int, input().split())                                                     # N개의 수, 나누는 수 M

N_list = list(map(int, sys.stdin.readline().split()))                                # N 개의 숫자들을 입력받는다.

N_sum = 0
N_rest = [0] * M                                                                     # N의 나머지 값의 누적합, 나머지 값들은 M을 넘을수 없기 때문에 M의 갯수만큼 준비한다.

for i in range(N):
    N_sum += N_list[i]                                                               # N개의 수를 차례대로 N_sum 변수에 넣어준 후
    N_rest[N_sum % M] += 1                                                           # 나머지 값을 누적합 하여 순서대로 리스트의 인덱스 값에 저장한다.
# 시간 복잡도 O(N)

result = N_rest[0]                                                                   # 나누어 떨어지는 값들을 결과값 변수에 넣어준다.

for i in range(M):                                                                   # 0으로 나누어 떨어지지 않는 수들은 2개의 결과값들을 뽑아야 나누어 떨어지는 경우의 수를 구할 수 있다.
    result += N_rest[i] * (N_rest[i] - 1) // 2                                       # i에서 2개를 뽑는 경의 수
# 시간 복잡도 O(N)

print(result)