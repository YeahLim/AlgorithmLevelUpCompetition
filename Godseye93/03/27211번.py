import sys

input = sys.stdin.readline

n, m = map(int, input().split())
grid = [list(map(int, input().split())) for _ in range(n)]

dx, dy = (0, 0, -1, 1), (-1, 1, 0, 0)
count = 0

for i in range(n):
    for j in range(m):
        if not grid[i][j]:
            count += 1
            stack = [(i, j)]
            grid[i][j] = 1

            while stack:
                x, y = stack.pop()
                for k in range(4):
                    nx, ny = (x + dx[k]) % n, (y + dy[k]) % m
                    if not grid[nx][ny]:
                        stack.append((nx, ny))
                        grid[nx][ny] = 1

print(count)
