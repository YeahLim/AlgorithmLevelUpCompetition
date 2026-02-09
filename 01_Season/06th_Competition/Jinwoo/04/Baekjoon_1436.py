N = int(input())                                        # 입력

num = 666                                               # 반복문에서 확인할 숫자의 시작
N_check = 0                                             # '666'이 연속으로 붙어있는 경우의 확인 횟수

# while문을 통해 반복하여 666부터 n번째의 666을 확인
while True:
    check_number = list(map(int, str(num)))             # check_number에 num을 문자열 형태로 넣어 놓는다. (연속으로 6 6 6 이 오는지 확인함을 위함)
    n = len(check_number)                               # check_number에 들어가있는 문자열 길으를 n으로 지정 (n이 4 이상일 경우 오른쪽으로 한칸씩 이동하여 연속으로 666이 오는지 확인해야함)

    for i in range(0, n-2):                             # for문을 통하여 check_number에 있는 문자열중 666이 연속으로 오는지 확인
        if check_number[i] == 6 and check_number[i+1] == 6 and check_number[i+2] == 6:
            N_check += 1                                # if 조건문을 통해 chek_number의 i, i+1, i+2 이렇게 연속으로 666이 나오는 경우를 찾음
            break                                       # 666이 있을 경우 조건에 부합함으로 N_check을 1 올려준 후 for문을 break로 빠져나온다.

    if N == N_check:                                    # 위 for문을 N번째까지 반복하고 N_check가 N과 동일할 경우 N번째의 666이 들어간 숫자를 찾은것 이므로
        print(num)                                      # N_check번째의 숫자를 출력해준 후
        break                                           # Break로 while문을 빠져나온다.
    num += 1                                            # 조건에 부합하지 않은 숫자가 나오면 확인할 숫자 num을 올려준다.
