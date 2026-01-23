import sys                                                          # sys 라이브러리 가져오기
N = int(input())                                                    # 입력줄 갯수 N 입력받기
stack = []                                                          # 스택 리스트 선언
# 시간 복잡도 O(N)

for i in range(N):                                                  # N만큼 반복하여 입력으로 주어지는 명령어를 처리
    N_input = list(map(int, sys.stdin.readline().split()))          # 명령어를 입력 받는다. 1의 명령어일 경우 2개의 값을 공백으로 나눠 받아야 하므로 리스트 선언 후 입력값을 저장하였다.
#    print(N_input)
    if N_input[0] == 1:                                             # 입력 첫번째가 1일때
        stack.append(N_input[1])                                    # 입력 2번째 정수값을 stack에 추가한다.

    elif N_input[0] == 2:                                           # 입력 첫번째가 2일때
        if stack:                                                   # stack이 참일 경우(값이 있을 경우)
            print(stack.pop(-1))                                    # stack 리스트에서 마지막 정수를 제거 후, print로 빼낸 값을 출력한다.
            # 마지막 값을 제거할 때는 시간복잡도가 O(1)로 계산이 된다.
        else:                                                       # stack이 참이 아닐 경우 (값이 없을 경우)
            print(-1)                                               # -1 출력

    elif N_input[0] == 3:                                           # 입력 첫번째가 3일때
        print(len(stack))                                           # stack의 리스트 길이를 출력

    elif N_input[0] == 4:                                           # 입력 첫번째가 4일때
        if stack:                                                   # stack이 참일 경우(값이 있을 경우)
            print(0)                                                # 0 출력
        else:                                                       # stack이 거짓일 경우(값이 없을 경우)
            print(1)                                                # 1 출력

    elif N_input[0] == 5:                                           # 입력 첫번째가 5일때
        if stack:                                                   # stack이 참일 경우(값이 있을 경우)
            print(stack[-1])                                        # stack 리스트의 마지막 값(맨 위의 정수)를 출력
        else:                                                       # stack이 참이 아닐 경우(값이 없을 경우)
            print(-1)                                               # -1 출력
# 시간복잡도 O(N)