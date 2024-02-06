import sys
from collections import deque
input = sys.stdin.readline

n, l, R = map(int, input().split())
arr = [list(map(int, input().split())) for _ in range(n)]

cnt = -1
flag = True
def f():
    flag2 = False
    for i in range(n):
        for j in range(n):
            for dr, dc in [(0, 1), (1, 0), (-1, 0),(0, -1)]:
                r, c = dr + i, dc + j
                if not v[i][j] and 0 <= r < n and 0 <= c < n and not v[r][c]:
                    if l <= abs(arr[i][j] - arr[r][c]) <= R:
                        v[i][j] = 1
                        bfs(i, j)
                        # for p in arr:
                        #     print(p)
                        flag2 = True
    return flag2

def bfs(i, j):
    us = arr[i][j]
    teams = [(i, j)]
    q = deque([(i, j)])
    while q:
        qr, qc = q.popleft()
        for dr, dc in [(0, 1), (1, 0), (-1, 0),(0, -1)]:
                r, c = dr + qr, dc + qc
                if 0 <= r < n and 0 <= c < n and not v[r][c]:
                    if l <= abs(arr[qr][qc] - arr[r][c]) <= R:
                        us += arr[r][c]
                        teams.append((r, c))
                        q.append((r, c))
                        v[r][c] = 1
    for tr, tc in teams:
        arr[tr][tc] = us // len(teams)

while flag:
    v = [[0] * n for _ in range(n)]
    flag = f()
    cnt += 1

print(cnt)

