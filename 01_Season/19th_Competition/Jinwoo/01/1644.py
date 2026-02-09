N = int(input())                                                            # 수 입력 (최대: 4,000,000)

N_list = [False, False] + [True] * (N-1)                                    # 처음 0과 1은 "연속된 소수의 합" 이 될 수 없으므로 False로 두고 나머지 True값으로 둔다.
N_num = []                                                                  # "연속된 소수의 합"을 구할 빈 리스트를 선언해준다.
#print(N_list)

for i in range(2, N+1):                                                     # 0과 1을 제외한 모든 경우의 수를 따져보자
        if N_list[i]:                                                       # False가 아닌 값들은 "연속된 소수"이므로
            N_num.append(i)                                                 # 리스트에 담아준다.

            for j in range(2*i, N+1, i):                                    # 2의배수, 3의배수,...n의 배수 값을
                N_list[j] = False                                           # False로 만들어 준다.
# 에라토네스의 채 공식 시간복잡도 O(N * log logN)

#print(N_num)
#print(N_list)


start_point = 0                                                             # 시작 포인터
end_point = 0                                                               # 끝 포인터
answer_sum = 0                                                              # 소수의 연속합으로 나타낼 수 있는 경우의 수

while end_point <= len(N_num):                                              # "연속된 소수의 합" 리스트를 포인터가 다 훑을때까지 반복
    temp_sum = sum(N_num[start_point:end_point])                            # 연속된 소수의 합을 비교할 변수에 넣어주고

    if temp_sum == N:                                                       # 비교변수와 N과 같다면
        answer_sum += 1                                                     # 경우의 수에 포함된 것이므로 결과값 1 증가
        end_point += 1                                                      # 엔드 포인터 오른쪽으로 옮겨주기

    elif temp_sum < N:                                                      # N보다 작을 경우
        end_point += 1                                                      # 엔드 포인터 1 증가

    else:                                                                   # N보다 클 경우
        start_point += 1                                                    # 스타트 포인터 1 증가


print(answer_sum)                                                           # 모든 경우의 수를 살펴본 경우의 수를 출력한다.