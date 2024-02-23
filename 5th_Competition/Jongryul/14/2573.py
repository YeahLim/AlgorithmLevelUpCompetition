import sys
from collections import deque
input = sys.stdin.readline

n, m = map(int, input().split())
arr = [list(map(int, input().split())) for _ in range(n)]
di = [(1, 0), (0, 1), (-1, 0), (0, -1)]

def check_set():
    v = [[0] * m for _ in range(n)]
    cnt = 0

    for i in range(n):
        for j in range(m):
            if arr[i][j] and not v[i][j]:
                v[i][j] = 1
                cnt += 1
                q = deque([(i, j)])
                while q:
                    qr, qc = q.popleft()
                    for dr, dc in di:
                        r, c = qr + dr, qc + dc
                        if 0 <= r < n and 0 <= c < m and arr[r][c] and not v[r][c]:
                            q.append((r, c))
                            v[r][c] = 1
            v[i][j] = 1
    return cnt

def melt():
    melt_list = []
    for i in range(n):
        for j in range(m):
            if arr[i][j]:
                cnt = 0
                for dr, dc in di:
                    r, c = i + dr, j + dc
                    if 0 <= r < n and 0 <= c < m and not arr[r][c]:
                        cnt += 1
                melt_list.append((i, j, cnt))
    return melt_list

years = 0
rlt = check_set()
while 0 < rlt < 2:
    lst = melt()
    
    for i, j, c in lst:
        arr[i][j] = max(arr[i][j] - c, 0)
    rlt = check_set()
    years += 1

if rlt:
    print(years)
else:
    print(0)