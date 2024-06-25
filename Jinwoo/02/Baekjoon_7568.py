import sys

N = int(input())                                                    # 입력해야하는  정보 수: N
N_list = []

for i in range(N):
    weight, length = map(int, sys.stdin.readline().split())         # 사람 각각의 몸무게 키 입력

    N_list.append((weight, length))                                 # 정보 배열에 담기

for i in N_list:                                                    # 리스트의 i 인덱스 값과
    temp = 1
    for j in N_list:                                                # j 인덱스 값을 비교하여
        if i[0] < j[0] and i[1] < j[1]:                             # 몸무게와 키값이 다 클경우
            temp += 1                                               # 등수를 추가 시켜 준다.

    print(temp, end = " ")                                          # 리스트의 등수를 차례대로 출력