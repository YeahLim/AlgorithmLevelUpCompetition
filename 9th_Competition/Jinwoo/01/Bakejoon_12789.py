N = int(input())                                                                    # 승환이 앞에 서있는 학생들의 수 N

N_line = list(map(int, input().split()))                                            # 숫자 값들 입력
#시간복잡도 N

N_minlist = sorted(N_line)                                                          # 받은 숫자값의 최솟값 비교를 위해 N_list를 정렬하여 N_minlist에 넣어준다.
# 시간복잡도 NlogN

stack = []                                                                          # 한명씩 설 수 있는 공간을 배열로 표현
result = []                                                                         # 줄에서 순서대로 빠져나간 값을 저장
x = 0                                                                               # 최솟값 비교
N_end = len(N_minlist)                                                              # 반복문이 끝나는 조건값 스택에 숫자가 추가될 경우 1씩 추가시킨다.
i = 0                                                                               # 반복문 초기 값

while i < N_end + 1:                                                                # while문을 통해 받은 숫자값들을 비교한다. 다른 스택 값으로 옮겨야 할 경우 반복횟수가 1회 추가되어야 한다. 그리고 마지막 값을 비교하기 위해서 1을 추가 해준다.

    if len(N_line) > 0 and N_line[0] == N_minlist[x]:                               # 입력받은 숫자열의 첫번째 값이 내보내야할 최솟값과 같다면
        result.append(N_line[0])                                                    # 결과값 리스트에 현재 첫번째 리스트 값을 추가
        x += 1                                                                      # 결과값에 1이 추가 되었으므로 다음 최솟값을 비교해야 한다. 따라서 x에 1을 추가해 준다.
        N_line.pop(0)                                                               # 추가한 숫자를 리스트에서 삭제시킨다.

    else:                                                                           # 입력받은 숫자열의 첫번째 값이 최솟값이 아니거나 배열에 값이 없을 경우

        if len(stack) > 0 and stack[len(stack)-1] == N_minlist[x]:                  # 대기열 줄 stack의 최근에 들어간 값과 비교해준다.
            result.append(stack[len(stack) - 1])                                    # 현재 찾고있는 값과 같을경우 결과값 리스트에 최근에 들어간 stack 값을 추가한다.
            x += 1                                                                  # 결과값 리스트에 값이 추가 되었으므로 x값을 1 추가시켜 다음 값을 확인할 수 있도록 한다.
            stack.pop(len(stack) - 1)                                               # 결과값에 추가한 값을 stack에서 삭제 시킨다.

        else:                                                                       # stack에도 찾고 있는 값이 없거나 스택 리스트 값이 없을 경우
            if len(N_line) > 0:                                                     # N_list에 값이 있다면
                stack.append(N_line[0])                                             # N리스트의 첫번째 값을 stack에 추가 시킨다. (현재 상태론 조건에 만족하지 않으므로 값을 stack으로 옮겨준다.)
                N_line.pop(0)                                                       # N_list에서 옮긴 값을 삭제한 후
                N_end += 1                                                          # stack에서 확인해야 할 값이 더 생겼으므로 반복문이 끝날 조건을 1 더해준다.

    i += 1                                                                          # 모든 조건을 확인했으므로 while문의 i값에 1을 추가해준다.
'''
    print(i)
    print(N_line)
    print(stack)
    print(result)
    print("반복값 끝", N_end)
    print("------")
'''

#print("while문 빠져나옴")

if len(result) == len(N_minlist):                                                   # while문이 종료되었을 시 정렬이 가능할 경우 결과값 리스트와 비교값 리스트의 길이가 같을 것이다. 만일 조건이 충족되지 않을 경우 stack에 값이 쌓여 result로 빠져나오지 못하고 있을 것이다.
    for i in range(len(result)):                                                    # 같을 경우 for문을 통해 리스트 안의 값들을 확인해본다.
        if result[i] != N_minlist[i]:
            print("Sad")                                                            # 만일 해당 값들이 다를 경우 올바른 정렬이 아니므로
            break                                                                   # sad를 출력한 후 반복문을 종료한다.
        elif i == len(result) - 1:                                                  # break를 걸리지 않고 마지막 값까지 같을 경우 올바르게 순서가 정렬된 것이므로
            print("Nice")                                                           # nice를 출력한다.
else:
    print("Sad")                                                                    # 결과값의 배열과 확인할 값의 배열의 길이가 다를 경우는 올바른 순서 정리가 아니므로 sad를 출력한다.

#print(result)