import sys
input = sys.stdin.readline

n, m = map(int, input().split())
x, y, d = map(int, input().split())

# 0일때 r -1
# 1일때 c + 1
# 2일때 r + 1
# 3일때 c - 1

arr = [list(map(int, input().split())) for _ in range(n)]
dx = [-1,0,1,0]
dy = [0,1,0,-1]
v = [[0] * m for _ in range(n)]
v[x][y] = 1
cnt = 1
while 1:
    flag = 0
    for _ in range(4):
        nx = x + dx[(d+3)%4]
        ny = y + dy[(d+3)%4]
        d = (d+3)%4
        if 0 <= nx < n and 0 <= ny < m and arr[nx][ny] == 0:
            if v[nx][ny] == 0:
                v[nx][ny] = 1
                cnt += 1
                x = nx
                y = ny
                flag = 1
                break
    if flag == 0: 
        if arr[x-dx[d]][y-dy[d]] == 1: 
            print(cnt)
            break
        else:
            x, y = x-dx[d],y-dy[d]