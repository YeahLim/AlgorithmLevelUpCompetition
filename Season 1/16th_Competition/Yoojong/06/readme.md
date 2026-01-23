# [백준- 실버2] 연결 요소의 개수 (11724)
 
## ⏰  **time**

20분

## :pushpin: **Algorithm**

dfs

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. dfs
    ```
def dfs(v):
    visited[v] = True
    for i in graph[v]:
        if not visited[i]:
            dfs(i)        
    ```

## :black_nib: **Review**
- dfs
