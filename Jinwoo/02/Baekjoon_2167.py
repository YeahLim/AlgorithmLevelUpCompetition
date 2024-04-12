import sys


N, M = map(int, input().split())

N_list = []                                                                         # 입력받은 표 값 (사실 이건 만들필요 없음)
XN_list = []                                                                        # X줄 누적값
Y_XN_list = []                                                                      # X줄 누적값의 Y줄 누적값

x = []
for i in range(M+1):                                                                # 표의 첫 열에 0값을 채워 넣어준다.
    x.append(0)                                                                     # 넓이를 구하는 공식에 xI나 yI이 1일 경우 겹치는 부분의 누적합이 없어 그 부분을 빼주지 않아도 되므로 가장자리 부분에 0을 넣었다.
Y_XN_list.append(x)
#print(Y_XN_list)

for i in range(N):                                                                  # 가로 세로 N인 N*M의 표 만들기
    x_list = list(map(int, sys.stdin.readline().split()))
    N_list.append(x_list)                                                           # 입력받은 좌표값 표

    sum_x = 0                                                                       # 입력받은 좌표의 누적값을 담을 변수
    sum_xlist = []                                                                  # 열의 누적합을 담을 리스트
    for j in x_list:                                                                # 입력받은 좌표값 X줄의 누적합 구하기
        sum_x += j
        sum_xlist.append(sum_x)                                                     # 열의 누적합들을 하나씩 담아 리스트 만들기
    XN_list.append(sum_xlist)                                                       # 열의 누적합들 리스트를 한열씩 추가
    # 시간복잡도 : 최대 1024 * (k < 5)

    sum_ylist = [0]
    for j in range(M):                                                              # X줄 누적합의 Y줄 누적합 구하기
        sum_ylist.append(sum_xlist[j] + Y_XN_list[i][j+1])
    Y_XN_list.append(sum_ylist)
    # 시간 복잡도 : 최대 1024 * (k < 5)
# 시간 복잡도 1024 * 1024 * (k < 10)

#print(N_list)
#print(XN_list)
#print((Y_XN_list))

K = int(input())                                                                    # 질문 개수 K

for j in range(K):
    xI, yI, xII, yII = map(int, sys.stdin.readline().split())                       # 넓이를 구할 좌표 시작값 (xI, yI) 그리고 끝값 (xII, yII) 입력

    resault = Y_XN_list[xII][yII] - Y_XN_list[xII][yI - 1] - Y_XN_list[xI - 1][yII] + Y_XN_list[xI - 1][yI - 1]
    # 최종 표를 활용하여 세운 공식

    #resault = Y_XN_list[yII][xII] - Y_XN_list[yII][xI - 1] - Y_XN_list[yI - 1][xII] + Y_XN_list[yI - 1][xI - 1]
    # x값이 행이고 y값이 열이라 반대로 푼 수식

    #print(Y_XN_list[yII][xII], Y_XN_list[yII][xI - 1], Y_XN_list[yI - 1][xII],
    #      Y_XN_list[yI - 1][xI - 1])
    print(resault)
