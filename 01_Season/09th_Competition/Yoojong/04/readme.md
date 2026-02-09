# [백준 - 실버 2] 유기농 배추 (1012)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

dfs

## ⏲️**Time Complexity**

$O(4*N)$

## :round_pushpin: **Logic**
dfs
```
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
```

## :black_nib: **Review**
- dfs 에서 계속 런타임 에러가 떴는데 알고보니
- sys.setrecursionlimit(10000) 이걸 안해서 그랬다. 너무 화가난다.
