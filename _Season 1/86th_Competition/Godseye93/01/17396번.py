import sys
import heapq

input = sys.stdin.readline


def dijkstra(N, adj, A):
    dist = [float('inf')] * N
    dist[0] = 0
    pq = [(0, 0)]

    while pq:
        d, u = heapq.heappop(pq)
        if d > dist[u]:
            continue
        for v, w in adj[u]:
            if A[v] == 1 or dist[v] <= d + w:
                continue
            dist[v] = d + w
            heapq.heappush(pq, (d + w, v))

    return dist[N - 1] if dist[N - 1] != float('inf') else -1


N, M = map(int, input().split())
A = list(map(int, input().split()))
A[N - 1] = 0
adj = [[] for _ in range(N)]

for _ in range(M):
    u, v, w = map(int, input().split())
    adj[u].append((v, w))
    adj[v].append((u, w))

print(dijkstra(N, adj, A))