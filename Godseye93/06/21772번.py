import sys
from collections import namedtuple

input = sys.stdin.readline

DPoint = namedtuple('DPoint', 'x y depth')

dx = [-1, 1, 0, 0]
dy = [0, 0, 1, -1]

def is_range_true(x, y):
    return 0 <= x < row and 0 <= y < col

def dfs(dp, count):
    global result
    if dp.depth == time:
        result = max(result, count)
        return

    x, y = dp.x, dp.y
    visit[x][y] = True

    for i in range(4):
        X, Y = x + dx[i], y + dy[i]
        if not is_range_true(X, Y):
            continue
        if arr[X][Y] == '#':
            continue
        if visit[X][Y]:
            dfs(DPoint(X, Y, dp.depth + 1), count)
        else:
            if arr[X][Y] == 'S':
                dfs(DPoint(X, Y, dp.depth + 1), count + 1)
                visit[X][Y] = False
            else:
                dfs(DPoint(X, Y, dp.depth + 1), count)

row, col, time = map(int, input().split())
arr = [list(input()) for _ in range(row)]
visit = [[False]*col for _ in range(row)]

dp = None
for i in range(row):
    for j in range(col):
        if arr[i][j] == 'G':
            dp = DPoint(i, j, 0)

result = 0
dfs(dp, 0)
print(result)