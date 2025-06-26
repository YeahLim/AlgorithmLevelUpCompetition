import sys
n = int(sys.stdin.readline())

for _ in range(n):
    cnt = 0
    x1, y1, x2, y2 = map(int, sys.stdin.readline().split())
    N = int(sys.stdin.readline())
    for i in range(N):
        cx, cy, cr = map(int, sys.stdin.readline().split())
        dist1 = (x1 - cx) ** 2 + (y1 - cy) ** 2
        dist2 = (x2 - cx) ** 2 + (y2 - cy) ** 2
        if (dist1 < cr**2 and dist2 > cr**2) or ( dist1 > cr**2 and dist2 < cr**2):
            cnt += 1
    print(cnt)