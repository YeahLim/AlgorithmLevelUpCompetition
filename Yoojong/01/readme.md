# [백준 - 골드 5] 적록색약 (10026)
 
## ⏰  **time**

40분

## :pushpin: **Algorithm**

dfs

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**
1. 문제풀이
먼저 빨강이랑 초록이랑 구분하고 구한 다음 또 다시 빨강이랑 초록이랑 구분하지 않고 구한다.
''' python
def dfs(x,y, color):
    visited[x][y] = True
    dx = [0, 0, -1, +1]
    dy = [1, -1, 0, 0]

    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]
        if 0 <= nx < n and 0 <= ny < n and color == db[nx][ny] and visited[nx][ny] == False:
            dfs(nx, ny, color)
'''
## :black_nib: **Review**
- 빨강과 초록을 구분하는거랑 구분하지 않는거랑 한번에 구하고 싶었는데 불가능하였다.
