import sys                                                  # sys 라이브러리 가져오기
T = int(input())                                            # 입력줄 갯수 T 선언
count = 0                                                   # 입력받은 괄호 정보에 따른 값을 저장할 count 변수 선언
for i in range(T):                                          # T만큼 반복하여
    T_list = list(map(str, sys.stdin.readline().strip()))   # 괄호값들을 입력받고 리스트를 만들어 T_list에 넣어줍니다.

    for j in T_list:                                        # 넣어준 괄호값들을 확인하기 위해 반복문을 하나 더 사용합니다.
        if j == '(':                                        # 입력받은 값이 '(' 이면
            count += 1                                      # count 변수에 +1를 해줍니다.
        elif j == ')':                                      # 입력받은 값이 ')' 이면
            count -= 1                                      # count 변수에 -1 을 해줍니다.

        if count < 0:                                       # 만일 이 for문에서 count 값이 음수가 된다면
            break                                           # break으로 반복문을 깨줍니다. 음수가 된다면 '())(' 다음과 같은 입력이 들어온 것입니다.
                                                            # 이렇게 입력이 들어올 경우 괄호를 다시 덮을 수 없기 때문에 count 변수가 음수가 되는 순간이 있으면 안됩니다.

    if count == 0:                                          # 음수가 되는 순간이 없도록 나온 후 count 값이 0이 라면 모든 괄호가 완벽하게 덮힌 상태 입니다.
        print("YES")                                        # 따라서 YES를 출력해 줍니다.
    else:                                                   # 하지만 0이 아닐경우 '()()(' 다음과 같이 '(' 괄호가 마지막에 들어온 것이므로
        print("NO")                                         # NO를 출력해 줍니다. ')'이 마지막으로 들어올 순 없습니다. break에 걸려 빠져나왔기 때문
    count = 0                                               # 다음 줄을 정확하게 확인할 수 있도록 count를 0으로 초기화 해 줍니다.