import sys
from collections import deque
input = sys.stdin.readline

n, m = map(int, input().split())
arr = list(map(int, input().split()))

q = deque([i for i in range(1, n+1)])
cnt = 0
for i in arr:
    if i == q[0]:
        q.popleft()
    else:
        idx = q.index(i)
        gap = len(q)-idx
        if idx > gap:
            q.rotate(gap)
            cnt += gap
        else:
            cnt += idx
            q.rotate(-idx)
        q.popleft()
print(cnt)