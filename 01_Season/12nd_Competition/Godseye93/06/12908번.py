import sys

input = sys.stdin.readline

INF = int(1e9)

xs, ys = map(int, input().split())
xe, ye = map(int, input().split())
vec = [(xs, ys), (xe, ye)]
for _ in range(3):
    a, b, c, d = map(int, input().split())
    vec.append((a, b))
    vec.append((c, d))

n = len(vec)
dist = [[INF]*n for _ in range(n)]
for i in range(n):
    dist[i][i] = 0

for i in range(n):
    for j in range(n):
        if i != j:
            len_ij = abs(vec[i][0] - vec[j][0]) + abs(vec[i][1] - vec[j][1])
            dist[i][j] = len_ij

for i in range(2, len(vec), 2):
    dist[i][i+1] = dist[i+1][i] = 10

for k in range(n):
    for i in range(n):
        for j in range(n):
            dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j])

print(dist[0][1])
