import sys
sys.setrecursionlimit(10000)
def dfs(i,j, db, visited):
    #out of index
    if j<0 or j>=n or i<0 or i>=m:
        return
    if visited[i][j] == True or db[i][j]==0:
        return
    visited[i][j] = True

    #left
    if not (j-1<0):
        dfs(i, j-1, db, visited)
    #right
    if not (j+1 >=len(db[0])):
        dfs(i, j+1, db, visited)
    #up
    if not(i-1<0):
        dfs(i-1, j, db, visited)
    #down
    if not(i+1>= len(db)):
        dfs(i+1, j, db, visited)

T = int(input())
ans_li = list()
for _ in range(T):
    #setting
    m, n, k = map(int, input().split())
    db = [ [0 for i in range(n)] for j in range(m)]
    visited = [ [False for i in range(n)] for j in range(m)]
    for _ in range(k):
        i, j = map(int, input().split())
        db[i][j] = 1

    count=0
    for i in range(m):
        for j in range(n):
            if visited[i][j] == True or db[i][j]==0:
                continue
            #start with root node
            dfs(i,j, db, visited)
            count +=1


    ans_li.append(count)
for i in ans_li:
    print(i)



