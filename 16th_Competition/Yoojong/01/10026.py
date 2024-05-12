#적록색약 골5
import sys
sys.setrecursionlimit(10000)

n = int(sys.stdin.readline())
db = []
for _ in range(n):
    c = list(sys.stdin.readline().rstrip())
    db.append(c)

visited = [[False] * n for i in range(n)]

def dfs(x,y, color):
    visited[x][y] = True
    dx = [0, 0, -1, +1]
    dy = [1, -1, 0, 0]

    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]
        if 0 <= nx < n and 0 <= ny < n and color == db[nx][ny] and visited[nx][ny] == False:
            dfs(nx, ny, color)

count = 0
for i in range(n):
    for j in range(n):
        if visited[i][j] == False:
            dfs(i,j, db[i][j])
            count +=1

#R->G
for i in range(n):
    for j in range(n):
        visited[i][j] = False
        if db[i][j] == 'R':
            db[i][j] ='G'
p_count = 0
for i in range(n):
    for j in range(n):
        if visited[i][j] == False:
            dfs(i,j, db[i][j])
            p_count +=1

print(count, p_count)




