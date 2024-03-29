# [백준] DFS와 BFS (1260)

## ⏰  **time**
1시간

## :pushpin: **Algorithm**
dfs bfs

## ⏲️**Time Complexity**
$O(V^2)$

## :round_pushpin: **Logic**
dfs, bfs
## :black_nib: **Review**
- graph를 처음 입력받을 때 2차원으로 받았다. -> 메모리 초과
- 그래서 다시 바꿈
-		```
for _ in range(M):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)
	```
