#골5 토마토
import sys
from collections import deque

m, n = map(int, sys.stdin.readline().split())

graph = []

for i in range(n):
    graph.append(list(map(int, sys.stdin.readline().split())))

def bfs():
    q = deque([])
    dx = [0, 0, 1, -1]
    dy = [1, -1, 0, 0] # 오, 왼, 아, 위

    #find 1
    for i in range(n):
        for j in range(m):
            if graph[i][j] == 1:
                q.append((i, j))

    while q:
        x, y = q.popleft()

        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if (0 <= nx < n and 0 <= ny < m and graph[nx][ny] ==0):
                graph[nx][ny] = graph[x][y] + 1
                q.append((nx, ny))

    for i in range(n):
        for j in range(m):
            if graph[i][j] == 0:
                return -1

    max_day = 0
    for row in graph:
        max_day = max(max_day, max(row))
    return max_day - 1

print(bfs())

