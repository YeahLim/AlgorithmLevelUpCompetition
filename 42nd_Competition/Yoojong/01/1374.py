import sys
import heapq

N = int(sys.stdin.readline())
l = [list(map(int, sys.stdin.readline().split())) for _ in range(N)]
l.sort(key=lambda x: x[1])

mh = []
cnt = 0
for i in l:
    while mh and mh[0] <= i[1]:
        heapq.heappop(mh)
    heapq.heappush(mh, i[2])
    cnt = max(cnt, len(mh))

print(cnt)