import sys
input = sys.stdin.readline

N = int(input())        # 상근이가 갖고있는 숫자 카드
N_list = list(map(int, input().split()))        # 숫자 카드에 적혀있는 숫자
M = int(input())        # 탐색 숫자 횟수
M_list = list(map(int, input().split()))        # 탐색해야 하는 숫자

N_dic = {}  # 들고있는 카드의 개수를 구해줄 딕셔너리

# 상근이가 들고 있는 카드 개수를 딕셔너리에 입력
for i in N_list:
    if i in N_dic:  # 기존 딕셔너리에 값이 있다면 value 값에 1을 더해줌
        N_dic[i] += 1

    else:           # 새로운 카드(키)에 대한 값 입력
        N_dic[i] = 1

# 검서해야할 값을 딕셔너리에서 찾은 후 출력
for j in M_list:
    if j in N_dic:
        print(N_dic[j], end=' ')

    else:   # 만일 값이 없을 경우는 0을 출력
        print(0, end= ' ')