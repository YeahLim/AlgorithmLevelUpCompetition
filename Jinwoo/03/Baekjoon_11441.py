import sys

N = int(input())                                                            # 입력할 숫자의 갯수: N
N_list = list(map(int, sys.stdin.readline().split()))                       # 숫자들 입력
M = int(input())                                                            # 질문의 갯수: M

sum_list = [0]                                                              # 누적합을 담을 리스트
sum_N = 0                                                                   # 현재 숫자값을 담을 변수
for i in range(N):                                                          # 누적합 리스트 만들기
    sum_N += N_list[i]                                                      # 현재 값을 담은후
    sum_list.append(sum_N)                                                  # 누적합 리스트에 추가
#print(sum_list)

for j in range(M):                                                          # 질문의 갯수많큼 반복

    x, y = map(int, sys.stdin.readline().split())                           # 구간 입력받기

    result = sum_list[y] - sum_list[x-1]                                    # 누적합 리스트에서 입력받은 구간의 누적합을 빼주자.
    print(result)                                                           # 그 결과값을 출력