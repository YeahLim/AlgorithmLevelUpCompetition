#7569 토마토 골5
import sys
from collections import deque

m, n, h = map(int, sys.stdin.readline().split())
boxes =[]


for _ in range(h):
    box =[]
    for _ in range(n):
        tomatoes = list(map(int, sys.stdin.readline().split()))
        box.append(tomatoes)
    boxes.append(box)

def bfs():
    q = deque([])
    #익은 토마토를 넣자
    for z in range(h):
        for y in range(n):
            for x in range(m):
                if boxes[z][y][x] == 1:
                    q.appendleft((x,y,z))

    dx = [0,0,1,-1,0,0]
    dy = [1,-1,0,0,0,0]
    dz = [0,0,0,0,1,-1]
    while q:
        x, y, z = q.pop()
        for i in range(6):
            nx = dx[i] + x
            ny = dy[i] + y
            nz = dz[i] + z
            if 0 <= nx < m and 0 <= ny <n and 0<= nz < h and boxes[nz][ny][nx] == 0:
                boxes[nz][ny][nx] = boxes[z][y][x] + 1
                q.appendleft((nx,ny,nz))

bfs()
ans = 0
for z in range(h):
    for y in range(n):
        for x in range(m):
            #덜 익은 토마토 존재
            if boxes[z][y][x] == 0:
                print(-1)
                exit(0)
            ans = max(ans, max(boxes[z][y]))
print(ans -1)



