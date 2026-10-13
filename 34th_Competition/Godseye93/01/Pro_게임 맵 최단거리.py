from collections import deque

def solution(maps):
    n, m = len(maps), len(maps[0])
    q = deque([(0, 0)])
    dx = [0, 0, 1, -1]
    dy = [1, -1, 0, 0]
    while q:
        x, y = q.popleft()
        if x == n - 1 and y == m - 1:
            return maps[x][y]
        for i in range(4):
            nx, ny = x + dx[i], y + dy[i]
            if 0 <= nx < n and 0 <= ny < m and maps[nx][ny] == 1:
                maps[nx][ny] = maps[x][y] + 1
                q.append((nx, ny))
    return -1