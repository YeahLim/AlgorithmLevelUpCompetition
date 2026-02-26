from collections import deque
import sys
input = sys.stdin.readline

n, k = map(int, input().split())
board = [list(map(int, input().split())) for _ in range(n)]
s, x, y = map(int, input().split())

virus = []
for i in range(n):
    for j in range(n):
        if board[i][j] != 0:
            virus.append((board[i][j], 0, i, j))

virus.sort()
q = deque(virus)

dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]

while q:
    val, time, r, c = q.popleft()
    if time >= s:
        break
    for i in range(4):
        nr = r + dx[i]
        nc = c + dy[i]
        if 0 <= nr < n and 0 <= nc < n:
            if board[nr][nc] == 0:
                board[nr][nc] = val
                q.append((val, time + 1, nr, nc))

print(board[x-1][y-1])