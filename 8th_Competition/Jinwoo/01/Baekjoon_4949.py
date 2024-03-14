import sys

Big_count = 0                                                                                       # 대괄호 카운트
small_count = 0                                                                                     # 소괄호 카운트


while True:                                                                                         # while문을 사용하여 반복
    STR_list = list(map(str, sys.stdin.readline().rstrip()))                                        # .가 찍힐때까지 반복하여 입력받는다.
    stack = []  # 스택 리스트

    if STR_list[0] == '.':                                                                          # 만일 입력값이 '.' 하나라면 반복문을 빠져나오자
        break

    else:                                                                                           # 아닐 경우 for문을 통해 문자열 정보들을 비교해보자
        for i in STR_list:
                                                                                                    #
            if i == '(':                                                                            # 문자열중 '('가 들어왔을때
                stack.append(i)                                                                     # 스택 리스트에 '('를 추가한다.

            elif i == '[':                                                                          # 문자열중 '['가 들어왔을때
                stack.append(i)                                                                     # 스택 리스트에 '['를 추가한다.

            elif i == ')':                                                                          # ')'나 ']'가 들어올 경우 앞에 있는 괄호를 덮어주기위해 들어오는 것이므로 스택에 마지막으로 들어온 값을 비교하여 올바르게 덮어 졌는지 아닌지 확인할 수 있다.
                if len(stack) != 0 and stack[-1] == '(':                                            # ')' 입력이 들어왔을 때 스택 리스트에 값이 있거나 (만일 ')' 나 ']'가 처음에 들어갈 경우 덮을 수 있는 괄호가 없어 잘못된 괄호 입력이기 때문) 마지막으로 들어온 값이 '(' 라면 올바른 괄호 입력이다.
                    stack.pop()                                                                     # pop() 함수를 이용하여 마지막에 들어온 스택 리스트 값 '('을 지워준다.
                else:                                                                               # 따라서 위 조건이 아닐경우 else문에서 stack에 ')'를 추가해준다. 이렇게 될 경우 for문을 완료 하였을 때 stack값이 0이 아니게 되므로 no를 출력한다.
                    stack.append(i)

            elif i == ']':                                                                          # 여기도 ')'와 마찬가지의 이유
                if len(stack) != 0 and stack[-1] == '[':
                    stack.pop()
                else:
                    stack.append(i)

        if len(stack) == 0:                                                                         # for문을 나왔을 때 stack의 값이 없다면 올바르게 입력된 괄호들이 리스트에서 빠져나간 것이므로 올바른 입력인 것이다.
            print("yes")                                                                            # 따라서 yes를 출력한다.
        else:                                                                                       # 나머지의 경우 올바른 입력이 아니므로
            print("no")                                                                             # no를 출력한다.
