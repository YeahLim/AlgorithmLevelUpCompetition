import sys

N, X = map(int, input().split())                                                            # 블로그를 시작하고 지난 일 수: N, 범위 일수: X
N_list = list(map(int, sys.stdin.readline().split()))                                       # 각 일자별 블로그 방문자수 입력

sum_list = [0]                                                                              # 각 일자별 방문자수의 누적합을 담을 리스트
sum_N = 0
for i in range(N):                                                                          # 누적합 리스트 만들기
    sum_N += N_list[i]
    sum_list.append(sum_N)
#print(sum_list)

X_max = 0                                                                                   # X구간의 일자별 블로그 방문자 수
cnt = 0                                                                                     # 동일한 최대값이 있을시 count
for j in range(N-X+1):                                                                      # 누적합 리스트를 X범위 만큼 탐색해보자, 전체 경우를 보려면 N-X+1만큼 반복
    if X_max < sum_list[j+X] - sum_list[j]:                                                 # X의 최대보다 현재 X구간의 합이 클 경우
        X_max = sum_list[j+X] - sum_list[j]                                                 # 현재 X 구간의 합을 X_max에 넣어주고
        cnt = 1                                                                             # cnt를 1로 초기화 (새 최댓값 이므로 갯수는 다시 1)

    elif X_max == sum_list[j+X] - sum_list[j]:                                              # X_max와 같은 값이 나올 경우
        cnt += 1                                                                            # 최댓값 cnt만 올려주면 됨

if X_max == 0:                                                                              # X_max가 0일 경우는 블로그 방문자 수가 없는 것이므로
    print("SAD")                                                                            # "SAD" 출력
else:                                                                                       # 그 이외엔
    print(X_max)                                                                            # X구간 최댓값과
    print(cnt)                                                                              # 세어준 cnt 값 출력
