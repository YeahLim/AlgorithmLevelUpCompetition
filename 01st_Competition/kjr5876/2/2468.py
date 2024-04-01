from collections import deque
import sys
input = sys.stdin.readline

n = int(input())
arr = [list(map(int, input().rstrip().split())) for _ in range(n)]
cnt = 0

for limit in range(0, 100):
    v = [[0] * (n) for _ in range(n)]
    tc = 0
    for i in range(n):
        for j in range(n):
            if arr[i][j] > limit and not v[i][j]:
                q = deque([(i, j)])
                v[i][j] = 1
                tc += 1
                while q:
                    qr, qc = q.popleft()
                    for dr, dc in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
                        r, c = qr + dr, qc + dc
                        if 0 <= r < n and 0 <= c < n and not v[r][c] and arr[r][c] > limit:
                            v[r][c] = 1
                            q.append((r, c))
    if not tc:
        break
    cnt = max(cnt, tc)
print(cnt)