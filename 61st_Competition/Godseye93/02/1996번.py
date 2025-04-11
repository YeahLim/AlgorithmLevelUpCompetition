import sys

input = sys.stdin.readline

def solve(n, grid):
    result = [[0]*n for _ in range(n)]
    for i in range(n):
        for j in range(n):
            if '0' <= grid[i][j] <= '9':
                result[i][j] = '*'
            else:
                cnt = 0
                for di in (-1, 0, 1):
                    for dj in (-1, 0, 1):
                        ni, nj = i + di, j + dj
                        if 0 <= ni < n and 0 <= nj < n and '0' <= grid[ni][nj] <= '9':
                            cnt += int(grid[ni][nj])
                result[i][j] = str(cnt) if cnt < 10 else 'M'
    return result

n = int(input())
grid = [list(input().strip()) for _ in range(n)]
answer = solve(n, grid)
for row in answer:
    print(''.join(row))