import sys

M, N, K = map(int, sys.stdin.readline().split())                                    # 가로: M, 세로: N, 체스판 길이: K
print(M, N, K)

bord = []                                                                           # 정사각형의 체스판 값을 담을 2차원 배열
for i in range(N):                                                                  # 2차원 배열 만들기
    X = list(sys.stdin.readline().strip())
    bord.append(X)
print(bord)

sum_list = [[0] * (M+1) for _ in range(N+1)]
print(sum_list)

for r in range(1, N+1):                                                             # 2차배열 누적합 구하기, 체스판 시작이 'B'인 경우로 기준을 정해 누적합을 구했다.
    for c in range(1, M+1):
        if (r+c) % 2 == 0:                                                          # 체스판의 값이 짝수여야 하는 경우
            if bord[r-1][c-1] == 'B':                                               # 체스판 값이 B라면 값을 바꿀 필요가 없으므로 누적합을 그대로 더해준다.
                sum_list[r][c] = sum_list[r - 1][c] + sum_list[r][c - 1] - sum_list[r - 1][c - 1]
            else:                                                                   # 아니라면 바꿔야 되는 경우의 수를 1 늘려준다.
                sum_list[r][c] = sum_list[r - 1][c] + sum_list[r][c - 1] - sum_list[r - 1][c - 1] + 1

        else:                                                                       # 체스판의 값이 홀수여야 하는 경우
            if bord[r-1][c-1] == 'W':                                               # 체스판 값이 W라면 값을 바꿀 필요가 없으므로 누적합을 그대로 더해준다.
                sum_list[r][c] = sum_list[r - 1][c] + sum_list[r][c - 1] - sum_list[r - 1][c - 1]
            else:                                                                   # 아니라면 바꿔야 되는 경우의 수를 1 늘려준다.
                sum_list[r][c] = sum_list[r - 1][c] + sum_list[r][c - 1] - sum_list[r - 1][c - 1] + 1
print(sum_list)

max_bord = -float('inf')                                                            # 최댓값엔 음의 무한대를 넣어줌 (제일 작은 값)
min_bord = float('inf')                                                             # 최솟값엔 양의 무한대를 넣어줌 (제일 큰 값)
print(max_bord, min_bord)

for r in range(K, N+1):

    for c in range(K, M+1):
        max_bord = max(sum_list[r][c] - sum_list[r-K][c] - sum_list[r][c-K] + sum_list[r-K][c-K], max_bord)
        min_bord = min(sum_list[r][c] - sum_list[r-K][c] - sum_list[r][c-K] + sum_list[r-K][c-K], min_bord)
print(max_bord, min_bord)

print(min(min_bord, max_bord, K*K - min_bord, K*K - max_bord))                      # 체스판 시작값에 따라 최솟값을 구해주자