# [백준 - 골드 5] 1240. 노드사이의 거리
 
## ⏰  **time**
20분

## :pushpin: **Algorithm**
bfs

## ⏲️**Time Complexity**
$O(N)$

## :round_pushpin: **Logic**
1. bfs.
```python
 def bfs(start, find):
    queue = deque()
    queue.append((start, 0))
    visited = [False] * (n + 1)
    visited[start] = True
    while queue:
        v, d = queue.popleft()

        if v == find: 
            return d

        for i, l in graph[v]:  
            if not visited[i]:
                visited[i] = True
                queue.append((i, d + l))  
```
