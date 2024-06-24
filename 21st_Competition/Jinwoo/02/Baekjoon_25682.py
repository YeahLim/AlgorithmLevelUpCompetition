import sys
sys.maxsize

M, N, K = map(int, sys.stdin.readline().rstrip().split())                                    # 가로: M, 세로: N, 체스판 길이: K
#print(M, N, K)

bord = []                                                                           # 정사각형의 체스판 값을 담을 2차원 배열
for i in range(M):                                                                  # 2차원 배열 만들기
    X = list(sys.stdin.readline().strip())
    bord.append(X)
#print(bord)

def chess(color):
    sum_list = [[0] * (N+1) for _ in range(M+1)]
    #print(sum_list)

    for r in range(M):                                                             # 2차배열 누적합 구하기, 체스판 시작이 'B'인 경우로 기준을 정해 누적합을 구했다.
        for c in range(N):
            if (r+c) % 2 == 0:                                                          # 인덱스가 0부터 시작하는 것을 고려했을때, board의 행과 열을 더해 짝수이면 color와 다름 == 1
                value = bord[r][c] != color

            else:                                                                       # 인덱스가 0부터 시작하는 것을 고려했을 때, board의 행과 열을 더해서 홀수이면 color와 같음 == 0
                value = bord[r][c] == color
            sum_list[r + 1][c + 1] = sum_list[r][c + 1] + sum_list[r + 1][c] - sum_list[r][c] + value   #2차원 배열의 누적합 구하기

    count = sys.maxsize

    for r in range(1, M - K + 2):

        for c in range(1, N - K + 2):
           count = min(count, sum_list[r + K - 1][c + K - 1] - sum_list[r + K - 1][c - 1] - sum_list[r - 1][c + K - 1] + sum_list[r - 1][c - 1])    # 2차원 배열의 누적합 마지막에 중복된 부분을 제거

    return count

print(min(chess('B'), chess('W')))