import sys
import heapq

input = sys.stdin.readline

v, e = map(int, input().split())
g = [[] for _ in range(v + 1)]
d = [1e9] * (v + 1)
for _ in range(e):
    a, b, w = map(int, input().split())
    g[a].append([b, w])
    g[b].append([a, w])


def dijkstra(s):
    q = []
    heapq.heappush(q, (0, s))
    d[s] = 0

    while q:
        dist, node = heapq.heappop(q)
        if dist > d[node]: continue

        for nxt in g[node]:
            new_cost = nxt[1] + d[node]
            if new_cost < d[nxt[0]]:
                d[nxt[0]] = new_cost
                heapq.heappush(q, (new_cost, nxt[0]))


dijkstra(1)

print(d[v])