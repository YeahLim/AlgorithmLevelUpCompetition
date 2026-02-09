import sys
from collections import deque

n, m = map(int, sys.stdin.readline().split())
targets = list(map(int, sys.stdin.readline().split()))

q = deque(range(1, n+1))
count = 0

for target in targets:
    while True:
        if q[0] == target:
            q.popleft()
            break

        if q.index(target) < len(q)/2:  # 왼쪽이 더 가까움
            while q[0] != target:
                q.append(q.popleft())
                count+=1
        else:
            while q[0] != target:
                q.appendleft(q.pop())
                count+=1
print(count)
