import sys

input = sys.stdin.readline

N, M = map(int, input().split())
matrix = [list(map(int, input().split())) for _ in range(N)]
K = int(input())
queries = [list(map(int, input().split())) for _ in range(K)]

prefix_sum = [[0 for _ in range(M + 1)] for _ in range(N + 1)]

for row in range(1, N + 1):
    for col in range(1, M + 1):
        prefix_sum[row][col] = (prefix_sum[row - 1][col] +
                                prefix_sum[row][col - 1] +
                                matrix[row - 1][col - 1] -
                                prefix_sum[row - 1][col - 1])

for query in queries:
    i, j, x, y = query
    area_sum = (prefix_sum[x][y] -
                (prefix_sum[x][j - 1] if j > 1 else 0) -
                (prefix_sum[i - 1][y] if i > 1 else 0) +
                (prefix_sum[i - 1][j - 1] if i > 1 and j > 1 else 0))

    print(area_sum)