import sys
from heapq import heappop, heappush

input = sys.stdin.readline

n = int(input())
m = int(input())

arr = [[] for _ in range(n +1)]
for _ in range(m):
    a, b, c = map(int, input().split())
    arr[a].append((b, c))
s, e = map(int, input().split())

q = []
heappush(q, (0, s))
distance = [1e9] * (n+1)
distance[s] = 0
parent = [0] * (n+1)
while q:
    cnt, now = heappop(q)
    if distance[now] < cnt:
        continue
    for i in arr[now]:
        cost = cnt+i[1]
        if cost < distance[i[0]]:
            parent[i[0]] = now
            distance[i[0]] = cost
            heappush(q, (cost, i[0]))
path = [e]
p = e

while p != s:
    p = parent[p]
    path.append(p)
print(distance[e])
print(len(path))
print(*reversed(path))