import sys

def dfs(i,j, db, visited):
    if j<0 or j>=n or i<0 or i>=m:
        return
    visited[i][j] = True
    if db[i][j] ==0:
        return
    #left
    dfs(i,j-1, db,visited)
    #right
    dfs(i,j+1, db,visited)
    #up
    dfs(i-1,j,db, visited)
    #down
    dfs(i+1,j,db,visited)

T = int(sys.stdin.readline())

for _ in range(T):
    #setting
    m, n, k = map(int, sys.stdin.readline().split())
    db = [ [0 for i in range(n)] for j in range(m)]
    visited = [ [False for i in range(n)] for j in range(m)]
    for _ in range(k):
        i, j = map(int, sys.stdin.readline().split())
        db[i][j] = 1

    count=0
    for i in range(m):
        for j in range(n):
            if visited[i][j] == True or db[i][j]==0:
                continue
            #start with root node
            dfs(i,j, db, visited)
            count +=1

    #visualize
    for i in range(m):
        print(db[i])

    for i in range(m):
        print(visited[i])

    print(count)



