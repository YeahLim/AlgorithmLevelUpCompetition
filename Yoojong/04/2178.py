#미로탐색 실1
import sys
from collections import deque
n, m = map(int, sys.stdin.readline().split())

graph = [list(map(int, ' '.join(sys.stdin.readline().split()))) for _ in range(n)]
dx = [0,0, 1,-1]
dy = [1,-1,0,0]
count =0

queue = deque([(0,0)])
while queue:
    x, y = queue.pop()
    for i in range(4):
        nx, ny = x+dx[i], y+dy[i]
        if 0<= nx <n and 0<=ny <m:
            if graph[nx][ny] == 1:
                queue.appendleft((nx,ny))
                graph[nx][ny] = graph[x][y] +1

print(graph[n-1][m-1])