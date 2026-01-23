import sys

input =sys.stdin.readline


def dfs(x, y, tile, floor, visited, N, M):
    visited[x][y] = True
    if tile == '-':
        if y + 1 < M and floor[x][y + 1] == '-' and not visited[x][y + 1]:
            dfs(x, y + 1, tile, floor, visited, N, M)
        if y - 1 >= 0 and floor[x][y - 1] == '-' and not visited[x][y - 1]:
            dfs(x, y - 1, tile, floor, visited, N, M)
    else:
        if x + 1 < N and floor[x + 1][y] == '|' and not visited[x + 1][y]:
            dfs(x + 1, y, tile, floor, visited, N, M)
        if x - 1 >= 0 and floor[x - 1][y] == '|' and not visited[x - 1][y]:
            dfs(x - 1, y, tile, floor, visited, N, M)

N, M = map(int, input().split())
floor = [list(input()) for _ in range(N)]
visited = [[False] * M for _ in range(N)]
count = 0

for i in range(N):
    for j in range(M):
        if not visited[i][j]:
            dfs(i, j, floor[i][j], floor, visited, N, M)
            count += 1

print(count)