import sys
from collections import deque
input = sys.stdin.readline

M, N = map(int, input().split())    # 상자 크기 M: 가로, N: 세로

graph = [list(map(int, input().split())) for _ in range(N)]

day = 0
queue = deque([])

dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]


for i in range(N):
    for j in range(M):
        if graph[i][j] == 1:
            queue.append([i, j])

def bfs():
    while queue:
        # queue에서 토마토 꺼내기
        x, y = queue.popleft()

        # 인접한 안익은 토마토 찾기
        for k in range(4):
            nx = x + dx[k]
            ny = y + dy[k]

            if nx < 0 or nx >= N or ny < 0 or ny >= M:  # 좌표값이 그래프를 벗어날 경우 예외처리
                continue

            if graph[nx][ny] == 0:
                graph[nx][ny] = graph[x][y] + 1
                queue.append([nx, ny])

bfs()
for i in graph:
    for j in i:

        # 토마토가 다 안익은경우 -1 출력
        if j == 0:
            print(-1)
            exit(0)

    # 행렬의 최댓값 출력
    day = max(day, max(i))

print(day - 1)