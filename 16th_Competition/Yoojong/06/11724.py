import sys
# dfs 함수
def dfs(v):
    visited[v] = True
    for i in graph[v]:
        if not visited[i]:
            dfs(i)

n, m = map(int, sys.stdin.readline().split())
graph = [[] for _ in range(n+1)]
for i in range(m):
    u, v = map(int, sys.stdin.readline().split())
    graph[u].append(v)
    graph[v].append(u)

count = 0
visited = [False] * (n+1)
for i in range(1, n+1):
    if not visited[i]:
        dfs(i)
        count += 1

print(count)