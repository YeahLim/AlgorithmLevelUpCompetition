from collections import deque
import sys

input = sys.stdin.readline

n, m = map(int, input().split())
ice = [list(map(int, input().split())) for _ in range(n)]

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]


def melt():
    new_ice = [[0] * m for _ in range(n)]
    melt_cnt = [[0] * m for _ in range(n)]

    for i in range(n):
        for j in range(m):
            if ice[i][j] > 0:
                for d in range(4):
                    ni = i + dx[d]
                    nj = j + dy[d]
                    if 0 <= ni < n and 0 <= nj < m and ice[ni][nj] == 0:
                        melt_cnt[i][j] += 1

    for i in range(n):
        for j in range(m):
            if ice[i][j] > 0:
                new_ice[i][j] = max(0, ice[i][j] - melt_cnt[i][j])

    return new_ice


def bfs(x, y, visited):
    q = deque([(x, y)])
    visited[x][y] = True

    while q:
        cx, cy = q.popleft()
        for d in range(4):
            nx = cx + dx[d]
            ny = cy + dy[d]
            if 0 <= nx < n and 0 <= ny < m:
                if not visited[nx][ny] and ice[nx][ny] > 0:
                    visited[nx][ny] = True
                    q.append((nx, ny))


def count_iceberg():
    visited = [[False] * m for _ in range(n)]
    cnt = 0

    for i in range(n):
        for j in range(m):
            if ice[i][j] > 0 and not visited[i][j]:
                bfs(i, j, visited)
                cnt += 1

    return cnt


year = 0

while True:
    piece = count_iceberg()

    if piece >= 2:
        print(year)
        break
    if piece == 0:
        print(0)
        break

    ice = melt()
    year += 1