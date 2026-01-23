import sys
from collections import deque

input = sys.stdin.readline

def bfs(N, M, T, castle):
    directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]
    visited = [[[False] * 2 for _ in range(M)] for _ in range(N)]
    queue = deque([(0, 0, 0, 0)])
    visited[0][0][0] = True

    while queue:
        x, y, has_sword, time = queue.popleft()

        if time > T:
            continue

        if x == N - 1 and y == M - 1:
            return time

        for dx, dy in directions:
            nx, ny = x + dx, y + dy

            if 0 <= nx < N and 0 <= ny < M:
                if has_sword:
                    if not visited[nx][ny][1]:
                        visited[nx][ny][1] = True
                        queue.append((nx, ny, 1, time + 1))
                else:
                    if castle[nx][ny] != 1 and not visited[nx][ny][0]:
                        if castle[nx][ny] == 2:
                            visited[nx][ny][1] = True
                            queue.append((nx, ny, 1, time + 1))
                        else:
                            visited[nx][ny][0] = True
                            queue.append((nx, ny, 0, time + 1))

    return "Fail"


N, M, T = map(int, input().split())
castle = [list(map(int, input().split())) for _ in range(N)]

print(bfs(N, M, T, castle))