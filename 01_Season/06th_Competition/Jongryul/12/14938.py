import sys
from heapq import heappop, heappush
input = sys.stdin.readline

n, m, r = map(int, input().split())
items = list(map(int, input().split()))

arr = [[] for _ in range(n)]

for _ in range(r):
    a, b, c = map(int, input().split())
    arr[a-1].append((b-1, c))
    arr[b-1].append((a-1, c))

def dijkstra(start):
    q = []
    cnt = items[start]
    heappush(q, (0, start))
    v = [0] * n
    v[start] = 1
    while q:
        dist, now = heappop(q)
        for next, l in arr[now]:
            cost = dist + l
            if cost <= m:
                heappush(q, (cost, next))
                if not v[next]:
                    cnt += items[next]
                v[next] = 1
    return cnt

rlt = 0
for i in range(n):
    rlt = max(rlt, dijkstra(i))
print(rlt)