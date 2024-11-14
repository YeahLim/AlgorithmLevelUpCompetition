import copy
import sys
N, M = map(int, sys.stdin.readline().split())
K = int(sys.stdin.readline())

matrix = []
for _ in range(N):
    matrix.append(list(map(int, sys.stdin.readline().split())))

sum_matrix = copy.deepcopy(matrix)
for i in range(N):
    for j in range(M):
        if i == 0 and j == 0:
            pass
        elif i == 0:
            sum_matrix[0][j] += sum_matrix[0][j-1]  
        elif j == 0:
            sum_matrix[i][0] += sum_matrix[i-1][0]
        else:
            sum_matrix[i][j] += sum_matrix[i-1][j]
            for col in range(j):
                sum_matrix[i][j] += matrix[i][col]


for _ in range(K):
    i, j, x, y = map(int, input().split())

    if i == 1 and j == 1:
        print(sum_matrix[x-1][y-1])
    elif i == 1:
        print(sum_matrix[x-1][y-1] - sum_matrix[x-1][j-2])
    elif j == 1:
        print(sum_matrix[x-1][y-1] - sum_matrix[i-2][y-1])
    else:
        print(sum_matrix[x-1][y-1] - sum_matrix[i-2][y-1] - sum_matrix[x-1][j-2] + sum_matrix[i-2][j-2])
