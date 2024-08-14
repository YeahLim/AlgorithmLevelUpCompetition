from collections import deque
import sys

def bfs(x, y):
    peak = []
    q = deque()
    q.append((x,y))
    peak.append([x,y])
    current = arr[x][y]

    while q:
        cx, cy = q.popleft()

        for k in range(8):
            nx, ny = cx + dx[k], cy + dy[k]

            if 0 <= nx < N and 0 <= ny < M and [nx, ny] not in peak:
                if arr[nx][ny] > current: 
                    return 0
                
                elif arr[nx][ny] == current: 
                    q.append((nx, ny))
                    peak.append([nx,ny])

    for k in range(len(peak)):
        arr[peak[k][0]][peak[k][1]] = 501

    return 1 
                

N, M = map(int, sys.stdin.readline().split())
arr = [[] * M for _ in range(N)]
ans = 0
dx = [-1, 1, 0, 0, 1, 1, -1, -1]
dy = [0, 0, -1, 1, 1, -1, 1, -1]
visited = [[False] * M for _ in range(N)]

for i in range(N):
    arr[i] = list(map(int, sys.stdin.readline().split()))

for i in range(N):
    for j in range(M):
        if arr[i][j] != 501:
            ans += bfs(i, j)

print(ans)
