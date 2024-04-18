import sys

N, M = map(int, input().split())                                                    # 전체 일 수: N, 일 할 수 있는 일 수: M

Calendar = list(map(int, sys.stdin.readline().split()))                             # 1부터 N까지 달력 일수당 받을 수 있는 일급 입력

sum_cnt = [0]                                                                        # 일급의 누적합 리스트

#print(Calendar)

Nsum = 0                                                                            # 누적합을 담을 변수

for i in range(N):                                                                  # 일수만큼 반복하여
    Nsum += Calendar[i]                                                             # 일 수의 누적합 값을 담고
    sum_cnt.append(Nsum)                                                            # 일 수마다의 일급 누적합을 리스트로 기록

#print(sum_cnt)

best_pay = []                                                                       # M일간의 합을 구해 리스트에 기록

for j in range(N-M+1):                                                              # M일간의 합을 0부터 N까지 구하는 반복문
    best_pay.append(sum_cnt[j+M] - sum_cnt[j])                                      # 누적합의 인덱스 j+M에서 인덱스 j를 빼주면 M개 구간의 합을 구할 수 있다. 그리고 일급을 제일 많이 받을 수 있는 경우를 구할 수 있도록 리스트에 값들을 넣어준 후
#    print(sum_cnt[j+M], sum_cnt[j])
#print(best_pay)
print(max(best_pay))                                                                # max 함수를 통해 리스트 중 가장 높은 수를 구해준다.