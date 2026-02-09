import sys

input = sys.stdin.readline
INF = int(1e9)

n, m, r = map(int, input().split())
items = [0] + list(map(int, input().split()))

dist = [[INF] * (n+1) for _ in range(n+1)]
for i in range(1, n+1):
    dist[i][i] = 0

for _ in range(r):
    a, b, l = map(int, input().split())
    dist[a][b] = min(dist[a][b], l)
    dist[b][a] = min(dist[b][a], l)

for k in range(1, n+1):
    for i in range(1, n+1):
        for j in range(1, n+1):
            if dist[i][j] > dist[i][k] + dist[k][j]:
                dist[i][j] = dist[i][k] + dist[k][j]

ans = 0
for i in range(1, n+1):
    total = 0
    for j in range(1, n+1):
        if dist[i][j] <= m:
            total += items[j]
    ans = max(ans, total)

print(ans)