import sys
input = sys.stdin.readline

n = int(input())
dist_matrix = [[n] * n for _ in range(n)]
max_dist = [0] * n

for i in range(n):
    for j in range(n):
        if i == j:
            dist_matrix[i][j] = 0

while True:
    u, v = map(int, input().split())
    if [u, v] == [-1, -1]:
        break
    dist_matrix[u - 1][v - 1], dist_matrix[v - 1][u - 1] = 1, 1

for k in range(n):
    for i in range(n):
        for j in range(n):
            dist_matrix[i][j] = min(dist_matrix[i][j], dist_matrix[i][k] + dist_matrix[k][j])

for i in range(n):
    max_dist[i] = max(dist_matrix[i])

t = min(max_dist)
print(t, max_dist.count(t))
[print(i + 1, end=" ") for i in range(n) if max_dist[i] == t]
