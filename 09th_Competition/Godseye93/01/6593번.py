from collections import deque
import sys

input = sys.stdin.read
data = input().splitlines()

idx = 0
while idx < len(data):
    line = data[idx].strip()
    idx += 1
    if not line:
        continue
    L, R, C = map(int, line.split())
    if L == 0 and R == 0 and C == 0:
        break

    building = []
    start = None

    for l in range(L):
        floor = []
        for r in range(R):
            if idx >= len(data):
                break
            row = data[idx].strip()
            idx += 1
            if len(row) < C:
                continue
            floor.append(list(row[:C]))
            for c in range(C):
                if row[c] == 'S':
                    start = (l, r, c)
        building.append(floor)
        if idx < len(data) and not data[idx].strip():  # 빈 줄 건너뛰기
            idx += 1

    if start is None:
        print("Trapped!")
        continue

    directions = [(0,0,1),(0,0,-1),(0,1,0),(0,-1,0),(1,0,0),(-1,0,0)]

    queue = deque([(start[0], start[1], start[2], 0)])
    visited = [[[False] * C for _ in range(R)] for _ in range(L)]
    visited[start[0]][start[1]][start[2]] = True

    escaped = False
    time = 0

    while queue:
        z, y, x, time = queue.popleft()
        if building[z][y][x] == 'E':
            escaped = True
            break
        for dz, dy, dx in directions:
            nz, ny, nx = z + dz, y + dy, x + dx
            if (0 <= nz < L and 0 <= ny < R and 0 <= nx < C and
                not visited[nz][ny][nx] and building[nz][ny][nx] != '#'):
                visited[nz][ny][nx] = True
                queue.append((nz, ny, nx, time + 1))

    if escaped:
        print(f"Escaped in {time} minute(s).")
    else:
        print("Trapped!")