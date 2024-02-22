import sys

input = sys.stdin.readline

N = int(input())
lines = [list(map(int, sys.stdin.readline().split())) for _ in range(N)]
Q = int(input())
questions = [list(map(int, sys.stdin.readline().split())) for _ in range(Q)]


def check_overlap(pivot, opponent):
    return not (opponent[0] > pivot[1] or opponent[1] < pivot[0])


dist = [[sys.maxsize] * N for _ in range(N)]
for i, pivot in enumerate(lines):
    for j, opponent in enumerate(lines):
        if i != j and check_overlap(pivot, opponent):
            dist[i][j] = 1

for v in range(N):
    dist[v][v] = 0
for k in range(N):
    for u in range(N):
        for v in range(N):
            dist[u][v] = min(dist[u][v], dist[u][k] + dist[k][v])

for frm, to in questions:
    cost = dist[frm - 1][to - 1]
    print(cost if cost != sys.maxsize else -1)
