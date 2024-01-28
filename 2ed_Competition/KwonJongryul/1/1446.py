import sys
from heapq import heappop, heappush
input = sys.stdin.readline

n, d = map(int, input().split())
distance = [1e9] * (d+1)
graph = [[] for _ in range(d+1)]

for i in range(d):
    graph[i].append((i+1, 1))

for _ in range(n):
    s, e, l = map(int, input().split())
    if e > d:
        continue
    graph[s].append((e, l))

q = []
heappush(q, (0, 0))
while q:
    cost, now = heappop(q)
    for i in graph[now]:
        cst = cost + i[1]
        if cst < distance[i[0]]:
            distance[i[0]] = cst
            heappush(q, (cst, i[0]))


print(distance[d])