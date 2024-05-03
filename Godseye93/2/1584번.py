from collections import deque
import sys

input = sys.stdin.readline

routeX = [-1, 1, 0, 0]
routeY = [0, 0, -1, 1]

n = int(input())
danger_zones = []
for _ in range(n):
    x1, y1, x2, y2 = map(int, sys.stdin.readline().split())
    danger_zones.append((x1, y1, x2, y2))

m = int(sys.stdin.readline())
death_zones = []
for _ in range(m):
    x1, y1, x2, y2 = map(int, sys.stdin.readline().split())
    death_zones.append((x1, y1, x2, y2))

graph = [[0] * 501 for _ in range(501)]
for i in range(501):
    for j in range(501):
        for x1, y1, x2, y2 in danger_zones:
            if min(x1, x2) <= i <= max(x1, x2) and min(y1, y2) <= j <= max(y1, y2):
                graph[i][j] = 1
        for x1, y1, x2, y2 in death_zones:
            if min(x1, x2) <= i <= max(x1, x2) and min(y1, y2) <= j <= max(y1, y2):
                graph[i][j] = 2

visit = [[False] * 501 for _ in range(501)]
queue = deque([(0, 0, 0)])
visit[0][0] = True
can_reach = False
answer = 0

while queue:
    x, y, damage = queue.popleft()
    if x == 500 and y == 500:
        can_reach = True
        answer = damage
        break

    for i in range(4):
        nx = x + routeX[i]
        ny = y + routeY[i]

        if 0 <= nx <= 500 and 0 <= ny <= 500 and not visit[nx][ny]:
            if graph[nx][ny] == 0:
                queue.appendleft((nx, ny, damage))
                visit[nx][ny] = True
            elif graph[nx][ny] == 1:
                queue.append((nx, ny, damage + 1))
                visit[nx][ny] = True

if can_reach:
    print(answer)
else:
    print(-1)
