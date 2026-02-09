import sys
from collections import deque
input = sys.stdin.readline

n, m = map(int, input().split())
q = deque([])
arr = []
for i in range(n):
    lst = list(map(int, input().split()))
    arr.append(lst)
    if 2 in lst:
        q.append((i, lst.index(2), 0))
v = [[0] * m for _ in range(n)]
graph = [[0] * m for _ in range(n)]
v[q[0][0]][q[0][1]] = 1

while q:
    qr, qc, cnt = q.popleft()
    
    for dr, dc in [(0, 1), (1, 0), (-1, 0), (0, -1)]:
        r, c = qr + dr, qc + dc
        if 0 <= r < n and 0 <= c < m and not v[r][c] and arr[r][c]:
            graph[r][c] = cnt + 1
            q.append((r, c, cnt + 1))
            v[r][c] = 1
for i in range(n):
    for j in range(m):
        if arr[i][j] and not v[i][j]:
            graph[i][j] = -1
for g in graph:
    print(*g)