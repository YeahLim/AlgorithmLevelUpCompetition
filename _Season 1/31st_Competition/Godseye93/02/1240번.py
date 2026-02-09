import sys
from collections import defaultdict

input = sys.stdin.readline

def dfs(node, parent):
    for neighbor, weight in graph[node]:
        if neighbor != parent:
            distances[neighbor] = distances[node] + weight
            parent_map[neighbor] = node
            dfs(neighbor, node)

def find_lca(a, b):
    ancestors_a = set()
    while a != -1:
        ancestors_a.add(a)
        a = parent_map[a]
    while b != -1:
        if b in ancestors_a:
            return b
        b = parent_map[b]
    return -1

n, m = map(int, input().strip().split())
graph = defaultdict(list)

for _ in range(n - 1):
    u, v, w = map(int, input().strip().split())
    graph[u].append((v, w))
    graph[v].append((u, w))

distances = [0] * (n + 1)
parent_map = [-1] * (n + 1)
dfs(1, -1)

for _ in range(m):
    a, b = map(int, input().strip().split())
    lca = find_lca(a, b)
    distance = distances[a] + distances[b] - 2 * distances[lca]
    print(distance)
