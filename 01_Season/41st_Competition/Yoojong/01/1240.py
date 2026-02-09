import sys
from collections import deque
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


n, m = map(int, sys.stdin.readline().split())
graph = [[] for _ in range(n + 1)]

for _ in range(n - 1):
    n1, n2, l = map(int, input().split())
    graph[n1].append((n2, l))
    graph[n2].append((n1, l))

for _ in range(m):
    n1, n2 = map(int, input().split())
    print(bfs(n1, n2))