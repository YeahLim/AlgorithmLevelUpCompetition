import sys

T = int(input())                                                    # 테스트 케이스 수: T

for i in range(T):

    N = int(input())                                                # 베열의 크기: N
    N_list = list(map(int, sys.stdin.readline().split()))           # 배열의 내용

    max_list = [0] * N                                              # 각 연속된 배열의 최대합을 담을 리스트
    max_list[0] = N_list[0]                                         # 첫번째 최대합 = 배열의 첫번째 값

    for j in range(1,N):
        max_list[j] = max(max_list[j-1] + N_list[j], N_list[j])     # 현재값을 더한 값과 현재값을 비교, 더 큰 값을 최대합 리스트에 넣어준다.

    print(max(max_list))                                            # 최대합 리스트의 최댓값을 출력


