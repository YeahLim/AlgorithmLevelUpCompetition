import sys

S = list(map(str, input()))                                                     # 문자열 S 소문자로만 구성
q = int(input())                                                                # 질문의 수 1~200,000
sum_stack = [" "]                                                               # 문자열 S의 문자 누적합 리스트
S_sum = ""                                                                     # 문자열의 누적합을 저장할 변수

#print(S)

for i in S:                                                                     # 문자열 S를 누적합을 하여 sum_list에 순서대로 담는다.
    S_sum += i
    sum_stack.append(S_sum)
#    print(S_sum)
# 시간 복잡도 O(N)

#print(sum_stack)

for j in range(q):                                                              # 질문의 수 q만큼 반복하여
    a, b, c = map(str, sys.stdin.readline().split())                            # 확인할 문자 a와 범위 l, c를 문자열 형태로 a, b, c 받아준다.
    l = int(b)                                                                  # b에 인테자를 씌어 정수로 만들어 준 후 l에 넣는다.
    r = int(c)                                                                  # c에 인테자를 씌어 정수로 만들어 준 후 r에 넣는다.
    #print(a, l, r)

    r_count = 0
    l_count = 0
    for R in sum_stack[r+1]:
        if R == a:
            r_count += 1

    for L in sum_stack[l]:
        if L == a:
            l_count += 1

    print(r_count - l_count)